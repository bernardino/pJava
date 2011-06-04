/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     DEFAULT = 274,
     DO = 275,
     DOUBLE = 276,
     ELSE = 277,
     FALSE = 278,
     FLOAT = 279,
     FOR = 280,
     IF = 281,
     IFELSE = 282,
     INT = 283,
     LONG = 284,
     LS = 285,
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
     OUT = 301,
     PRINT = 302,
     PRINTLN = 303,
     PRIVATE = 304,
     PROTECTED = 305,
     PUBLIC = 306,
     SHORT = 307,
     STATIC = 308,
     STRING = 309,
     SWITCH = 310,
     SYSTEM = 311,
     RETURN = 312,
     RS = 313,
     TRUE = 314,
     THIS = 315,
     VOID = 316,
     WHILE = 317,
     NUMBER_VAL = 318,
     DOUBLE_VAL = 319,
     STRING_VAL = 320,
     CHAR_VAL = 321,
     ID = 322,
     IFPREC = 323,
     ASS_PERC = 324,
     ASS_SUM = 325
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
#define DEFAULT 274
#define DO 275
#define DOUBLE 276
#define ELSE 277
#define FALSE 278
#define FLOAT 279
#define FOR 280
#define IF 281
#define IFELSE 282
#define INT 283
#define LONG 284
#define LS 285
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
#define OUT 301
#define PRINT 302
#define PRINTLN 303
#define PRIVATE 304
#define PROTECTED 305
#define PUBLIC 306
#define SHORT 307
#define STATIC 308
#define STRING 309
#define SWITCH 310
#define SYSTEM 311
#define RETURN 312
#define RS 313
#define TRUE 314
#define THIS 315
#define VOID 316
#define WHILE 317
#define NUMBER_VAL 318
#define DOUBLE_VAL 319
#define STRING_VAL 320
#define CHAR_VAL 321
#define ID 322
#define IFPREC 323
#define ASS_PERC 324
#define ASS_SUM 325




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 40 "comp.y"
{

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
/* Line 1529 of yacc.c.  */
#line 234 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

