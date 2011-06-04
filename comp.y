%{
#include <stdio.h>
#include "symbol_table.h"
#include "structures.h"
#include "functions.h"
#include "shows.h"
#include "semantics.h"
#include "translate.h"

prog_env *ambient = NULL;
is_program *myprogram;
extern int line;
int errors;

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
%token OP_INC OP_DEC OP_SHL OP_SHR OP_SHRR OP_GE OP_LE OP_EQ OP_NE OP_LAND OP_LOR OP_DIM OUT
%token PRINT PRINTLN PRIVATE PROTECTED PUBLIC
%token SHORT STATIC STRING SWITCH SYSTEM
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
is_global_list *glob;
is_global_dec *dec;
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
is_for_init *ini;
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
%type<glob>global_list
%type<dec>global_variable
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
%type<ini>forInit
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
	CLASS ID '{' main function_list '}'			{ $$ = insert_program($2,$4,$5,NULL); myprogram = $$; }
	| CLASS ID '{' main '}'					{ $$ = insert_program($2,$4,NULL,NULL); myprogram = $$; }
	| CLASS ID '{' global_list main '}'			{ $$ = insert_program($2,$5,NULL,$4); myprogram = $$; }
	|  CLASS ID '{' global_list main function_list '}'	{ $$ = insert_program($2,$5,$6,$4); myprogram = $$; }
	;

main: 	scope STATIC VOID MAIN '(' STRING '[' ']' ARGS ')' code	{ $$ = insert_main($11);}
	;

global_list:
	global_variable			{ $$ = insert_global_list(NULL,$1);}
	| global_list global_variable	{ $$ = insert_global_list($1,$2);}
	;
	
global_variable:
	scope STATIC declaration ';'	{ $$ = insert_global_declaration($1,$3,line);}
	| declaration ';'		{ $$ = insert_global_declaration(is_public,$1,line);}
	;

function_list:
	function			{ $$ = insert_function_list(NULL,$1);}
	| function_list function 	{ $$ = insert_function_list($1,$2);}
	;

function:
	scope STATIC type ID '(' argument_list ')' code	{ $$ = insert_function($1, $3, $4, $6, $8,line);}
	;

scope:	
	PRIVATE		{$$ = is_private;}
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
	declaration ';'		{ $$ = insert_operation_dec($1);}
	| assignment';'		{ $$ = insert_operation_assign($1);}
	| unary	';'		{ $$ = insert_operation_unary($1); }
	| if			{ $$ = insert_operation_if($1);}
	| cycle			{ $$ = insert_operation_cycle($1);}
	| control ';'		{ $$ = insert_operation_control($1);}
	| function_call ';'	{ $$ = insert_operation_function($1);}
	;

declaration:
	type var_list 	 	{ $$ = insert_declaration($1,$2,line); }
	;
assignment:
	ID assign_operator expression			{ $$ = insert_assignment($1,$2,$3,line);}
        | ID assign_operator assignment                 { $$ = insert_assignment($1,$2,$3->expression,line);}
	;
unary:
	ID OP_INC	{ $$ = insert_unary($1, is_after_plus,line);}
	| OP_INC ID	{ $$ = insert_unary($2, is_before_plus,line);}
	| ID OP_DEC	{ $$ = insert_unary($1, is_after_minus,line);}
	| OP_DEC ID	{ $$ = insert_unary($2, is_before_minus,line);}
	;

control:
	BREAK                                               { $$ = insert_control(is_break,NULL,line);}
	| CONTINUE                                          { $$ = insert_control(is_continue,NULL,line);}
	| RETURN                                            { $$ = insert_control(is_return,NULL,line);}
	| RETURN expression                                 { $$ = insert_control(is_return_exp,$2,line);}
        | SYSTEM '.' OUT '.' PRINTLN '(' expression ')'     { $$ = insert_control(is_println,$7,line);}
        | SYSTEM '.' OUT '.' PRINT '(' expression ')'       { $$ = insert_control(is_print,$7,line);}
	;


expression:
	'(' expression ')'	{ $$ = insert_expression($2,line);}
	| value			{ $$ = insert_expression_value($1,line);}
	| function_call		{ $$ = insert_expression_func($1,line);}
	| infix_expression 	{ $$ = insert_expression_infix($1,line);}
	/*| if_expression		{ $$ = insert_expression_if($1,line);}*/
	;

function_call:
	ID '(' ')'			{ $$ = insert_function_call($1,NULL,line);}
	| ID '(' parameter_list ')'	{ $$ = insert_function_call($1,$3,line);}
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
            value                       { $$ = insert_if_value($1, is_iden,line);}
        | expression '>' expression 	{ $$ = insert_if($1, is_OP_BIGGER, $3,line);}
	| expression '<' expression 	{ $$ = insert_if($1, is_OP_LOWER, $3,line);}
	| expression OP_EQ expression	{ $$ = insert_if($1, is_OP_EQ, $3,line);}
	| expression OP_LE expression	{ $$ = insert_if($1, is_OP_LE, $3,line);}
	| expression OP_GE expression	{ $$ = insert_if($1, is_OP_GE, $3,line);}
	| expression OP_NE expression 	{ $$ = insert_if($1, is_OP_NE, $3,line);}
	| expression OP_LOR expression	{ $$ = insert_if($1, is_OP_LOR, $3,line);}
	| expression OP_LAND expression { $$ = insert_if($1, is_OP_LAND, $3,line);}
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
	ID			{ $$ = insert_variable(is_id, $1, NULL,line);}
	| ID '=' expression	{ $$ = insert_variable(is_id, $1, $3,line);}
	;

argument_list:
	argument			{ $$ = insert_argument_list(NULL, $1);}
	| argument_list ',' argument	{ $$ = insert_argument_list($1,$3);}
	;

argument:
	type ID  	{ $$ = insert_argument($1, $2);};
	;
	
cycle:
	FOR '(' forInit ';' expression ';' increase_list ')' condition_code          { $$ = insert_for($3,$5,$7,$9,line);}
        | FOR '(' ';' expression ';' increase_list ')' condition_code                 { $$ = insert_for(NULL,$4,$6,$8,line);}
        | FOR '(' forInit ';' expression ';' ')' condition_code                      { $$ = insert_for($3,$5,NULL,$8,line);}
        | FOR '(' ';' expression ';' ')' condition_code                              { $$ = insert_for(NULL,$4,NULL,$7,line);}
	| WHILE '(' expression ')' condition_code					{ $$ = insert_while($3,$5,line);}
	| DO condition_code WHILE '(' expression ')' ';'				{ $$ = insert_do_while($2,$5,line);}
	;

if:	IF '(' if_expression ')' condition_code %prec IFPREC			{ $$ = insert_if_statement($3, $5,line); }
	| IF '(' if_expression ')' condition_code ELSE condition_code		{ $$ = insert_if_else_statement($3,$5,$7,line);}
	| SWITCH '(' expression ')' '{' switch '}'				{ $$ = insert_switch_statement($3,$6,line);}
	;

forInit:
        assignment      { $$ = insert_for_assign($1,line);}
        | declaration   { $$ = insert_for_declaration($1,line);}
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
	CASE value ':' operation_list switch 	{ $$ = insert_switch_case(is_NORMAL,$2,$4,$5,line);}
	| CASE value ':' operation_list 	{ $$ = insert_switch_case(is_NORMAL,$2,$4,NULL,line);}
	| DEFAULT ':' operation_list		{ $$ = insert_switch_case(is_DEFAULT,NULL,$3,NULL,line);}
	;

assign_operator:
	'='		{ $$ = is_ASS_EQ;}
	| ASS_ADD	{ $$ = is_ASS_ADD;}
	| ASS_SUB	{ $$ = is_ASS_SUB;}
	| ASS_MUL	{ $$ = is_ASS_MUL;}
	| ASS_DIV	{ $$ = is_ASS_DIV;}
	| ASS_PERC	{ $$ = is_ASS_PERC;}
	| ASS_AND	{ $$ = is_ASS_AND;}
        | ASS_LS        { $$ = is_ASS_LS;}
        | ASS_RS        { $$ = is_ASS_RS;}
	;

value:
	ID		{ $$ = insert_string(is_ident, $1);}
	| STRING_VAL	{ $$ = insert_string(is_string, $1);}
	| NUMBER_VAL	{ $$ = insert_int(is_int, $1);}
	| '+' NUMBER_VAL	{ $$ = insert_int(is_int, $2);}
	| '-' NUMBER_VAL	{ $$ = insert_int(is_int, -$2);}
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
	| DOUBLE	{$$ = is_double;}
	| VOID		{$$ = is_void;}
	;


%%

int yyerror (char *s)
{
	printf ("%s\n", s);
}

int main(){
	yyparse();
	ambient = semantic_analysis(myprogram,&errors);
	//show_program(myprogram);
        if(errors > 0){
            printf("You have %d errors!\n",errors);
        }
        else{
            printf("Compilation finished without errors!\n");
            translate_program(myprogram, ambient);
        }
	printf("Program has %d lines\n",line); 
	return 0;
}
