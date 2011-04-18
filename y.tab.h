
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ARGS = 258,
     ASS_MUL = 259,
     ASS_DIV = 260,
     ASS_ADD = 261,
     ASS_SUB = 262,
     ASS_EQ = 263,
     ASS_AND = 264,
     ASS_LS = 265,
     ASS_RS = 266,
     BOOLEAN = 267,
     BREAK = 268,
     BYTE = 269,
     CASE = 270,
     CHAR = 271,
     CLASS = 272,
     CONTINUE = 273,
     DO = 274,
     DOUBLE = 275,
     ELSE = 276,
     FALSE = 277,
     FLOAT = 278,
     FOR = 279,
     IF = 280,
     INT = 281,
     LONG = 282,
     LS = 283,
     MAIN = 284,
     NEW = 285,
     JNULL = 286,
     OP_INC = 287,
     OP_DEC = 288,
     OP_SHL = 289,
     OP_SHR = 290,
     OP_SHRR = 291,
     OP_GE = 292,
     OP_LE = 293,
     OP_EQ = 294,
     OP_NE = 295,
     OP_LAND = 296,
     OP_LOR = 297,
     OP_DIM = 298,
     PRIVATE = 299,
     PROTECTED = 300,
     PUBLIC = 301,
     SHORT = 302,
     STATIC = 303,
     STRING = 304,
     SWITCH = 305,
     RETURN = 306,
     RS = 307,
     TRUE = 308,
     THIS = 309,
     VOID = 310,
     WHILE = 311,
     NUMBER_VAL = 312,
     DOUBLE_VAL = 313,
     STRING_VAL = 314,
     CHAR_VAL = 315,
     ID = 316,
     ASS_PERC = 317,
     ASS_SUM = 318,
     UMINUS = 319
   };
#endif
/* Tokens.  */
#define ARGS 258
#define ASS_MUL 259
#define ASS_DIV 260
#define ASS_ADD 261
#define ASS_SUB 262
#define ASS_EQ 263
#define ASS_AND 264
#define ASS_LS 265
#define ASS_RS 266
#define BOOLEAN 267
#define BREAK 268
#define BYTE 269
#define CASE 270
#define CHAR 271
#define CLASS 272
#define CONTINUE 273
#define DO 274
#define DOUBLE 275
#define ELSE 276
#define FALSE 277
#define FLOAT 278
#define FOR 279
#define IF 280
#define INT 281
#define LONG 282
#define LS 283
#define MAIN 284
#define NEW 285
#define JNULL 286
#define OP_INC 287
#define OP_DEC 288
#define OP_SHL 289
#define OP_SHR 290
#define OP_SHRR 291
#define OP_GE 292
#define OP_LE 293
#define OP_EQ 294
#define OP_NE 295
#define OP_LAND 296
#define OP_LOR 297
#define OP_DIM 298
#define PRIVATE 299
#define PROTECTED 300
#define PUBLIC 301
#define SHORT 302
#define STATIC 303
#define STRING 304
#define SWITCH 305
#define RETURN 306
#define RS 307
#define TRUE 308
#define THIS 309
#define VOID 310
#define WHILE 311
#define NUMBER_VAL 312
#define DOUBLE_VAL 313
#define STRING_VAL 314
#define CHAR_VAL 315
#define ID 316
#define ASS_PERC 317
#define ASS_SUM 318
#define UMINUS 319




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 32 "comp.y"

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



/* Line 1676 of yacc.c  */
#line 217 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


