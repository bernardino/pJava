
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
     ASS_MOD = 261,
     ASS_ADD = 262,
     ASS_SUB = 263,
     ASS_SHL = 264,
     ASS_SHR = 265,
     ASS_SHRR = 266,
     ASS_AND = 267,
     ASS_XOR = 268,
     ASS_OR = 269,
     BOOLEAN = 270,
     BREAK = 271,
     BYTE = 272,
     CASE = 273,
     CHAR = 274,
     CLASS = 275,
     CONTINUE = 276,
     DO = 277,
     DOUBLE = 278,
     ELSE = 279,
     FALSE = 280,
     FLOAT = 281,
     FOR = 282,
     IF = 283,
     INT = 284,
     LONG = 285,
     MAIN = 286,
     NEW = 287,
     JNULL = 288,
     OP_INC = 289,
     OP_DEC = 290,
     OP_SHL = 291,
     OP_SHR = 292,
     OP_SHRR = 293,
     OP_GE = 294,
     OP_LE = 295,
     OP_EQ = 296,
     OP_NE = 297,
     OP_LAND = 298,
     OP_LOR = 299,
     OP_DIM = 300,
     PRIVATE = 301,
     PROTECTED = 302,
     PUBLIC = 303,
     SHORT = 304,
     STATIC = 305,
     STRING = 306,
     SWITCH = 307,
     RETURN = 308,
     TRUE = 309,
     THIS = 310,
     VOID = 311,
     WHILE = 312,
     NUMBER_VAL = 313,
     DOUBLE_VAL = 314,
     STRING_VAL = 315,
     CHAR_VAL = 316,
     ID = 317,
     UMINUS = 318
   };
#endif
/* Tokens.  */
#define ARGS 258
#define ASS_MUL 259
#define ASS_DIV 260
#define ASS_MOD 261
#define ASS_ADD 262
#define ASS_SUB 263
#define ASS_SHL 264
#define ASS_SHR 265
#define ASS_SHRR 266
#define ASS_AND 267
#define ASS_XOR 268
#define ASS_OR 269
#define BOOLEAN 270
#define BREAK 271
#define BYTE 272
#define CASE 273
#define CHAR 274
#define CLASS 275
#define CONTINUE 276
#define DO 277
#define DOUBLE 278
#define ELSE 279
#define FALSE 280
#define FLOAT 281
#define FOR 282
#define IF 283
#define INT 284
#define LONG 285
#define MAIN 286
#define NEW 287
#define JNULL 288
#define OP_INC 289
#define OP_DEC 290
#define OP_SHL 291
#define OP_SHR 292
#define OP_SHRR 293
#define OP_GE 294
#define OP_LE 295
#define OP_EQ 296
#define OP_NE 297
#define OP_LAND 298
#define OP_LOR 299
#define OP_DIM 300
#define PRIVATE 301
#define PROTECTED 302
#define PUBLIC 303
#define SHORT 304
#define STATIC 305
#define STRING 306
#define SWITCH 307
#define RETURN 308
#define TRUE 309
#define THIS 310
#define VOID 311
#define WHILE 312
#define NUMBER_VAL 313
#define DOUBLE_VAL 314
#define STRING_VAL 315
#define CHAR_VAL 316
#define ID 317
#define UMINUS 318




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 31 "comp.y"

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



/* Line 1676 of yacc.c  */
#line 212 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


