
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
     PRIVATE = 301,
     PROTECTED = 302,
     PUBLIC = 303,
     SHORT = 304,
     STATIC = 305,
     STRING = 306,
     SWITCH = 307,
     RETURN = 308,
     RS = 309,
     TRUE = 310,
     THIS = 311,
     VOID = 312,
     WHILE = 313,
     NUMBER_VAL = 314,
     DOUBLE_VAL = 315,
     STRING_VAL = 316,
     CHAR_VAL = 317,
     ID = 318,
     IFPREC = 319,
     ASS_PERC = 320,
     ASS_SUM = 321
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
#define PRIVATE 301
#define PROTECTED 302
#define PUBLIC 303
#define SHORT 304
#define STATIC 305
#define STRING 306
#define SWITCH 307
#define RETURN 308
#define RS 309
#define TRUE 310
#define THIS 311
#define VOID 312
#define WHILE 313
#define NUMBER_VAL 314
#define DOUBLE_VAL 315
#define STRING_VAL 316
#define CHAR_VAL 317
#define ID 318
#define IFPREC 319
#define ASS_PERC 320
#define ASS_SUM 321




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



/* Line 1676 of yacc.c  */
#line 225 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


