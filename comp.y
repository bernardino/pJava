%{
#include <stdio.h>
#include "structures.h"
#include "functions.h"

%}
%token ARGS ASS_MUL ASS_DIV ASS_MOD ASS_ADD ASS_SUB ASS_SHL ASS_SHR ASS_SHRR ASS_AND ASS_XOR ASS_OR
%token BOOLEAN BREAK BYTE
%token CASE CHAR CLASS CONTINUE
%token DO DOUBLE
%token ELSE
%token FALSE FLOAT FOR
%token IF INT
%token LONG
%token MAIN
%token NEW JNULL
%token OP_INC OP_DEC OP_SHL OP_SHR OP_SHRR OP_GE OP_LE OP_EQ OP_NE OP_LAND OP_LOR OP_DIM
%token PRIVATE PROTECTED PUBLIC
%token SHORT STATIC STRING SWITCH
%token RETURN
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
is_argument_list *arg_list;
is_argument *arg;
is_operation_list *oper_list;
is_operation *oper;
is_declaration *declar;
is_assignment *assign;
is_variable *var;
is_cycle *cycle;
is_if *condition;
is_value *val;
is_variable_list *var_l;
is_expression *exp;
is_infix_expression *infix;
is_unary_expression *unary;
unsignedVariableType uvt;
operationType ot;
assignmentType at;
expressionType et;
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
/*%type<arg_list>argument_list
%type<arg>argument*/
%type<st>scope
%type<cod>code
%type<oper_list>operation_list
%type<oper>operation
%type<declar>declaration
/*%type<assign>assignment*/
%type<var>var
%type<var_l>var_list
/*%type<cycle>cycle
%type<condition>if
%type<exp>expression
%type<infix>infix_expression
%type<unary>unary_expression*/
%type<val>value
%type<uvt>type

%left  '+' '-'
%left  '*' '/' '%'
%right '='
%nonassoc UMINUS

%%

init: 	
	CLASS ID '{' main '}'			{ $$ = insert_program($2,$4,NULL);}
	| CLASS ID '{' main function_list '}'	{ $$ = insert_program($2,$4,$5);}
	;

main: 	PUBLIC STATIC VOID MAIN '(' STRING '[' ']' ARGS ')' code	{ $$ = insert_main($11);}
	;

function_list:	
	function			{ $$ = insert_function_list(NULL,$1);}
	| function_list function 	{$$ = insert_function_list($1,$2);}
	;

/*TODO */
function:
	scope STATIC type ID '(' ')' code	{}
	;

scope:	PRIVATE		{$$ = is_private;}
	| PROTECTED	{$$ = is_protected;}
	| PUBLIC	{$$ = is_public;}
	;

code:	'{' '}' 	{}
	| '{' operation_list '}'	{}
	;

operation_list: 
	operation 	{}
	| operation_list operation {}
	;

operation:
	declaration	{}
	/*| assignment	{}
	| function	{}
	| cycle		{}
	| if		{}*/
	;

declaration:
	type var_list ';' 	{}
	;
/*assignment:
	;
expression:
	;
infix_expression:
	;
unary_expression:
	;*/


var_list:
	var			{}
	| var ',' var_list	{}
	;

var:
	ID				{ /*$$ = insert_variable(is_id, $1, NULL);*/}
	| ID '=' value			{ /*$$ = insert_variable(is_id, $1, $3);*/}
	| ID '[' value ']'		{ /*$$ = insert_variable(is_array,$1,$3);*/}
	;

value:
	STRING_VAL	{ $$ = insert_string(is_string,$1);}
	| NUMBER_VAL	{ $$ = insert_int(is_int, $1);}
	| DOUBLE_VAL	{ $$ = insert_double(is_double,$1);}
	| CHAR_VAL	{ $$ = insert_char(is_char,$1);}
	| TRUE		{ $$ = insert_boolean(is_boolean,1);}
	| FALSE		{ $$ = insert_boolean(is_boolean,0);}
	| ID		{ $$ = insert_string(is_string,$1);}
	;
/*cycle:
	;
if:
	;*/

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
