%{
#include <stdio.h>
#include "structures.h"
#include "functions.h"
#include "shows.h"

is_program *myprogram;
extern int line;
%}
%token ARGS ASS_MUL ASS_DIV ASS_ADD ASS_SUB ASS_EQ ASS_AND ASS_LS ASS_RS
%token BOOLEAN BREAK BYTE
%token CASE CHAR CLASS CONTINUE
%token DEFAULT DO DOUBLE
%token ELSE
%token FALSE FLOAT FOR
%token IF IFELSE INT
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
is_increase_list *inc_list;
is_increase *inc;
is_condition_statement *cond;
is_variable *var;
is_value *val;
is_variable_list *var_l;
is_expression *exp;
is_function_call *call;
is_infix_expression *infix;
is_if_expression *is_if;
is_switch_case *sw;
is_control *cont;
is_condition_code *cond_code;
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
%type<is_if>if_expression
%type<cont>control
%type<cycle>cycle
%type<inc_list>increase_list
%type<inc>increase
%type<cond>if
%type<cond_code>condition_code
%type<sw>switch
%type<val>value
%type<uvt>type
%type<at>assign_operator

%nonassoc IFPREC
%nonassoc ELSE
%left  '+' '-'
%left  '*' '/' '%' '&' LS RS '(' ')'
%left OP_EQ OP_NE OP_LE OP_GE OP_LAND OP_LOR '<' '>'
%right '=' ASS_SUM ASS_SUB ASS_MUL ASS_DIV ASS_AND ASS_PERC ASS_LS ASS_RS
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

function:
	scope STATIC type ID '(' argument_list ')' code	{ $$ = insert_function($1, $3, $4, $6, $8);}
	;

scope:	PRIVATE		{$$ = is_private;}
	| PROTECTED	{$$ = is_protected;}
	| PUBLIC	{$$ = is_public;}
	;

code:	'{' '}' 			{ $$ = insert_code(NULL);}
	| '{' operation_list '}'	{ $$ = insert_code($2);}
	;

operation_list: 
	operation 	{$$ = insert_operation_list(NULL,$1);}
	| operation_list operation {$$ = insert_operation_list($1,$2);}
	;

operation:
	declaration ';'	{ $$ = insert_operation_dec($1);}
	| assignment';'	{ $$ = insert_operation_assign($1);}
	| unary	';'	{ $$ = insert_operation_unary($1); }
	| if		{ $$ = insert_operation_if($1);}
	| cycle		{ $$ = insert_operation_cycle($1);}
	| control ';'	{ $$ = insert_operation_control($1);}
	| function_call ';' { $$ = insert_operation_function($1);}
	;

declaration:
	type var_list 	 	{ $$ = insert_declaration($1,$2);}
	;
assignment:
	ID assign_operator expression			{ $$ = insert_assignment($1,$2,$3);}
	/*| ID '[' expression ']' operator expression	{ $$ = insert_assignment( );}*/
	;
unary:
	ID OP_INC	{ $$ = insert_unary($1, is_after_plus);}
	| OP_INC ID	{ $$ = insert_unary($2, is_before_plus);}
	| ID OP_DEC	{ $$ = insert_unary($1, is_after_minus);}
	| OP_DEC ID	{ $$ = insert_unary($2, is_before_minus);}
	;

control:
	BREAK			{ $$ = insert_control(is_break,NULL);}
	| CONTINUE		{ $$ = insert_control(is_continue,NULL);}
	| RETURN		{ $$ = insert_control(is_return,NULL);}
	| RETURN expression	{ $$ = insert_control(is_return_exp,$2);}
	;


expression:
	'(' expression ')'	{ $$ = insert_expression($2);}
	| value			{ $$ = insert_expression_value($1);}
	| function_call		{ $$ = insert_expression_func($1);}
	| infix_expression 	{ $$ = insert_expression_infix($1);}
	| if_expression		{ $$ = insert_expression_if($1);}
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

if_expression:
	expression '>' expression 	{ $$ = insert_if($1, is_OP_BIGGER, $3);}
	| expression '<' expression 	{ $$ = insert_if($1, is_OP_LOWER, $3);}
	| expression OP_EQ expression	{ $$ = insert_if($1, is_OP_EQ, $3);}
	| expression OP_LE expression	{ $$ = insert_if($1, is_OP_LE, $3);}
	| expression OP_GE expression	{ $$ = insert_if($1, is_OP_GE, $3);}
	| expression OP_NE expression 	{ $$ = insert_if($1, is_OP_NE, $3);}
	| expression OP_LOR expression	{ $$ = insert_if($1, is_OP_LOR, $3);}
	| expression OP_LAND expression { $$ = insert_if($1, is_OP_LAND, $3);}
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
	| ID '=' expression	{ $$ = insert_variable(is_id, $1, $3);}
	/*| ID '[' value ']'	{ $$ = insert_variable(is_array, $1, $3);}*/
	;

argument_list:
	argument			{ $$ = insert_argument_list(NULL, $1);}
	| argument_list ',' argument	{ $$ = insert_argument_list($1,$3);}
	;

argument:
	type ID  	{ $$ = insert_argument($1, $2);};
	;
	
cycle:
	FOR '(' assignment ';' if_expression ';' increase_list ')' condition_code	{ $$ = insert_for($3,$5,$7,$9);}
	| WHILE '(' if_expression ')' condition_code					{ $$ = insert_while($3,$5);}
	| DO condition_code WHILE '(' if_expression ')' ';'				{ $$ = insert_do_while($2,$5);}
	;

if:	IF '(' expression ')' condition_code %prec IFPREC			{ $$ = insert_if_statement($3, $5); }
	| IF '(' expression ')' condition_code ELSE condition_code		{ $$ = insert_if_else_statement($3,$5,$7);}
	| SWITCH '(' expression ')' '{' switch '}'				{ $$ = insert_switch_statement($3,$6);}
	;

increase_list:
	increase			{ $$ = insert_increase_list(NULL,$1);}
	| increase_list ',' increase 	{ $$ = insert_increase_list($1,$3);}
	;

increase:
	assignment	{ $$ = insert_assign_inc($1);}
	| unary		{ $$ = insert_unary_inc($1);}
	;
	

condition_code:
	'{' operation_list '}'	{ $$ = insert_condition_code($2, NULL);}
	| operation		{ $$ = insert_condition_code(NULL,$1);}
	| ';'			{ $$ = insert_condition_code(NULL,NULL);}
	| '{' '}'		{ $$ = insert_condition_code(NULL, NULL);}
	;
	

switch: 
	CASE value ':' operation_list switch 	{ $$ = insert_switch_case(is_NORMAL,$2,$4,$5);}
	| DEFAULT ':' operation_list switch	{ $$ = insert_switch_case(is_DEFAULT,NULL,$3,$4);}
	| CASE value ':' operation_list 	{ $$ = insert_switch_case(is_NORMAL,$2,$4,NULL);}
	| DEFAULT ':' operation_list		{ $$ = insert_switch_case(is_DEFAULT,NULL,$3,NULL);}
	;

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
	ID		{ $$ = insert_string(is_string, $1);}
	| STRING_VAL	{ $$ = insert_string(is_string, $1);}
	| NUMBER_VAL	{ $$ = insert_int(is_int, $1);}
	| DOUBLE_VAL	{ $$ = insert_double(is_double, $1);}
	| CHAR_VAL	{ $$ = insert_char(is_char, $1);}
	| TRUE		{ $$ = insert_boolean(is_boolean, 1);}
	| FALSE		{ $$ = insert_boolean(is_boolean, 0);}
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

int main(){
	yyparse();
	show_program(myprogram);
	printf("%d\n",line);
	return 0;
}
