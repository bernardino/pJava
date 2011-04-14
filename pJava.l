%{
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
BLK		[\b]
TAB		[\t]
FF		[\f]
ESCCHR		[\\]
CR		[\r]
LF		[\n]

Escape		[\\]([r]|[n]|[b]|[f]|[t]|[\\])
Identifier 	{Letter}({Letter}|{Digit})*

Comment1        [\/][\*]({AnyButAstr}|[\*]{AnyButSlash})*[\*][\/]
Comment2        [\/][\/].*
Comment		({Comment1}|{Comment2})
WhiteSpace	({CR}|{LF}|{FF}|{TAB}|{BLK}|[ ])

Dimension	[\[]({WhiteSpace}|{Comment})*[\]]

IntSuffix	([l]|[L])
DecimalNum	{NonZeroDigit}{Digit}*{IntSuffix}?
OctalNum	[0]{OctalDigit}*{IntSuffix}?
HexNum		[0]([x]|[X]){HexDigit}{HexDigit}*{IntSuffix}?
IntegerLiteral	({DecimalNum}|{OctalNum}|{HexNum})

Sign		([\+]|[\-])
FlSuffix	([f]|[F]|[d][D])
SignedInt	{Sign}?{Digit}+
Expo		([e]|[E])
ExponentPart	{Expo}{SignedInt}?
Float1          {Digit}+[\.]{Digit}+?{ExponentPart}?{FlSuffix}? 
Float2		[\.]{Digit}+{ExponentPart}?{FlSuffix}?
Float3		{Digit}+{ExponentPart}{FlSuffix}?
Float4		{Digit}+{FlSuffix}
FloatingPoint	({Float1}|{Float2}|{Float3}|{Float4})

AnyChrChr	[^\\']
AnyStrChr	[^\\"]
Character	[\']({Escape}|{AnyChrChr})[\']
String		[\"]({Escape}|{AnyStrChr})*[\"]
Numeric  	({IntegerLiteral}|{FloatingPoint})
/*Literal		({Numeric}|{Character}|{String})*/



%%

"true"		{return TRUE;}
"false"		{return FALSE;}

{Separator}	{return yytext[0];}
{Delimiter1}	{return yytext[0];}
{Dimension}	{return OP_DIM;}

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

"do"		{return DO;}
"boolean"	{return BOOLEAN;}
"double"	{return DOUBLE;}
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
"String"	{return STRING;}

{Identifier}		{return ID;}

{Literal}			{return LITERAL;}

{Numeric}		{return NUMBER;}

{String}		{return STRING_VAL}
{Character}		{return CHAR_VAL}

{WhiteSpace}    {}

{Comment}	{}

%%

int yywrap()
{
return 1;
}
