%{
#include <stdio.h>

%}

%token ID
%token LITERAL


%%

main:
	

declaration:
	type var_list ';' 		{}
	;

var_list:
	var						{}
	| var ',' var_list		{}
	;

var:
	ID							{}
	| ID '=' value				{}
	| ID '[' value ']'			{}
	;

value:
	NUMBER
	| STRING_VAL
	| CHAR_VAL
	| TRUE
	| FALSE
	| ID
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