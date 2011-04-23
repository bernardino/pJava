%{
#include "structures.h"
#include "y.tab.h"
%}

Separator	[\(\)\{\}\[\]\;\,\.]
Delimiter1	[\=\>\<\!\~\?\:\+\-\*\/\&\|\^\%]
HexDigit	[0-9a-fA-F]
Digit		[0-9]
OctalDigit	[0-7]
TetraDigit	[0-3]
NonZeroDigit	[1-9]
Letter		[a-zA-Z_]
AnyButSlash	[^\/]
AnyButAstr	[^\*]

Identifier 	{Letter}(({Letter}|{Digit})+)?

Comment1        [\/][\*]({AnyButAstr}|[\*]{AnyButSlash})*[\*][\/]
Comment2        [\/][\/].*
Comment		({Comment1}|{Comment2})
WhiteSpace	[' ''\n''\t']

IntSuffix	([l]|[L])
Decimal		{NonZeroDigit}{Digit}*{IntSuffix}?
Integer		({Decimal}|[0])

SignedInt	[+-]?{Digit}+
Expo		([e]|[E])
ExponentPart	{Expo}{SignedInt}?
FlSuffix	([f]|[F]|[d][D])

Float1		[\.]{Digit}+{ExponentPart}?{FlSuffix}?
Float2		{Digit}+{ExponentPart}{FlSuffix}?
Float3		{Digit}+{FlSuffix}
Double		({Float1}|{Float2}|{Float3})

String		\"[^"\n]*\"
Char		\'.\'		



%%

"true"		{return TRUE;}
"false"		{return FALSE;}

"<<="		{return ASS_LS;}
">>="		{return ASS_RS;}
"<<"		{return LS;}
">>"		{return RS;}
"=="		{return OP_EQ;}
"<="		{return OP_LE;}
">="		{return OP_GE;}
"!="		{return OP_NE;}
"||"		{return OP_LOR;}
"&&"		{return OP_LAND;}
"++"		{return OP_INC;}
"--"		{return OP_DEC;}
"+="		{return ASS_ADD;}
"-="		{return ASS_SUB;}
"*="		{return ASS_MUL;}
"/="		{return ASS_DIV;}
"%="		{return ASS_PERC;}
"&="		{return ASS_AND;}

"do"		{return DO;}
"boolean"	{return BOOLEAN;}
"double"	{return DOUBLE;}
"default"	{return DEFAULT;}
"private"	{return PRIVATE;}
"break"		{return BREAK;}
"else"		{return ELSE;}
"protected"	{return PROTECTED;}
"byte"		{return BYTE;}
"public"	{return PUBLIC;}
"case"		{return CASE;}
"int"		{return INT;}
"return"	{return RETURN;}
"void"		{return VOID;}
"float"		{return FLOAT;}
"long"		{return LONG;}
"short"		{return SHORT;}
"char"		{return CHAR;}
"for"		{return FOR;}
"static"	{return STATIC;}
"while"		{return WHILE;}
"class"		{return CLASS;}
"new"		{return NEW;}
"null"		{return JNULL;}
"switch"	{return SWITCH;}
"continue"	{return CONTINUE;}
"if"		{return IF;}
"this"		{return THIS;}
"main"		{return MAIN;}
"args"		{return ARGS;}
"String"	{return STRING;}

{Identifier}		{ yylval.string = (char*)strdup(yytext); return ID;}
{Integer}		{ yylval.val_i = atoi(yytext); return NUMBER_VAL;}
{Double}		{ yylval.doubleval = atof(yytext); return DOUBLE_VAL;}
{String}		{ yylval.string = (char*)strdup(yytext+1); yylval.string[strlen(yytext)-2]='\0';return STRING_VAL;}
{Char}			{ yylval.chr = yytext[1]; return CHAR_VAL;}

{WhiteSpace}    {}

{Comment}	{}

.	{ return yytext[0];}


%%

int yywrap()
{
return 1;
}
