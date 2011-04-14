
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
     ABSTRACT = 258,
     BOOLEAN = 259,
     BREAK = 260,
     BYTE = 261,
     BYVALUE = 262,
     CASE = 263,
     CAST = 264,
     CATCH = 265,
     CHAR = 266,
     CLASS = 267,
     CONTINUE = 268,
     DEFAULT = 269,
     DO = 270,
     DOUBLE = 271,
     ELSE = 272,
     EXTENDS = 273,
     FINAL = 274,
     FINALLY = 275,
     FLOAT = 276,
     FOR = 277,
     FUTURE = 278,
     GENERIC = 279,
     IF = 280,
     IMPLEMENTS = 281,
     IMPORT = 282,
     INNER = 283,
     INSTANCEOF = 284,
     INT = 285,
     INTERFACE = 286,
     LONG = 287,
     NATIVE = 288,
     NEW = 289,
     JNULL = 290,
     OPERATOR = 291,
     OUTER = 292,
     PACKAGE = 293,
     PRIVATE = 294,
     PROTECTED = 295,
     PUBLIC = 296,
     REST = 297,
     RETURN = 298,
     SHORT = 299,
     STATIC = 300,
     SUPER = 301,
     SWITCH = 302,
     SYNCHRONIZED = 303,
     THIS = 304,
     THROW = 305,
     THROWS = 306,
     TRANSIENT = 307,
     TRY = 308,
     VAR = 309,
     VOID = 310,
     VOLATILE = 311,
     WHILE = 312,
     OP_INC = 313,
     OP_DEC = 314,
     OP_SHL = 315,
     OP_SHR = 316,
     OP_SHRR = 317,
     OP_GE = 318,
     OP_LE = 319,
     OP_EQ = 320,
     OP_NE = 321,
     OP_LAND = 322,
     OP_LOR = 323,
     OP_DIM = 324,
     ASS_MUL = 325,
     ASS_DIV = 326,
     ASS_MOD = 327,
     ASS_ADD = 328,
     ASS_SUB = 329,
     ASS_SHL = 330,
     ASS_SHR = 331,
     ASS_SHRR = 332,
     ASS_AND = 333,
     ASS_XOR = 334,
     ASS_OR = 335,
     IDENTIFIER = 336,
     LITERAL = 337,
     BOOLLIT = 338
   };
#endif
/* Tokens.  */
#define ABSTRACT 258
#define BOOLEAN 259
#define BREAK 260
#define BYTE 261
#define BYVALUE 262
#define CASE 263
#define CAST 264
#define CATCH 265
#define CHAR 266
#define CLASS 267
#define CONTINUE 268
#define DEFAULT 269
#define DO 270
#define DOUBLE 271
#define ELSE 272
#define EXTENDS 273
#define FINAL 274
#define FINALLY 275
#define FLOAT 276
#define FOR 277
#define FUTURE 278
#define GENERIC 279
#define IF 280
#define IMPLEMENTS 281
#define IMPORT 282
#define INNER 283
#define INSTANCEOF 284
#define INT 285
#define INTERFACE 286
#define LONG 287
#define NATIVE 288
#define NEW 289
#define JNULL 290
#define OPERATOR 291
#define OUTER 292
#define PACKAGE 293
#define PRIVATE 294
#define PROTECTED 295
#define PUBLIC 296
#define REST 297
#define RETURN 298
#define SHORT 299
#define STATIC 300
#define SUPER 301
#define SWITCH 302
#define SYNCHRONIZED 303
#define THIS 304
#define THROW 305
#define THROWS 306
#define TRANSIENT 307
#define TRY 308
#define VAR 309
#define VOID 310
#define VOLATILE 311
#define WHILE 312
#define OP_INC 313
#define OP_DEC 314
#define OP_SHL 315
#define OP_SHR 316
#define OP_SHRR 317
#define OP_GE 318
#define OP_LE 319
#define OP_EQ 320
#define OP_NE 321
#define OP_LAND 322
#define OP_LOR 323
#define OP_DIM 324
#define ASS_MUL 325
#define ASS_DIV 326
#define ASS_MOD 327
#define ASS_ADD 328
#define ASS_SUB 329
#define ASS_SHL 330
#define ASS_SHR 331
#define ASS_SHRR 332
#define ASS_AND 333
#define ASS_XOR 334
#define ASS_OR 335
#define IDENTIFIER 336
#define LITERAL 337
#define BOOLLIT 338




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


