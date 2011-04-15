
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
     CHAR_VAL = 275,
     CLASS = 276,
     CONTINUE = 277,
     DO = 278,
     DOUBLE = 279,
     ELSE = 280,
     FALSE = 281,
     FLOAT = 282,
     FOR = 283,
     ID = 284,
     IF = 285,
     INT = 286,
     LONG = 287,
     MAIN = 288,
     NEW = 289,
     NUMBER = 290,
     JNULL = 291,
     OP_INC = 292,
     OP_DEC = 293,
     OP_SHL = 294,
     OP_SHR = 295,
     OP_SHRR = 296,
     OP_GE = 297,
     OP_LE = 298,
     OP_EQ = 299,
     OP_NE = 300,
     OP_LAND = 301,
     OP_LOR = 302,
     OP_DIM = 303,
     PRIVATE = 304,
     PROTECTED = 305,
     PUBLIC = 306,
     SHORT = 307,
     STATIC = 308,
     STRING = 309,
     STRING_VAL = 310,
     SWITCH = 311,
     RETURN = 312,
     TRUE = 313,
     THIS = 314,
     VOID = 315,
     WHILE = 316
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
#define CHAR_VAL 275
#define CLASS 276
#define CONTINUE 277
#define DO 278
#define DOUBLE 279
#define ELSE 280
#define FALSE 281
#define FLOAT 282
#define FOR 283
#define ID 284
#define IF 285
#define INT 286
#define LONG 287
#define MAIN 288
#define NEW 289
#define NUMBER 290
#define JNULL 291
#define OP_INC 292
#define OP_DEC 293
#define OP_SHL 294
#define OP_SHR 295
#define OP_SHRR 296
#define OP_GE 297
#define OP_LE 298
#define OP_EQ 299
#define OP_NE 300
#define OP_LAND 301
#define OP_LOR 302
#define OP_DIM 303
#define PRIVATE 304
#define PROTECTED 305
#define PUBLIC 306
#define SHORT 307
#define STATIC 308
#define STRING 309
#define STRING_VAL 310
#define SWITCH 311
#define RETURN 312
#define TRUE 313
#define THIS 314
#define VOID 315
#define WHILE 316




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


