%{
#include <stdio.h>
#include "structures.h"
#include "functions.h"

is_program *myprogram;
%}
%token ARGS ASS_MUL ASS_DIV ASS_ADD ASS_SUB ASS_EQ ASS_AND ASS_LS ASS_RS
%token BOOLEAN BREAK BYTE
%token CASE CHAR CLASS CONTINUE
%token DO DOUBLE
%token ELSE
%token FALSE FLOAT FOR
%token IF INT
%token LONG LS
%token MAIN
%token NEW JNULL
%token OP_INC OP_DEC OP_SHL OP_SHR OP_SHRR OP_GE OP_LE OP_EQ OP_NE OP_LAND OP_LOR OP_DIM
%token PRIVATE PROTECTED PUBLIC
%token SHORT STATIC STRING SWITCH
%token RETURN RS
%token TRUE THIS
%token VOID
%token WHILE

%token <val_i>NUMBER_VAL
%token <doubleval>DOUBLE_VAL
%token <string>STRING_VAL
%token <chr>CHAR_VAL
%token <string>ID

%union{
is_program *prog;
is_main *m;
is_function_list *func_list;
is_function *func;
is_code *cod;
is_parameter_list *param;
is_argument_list *arg_list;
is_argument *arg;
is_operation_list *oper_list;
is_operation *oper;
is_declaration *declar;
is_assignment *assign;
is_unary *un;
is_cycle *cycle;
is_if *condition;
is_variable *var;
is_value *val;
is_variable_list *var_l;
is_expression *exp;
is_function_call *call;
is_infix_expression *infix;
unsignedVariableType uvt;
operationType ot;
assignmentType at;
expressionType et;
infixType it;
unaryType ut;
scopeType st;
int val_i;
double doubleval;
char chr;
char *string;
}


%type<prog>init
%type<m>main
%type<func_list>function_list
%type<func>function
%type<arg_list>argument_list
%type<arg>argument
%type<st>scope
%type<cod>code
%type<oper_list>operation_list
%type<oper>operation
%type<declar>declaration
%type<assign>assignment
%type<un>unary
%type<var>var
%type<var_l>var_list
%type<exp>expression
%type<param>parameter_list
%type<call>function_call
%type<infix>infix_expression
/*%type<cycle>cycle
%type<condition>if*/
%type<val>value
%type<uvt>type
%type<at>assign_operator

%left  '+' '-'
%left  '*' '/' '%' '&' LS RS
%right '=' ASS_SUM ASS_SUB ASS_MUL ASS_DIV ASS_AND ASS_PERC ASS_LS ASS_RS
%nonassoc UMINUS
%start init
%%

init: 	
	CLASS ID '{' main '}'			{ $$ = insert_program($2,$4,NULL); myprogram = $$; }
	| CLASS ID '{' main function_list '}'	{ $$ = insert_program($2,$4,$5); myprogram = $$; }
	;

main: 	PUBLIC STATIC VOID MAIN '(' STRING '[' ']' ARGS ')' code	{ $$ = insert_main($11);}
	;

function_list:	
	function			{ $$ = insert_function_list(NULL,$1);}
	| function_list function 	{ $$ = insert_function_list($1,$2);}
	;

/*TODO */
function:
	scope STATIC type ID '(' argument_list ')' code	{ $$ = insert_function($1, $3, $4, $6, $8);}
	;

scope:	PRIVATE		{$$ = is_private;}
	| PROTECTED	{$$ = is_protected;}
	| PUBLIC	{$$ = is_public;}
	;

code:	'{' '}' 			{ $$ = insert_code(NULL); }
	| '{' operation_list '}'	{ $$ = insert_code($2); }
	;

operation_list: 
	operation 	{$$ = insert_operation_list(NULL,$1);}
	| operation_list operation {$$ = insert_operation_list($1,$2);}
	;

operation:
	declaration	{ $$ = insert_operation_dec($1);}
	| assignment	{ $$ = insert_operation_assign($1);}
	| unary	';'	{ $$ = insert_operation_unary($1);}
	/*| cycle		{}
	| if		{}*/
	;

declaration:
	type var_list ';' 	{ $$ = insert_declaration($1,$2);}
	;
assignment:
	ID assign_operator expression ';'	{ $$ = insert_assignment($1,$2,$3);}
	/*| ID '[' expression ']' operator expression	{ $$ = insert_assignment( );}*/
	;
unary:
	ID OP_INC	{ $$ = insert_unary($1, is_after_plus);}
	| OP_INC ID	{ $$ = insert_unary($2, is_before_plus);}
	| ID OP_DEC	{ $$ = insert_unary($1, is_after_minus);}
	| OP_DEC ID	{ $$ = insert_unary($2, is_before_minus);}
	;

expression:
	'(' expression ')'	{ $$ = insert_expression($2);}
	| value			{ $$ = insert_expression_value($1);}
	| function_call		{ $$ = insert_expression_func($1);}
	| infix_expression 	{ $$ = insert_expression_infix($1);}
	;

function_call:
	ID '(' ')'			{ $$ = insert_function_call($1,NULL);}
	| ID '(' parameter_list ')'	{ $$ = insert_function_call($1,$3);}
	;

infix_expression:
	expression '+' expression 	{ $$ = insert_infix($1, is_plus, $3);}
	| expression '-' expression 	{ $$ = insert_infix($1, is_minus, $3);}
	| expression '*' expression 	{ $$ = insert_infix($1, is_mult, $3);}
	| expression '/' expression 	{ $$ = insert_infix($1, is_div, $3);}
	| expression '%' expression 	{ $$ = insert_infix($1, is_percent, $3);}
	| expression '&' expression	{ $$ = insert_infix($1, is_and, $3);}
	| expression LS expression	{ $$ = insert_infix($1, is_lshift, $3);}
	| expression RS expression	{ $$ = insert_infix($1, is_rshift, $3);}
	;

parameter_list:	
	expression			{ $$ = insert_parameter_list(NULL, $1);}
	| parameter_list ',' expression	{ $$ = insert_parameter_list($1, $3);}
	;

var_list:
	var			{ $$ = insert_variable_list(NULL, $1);}
	| var_list ',' var	{ $$ = insert_variable_list($1, $3);}
	;

var:
	ID			{ $$ = insert_variable(is_id, $1, NULL);}
	| ID '=' value		{ $$ = insert_variable(is_id, $1, $3);}
	/*| ID '[' value ']'	{ $$ = insert_variable(is_array, $1, $3);}*/
	;

argument_list:
	argument			{ $$ = insert_argument_list(NULL, $1);}
	| argument_list ',' argument	{ $$ = insert_argument_list($1,$3);}
	;

argument:
	type ID  	{ $$ = insert_argument($1, $2);};
	;
	

/*cycle:
	;
if:
	;*/

assign_operator:
	'='		{ $$ = is_ASS_EQ;}
	| ASS_ADD	{ $$ = is_ASS_ADD;}
	| ASS_SUB	{ $$ = is_ASS_SUB;}
	| ASS_MUL	{ $$ = is_ASS_MUL;}
	| ASS_DIV	{ $$ = is_ASS_DIV;}
	| ASS_PERC	{ $$ = is_ASS_PERC;}
	| ASS_AND	{ $$ = is_ASS_AND;}
	;

value:
	STRING_VAL	{ $$ = insert_string(is_string, $1);}
	| NUMBER_VAL	{ $$ = insert_int(is_int, $1);}
	| DOUBLE_VAL	{ $$ = insert_double(is_double, $1);}
	| CHAR_VAL	{ $$ = insert_char(is_char, $1);}
	| TRUE		{ $$ = insert_boolean(is_boolean, 1);}
	| FALSE		{ $$ = insert_boolean(is_boolean, 0);}
	| ID		{ $$ = insert_string(is_string, $1);}
	;

type:
	CHAR		{$$ = is_char;}
	| INT		{$$ = is_int;}
	| STRING 	{$$ = is_string;}
	| BOOLEAN	{$$ = is_boolean;}
	| FLOAT		{$$ = is_double;}
	| VOID		{$$ = is_void;}
	;


%%

int yyerror (char *s)
{
	printf ("%s\n", s);
}

int main()
{
	yyparse();
	return 0;
}
