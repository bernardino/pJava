%{
#include <stdio.h>
#include "structures.h"

%}
%token ARGS ASS_MUL ASS_DIV ASS_MOD ASS_ADD ASS_SUB ASS_SHL ASS_SHR ASS_SHRR ASS_AND ASS_XOR ASS_OR
%token BOOLEAN BREAK BYTE
%token CASE CHAR CHAR_VAL CLASS CONTINUE
%token DO DOUBLE
%token ELSE
%token FALSE FLOAT FOR
%token ID IF INT
%token LONG
%token MAIN
%token NEW NUMBER JNULL
%token OP_INC OP_DEC OP_SHL OP_SHR OP_SHRR OP_GE OP_LE OP_EQ OP_NE OP_LAND OP_LOR OP_DIM
%token PRIVATE PROTECTED PUBLIC
%token SHORT STATIC STRING STRING_VAL SWITCH
%token RETURN
%token TRUE THIS
%token VOID
%token WHILE


%%

init: 	
	CLASS ID '{' main '}'			{}
	| CLASS ID '{' main function_list '}'	{}
	;

main: 	PUBLIC STATIC VOID MAIN '(' STRING '[' ']' ARGS ')' code	{}
	;

function_list:	
	function	{}
	| function_list function 	{}
	;

/*TODO */
function:
	PUBLIC STATIC type ID '(' ')' code	{}
	| PRIVATE STATIC type ID '(' ')' code	{}
	;

code:	'{' '}' 	{}
	| '{' operation_list '}'
	;

operation_list: 
	operation 	{}
	| operation_list operation {}
	;

operation:
	declaration	{}
	;

declaration:
	type var_list ';' 	{}
	;

var_list:
	var			{}
	| var ',' var_list	{}
	;

var:
	ID					{}
	| ID '=' value				{}
	| ID '[' value ']'			{}
	;

value:
	NUMBER		{}
	| STRING_VAL	{}
	| CHAR_VAL	{}
	| TRUE		{}
	| FALSE		{}
	| ID		{}
	;

type:
	CHAR		{}
	| INT		{}
	| STRING 	{}
	| BOOLEAN	{}
	| FLOAT		{}
	| VOID		{}
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
