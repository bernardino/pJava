
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "pJava.y"


#include <stdio.h>



/* Line 189 of yacc.c  */
#line 80 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     CONST = 268,
     CONTINUE = 269,
     DEFAULT = 270,
     DO = 271,
     DOUBLE = 272,
     ELSE = 273,
     EXTENDS = 274,
     FINAL = 275,
     FINALLY = 276,
     FLOAT = 277,
     FOR = 278,
     FUTURE = 279,
     GENERIC = 280,
     GOTO = 281,
     IF = 282,
     IMPLEMENTS = 283,
     IMPORT = 284,
     INNER = 285,
     INSTANCEOF = 286,
     INT = 287,
     INTERFACE = 288,
     LONG = 289,
     NATIVE = 290,
     NEW = 291,
     JNULL = 292,
     OPERATOR = 293,
     OUTER = 294,
     PACKAGE = 295,
     PRIVATE = 296,
     PROTECTED = 297,
     PUBLIC = 298,
     REST = 299,
     RETURN = 300,
     SHORT = 301,
     STATIC = 302,
     SUPER = 303,
     SWITCH = 304,
     SYNCHRONIZED = 305,
     THIS = 306,
     THROW = 307,
     THROWS = 308,
     TRANSIENT = 309,
     TRY = 310,
     VAR = 311,
     VOID = 312,
     VOLATILE = 313,
     WHILE = 314,
     OP_INC = 315,
     OP_DEC = 316,
     OP_SHL = 317,
     OP_SHR = 318,
     OP_SHRR = 319,
     OP_GE = 320,
     OP_LE = 321,
     OP_EQ = 322,
     OP_NE = 323,
     OP_LAND = 324,
     OP_LOR = 325,
     OP_DIM = 326,
     ASS_MUL = 327,
     ASS_DIV = 328,
     ASS_MOD = 329,
     ASS_ADD = 330,
     ASS_SUB = 331,
     ASS_SHL = 332,
     ASS_SHR = 333,
     ASS_SHRR = 334,
     ASS_AND = 335,
     ASS_XOR = 336,
     ASS_OR = 337,
     IDENTIFIER = 338,
     LITERAL = 339,
     BOOLLIT = 340
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
#define CONST 268
#define CONTINUE 269
#define DEFAULT 270
#define DO 271
#define DOUBLE 272
#define ELSE 273
#define EXTENDS 274
#define FINAL 275
#define FINALLY 276
#define FLOAT 277
#define FOR 278
#define FUTURE 279
#define GENERIC 280
#define GOTO 281
#define IF 282
#define IMPLEMENTS 283
#define IMPORT 284
#define INNER 285
#define INSTANCEOF 286
#define INT 287
#define INTERFACE 288
#define LONG 289
#define NATIVE 290
#define NEW 291
#define JNULL 292
#define OPERATOR 293
#define OUTER 294
#define PACKAGE 295
#define PRIVATE 296
#define PROTECTED 297
#define PUBLIC 298
#define REST 299
#define RETURN 300
#define SHORT 301
#define STATIC 302
#define SUPER 303
#define SWITCH 304
#define SYNCHRONIZED 305
#define THIS 306
#define THROW 307
#define THROWS 308
#define TRANSIENT 309
#define TRY 310
#define VAR 311
#define VOID 312
#define VOLATILE 313
#define WHILE 314
#define OP_INC 315
#define OP_DEC 316
#define OP_SHL 317
#define OP_SHR 318
#define OP_SHRR 319
#define OP_GE 320
#define OP_LE 321
#define OP_EQ 322
#define OP_NE 323
#define OP_LAND 324
#define OP_LOR 325
#define OP_DIM 326
#define ASS_MUL 327
#define ASS_DIV 328
#define ASS_MOD 329
#define ASS_ADD 330
#define ASS_SUB 331
#define ASS_SHL 332
#define ASS_SHR 333
#define ASS_SHRR 334
#define ASS_AND 335
#define ASS_XOR 336
#define ASS_OR 337
#define IDENTIFIER 338
#define LITERAL 339
#define BOOLLIT 340




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 292 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1796

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  279
/* YYNRULES -- Number of states.  */
#define YYNSTATES  448

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,     2,     2,     2,   103,   106,     2,
      93,    94,    89,   100,    86,   101,    88,   102,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    95,    87,
     104,    92,   105,   109,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    96,     2,    97,   107,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,   108,    91,    98,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    20,
      22,    24,    26,    28,    30,    32,    34,    36,    38,    41,
      43,    47,    50,    53,    56,    58,    60,    62,    66,    68,
      71,    73,    76,    78,    81,    85,    91,    93,    97,   102,
     106,   112,   117,   122,   127,   131,   135,   139,   142,   144,
     147,   149,   151,   153,   155,   157,   159,   161,   163,   165,
     167,   169,   171,   174,   176,   179,   181,   184,   187,   189,
     191,   193,   195,   197,   201,   204,   206,   210,   212,   216,
     218,   221,   225,   227,   231,   234,   240,   245,   250,   254,
     259,   263,   266,   268,   272,   275,   279,   281,   284,   287,
     289,   291,   296,   300,   304,   307,   312,   316,   319,   321,
     324,   328,   332,   335,   337,   340,   342,   344,   348,   353,
     355,   357,   360,   362,   364,   366,   368,   370,   372,   375,
     379,   382,   384,   390,   398,   404,   410,   418,   426,   433,
     436,   438,   440,   443,   445,   447,   449,   453,   457,   460,
     464,   467,   471,   474,   478,   484,   488,   492,   497,   499,
     502,   505,   511,   516,   519,   521,   523,   525,   527,   529,
     533,   535,   537,   539,   541,   543,   545,   550,   555,   559,
     563,   567,   571,   575,   580,   584,   586,   588,   590,   592,
     594,   596,   598,   602,   604,   608,   610,   612,   616,   620,
     625,   630,   636,   641,   646,   650,   654,   656,   659,   663,
     665,   668,   670,   672,   675,   678,   681,   684,   687,   689,
     691,   694,   696,   698,   700,   702,   704,   709,   714,   719,
     721,   724,   727,   729,   733,   737,   741,   743,   747,   751,
     753,   757,   761,   765,   767,   771,   775,   779,   783,   787,
     789,   793,   797,   799,   803,   805,   809,   811,   815,   817,
     821,   823,   827,   829,   835,   837,   841,   843,   845,   847,
     849,   851,   853,   855,   857,   859,   861,   863,   865,   867
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     116,     0,    -1,   112,    -1,   112,   186,    -1,   114,    -1,
     123,    -1,   123,    -1,   113,    86,   123,    -1,     4,    -1,
      11,    -1,     6,    -1,    46,    -1,    32,    -1,    34,    -1,
      22,    -1,    17,    -1,    57,    -1,    87,    -1,   115,    87,
      -1,   117,    -1,   118,   121,   119,    -1,   118,   121,    -1,
     118,   119,    -1,   121,   119,    -1,   118,    -1,   121,    -1,
     119,    -1,    40,   123,   115,    -1,   120,    -1,   119,   120,
      -1,   124,    -1,   124,   115,    -1,   122,    -1,   121,   122,
      -1,    29,   123,   115,    -1,    29,   123,    88,    89,   115,
      -1,    83,    -1,   123,    88,    83,    -1,   125,    90,   130,
      91,    -1,   125,    90,    91,    -1,   126,   128,    83,   149,
     129,    -1,   126,   128,    83,   149,    -1,   126,   128,    83,
     129,    -1,   128,    83,   149,   129,    -1,   126,   128,    83,
      -1,   128,    83,   149,    -1,   128,    83,   129,    -1,   128,
      83,    -1,   127,    -1,   126,   127,    -1,     3,    -1,    20,
      -1,    43,    -1,    42,    -1,    41,    -1,    47,    -1,    54,
      -1,    58,    -1,    35,    -1,    50,    -1,    12,    -1,    33,
      -1,    28,   113,    -1,   131,    -1,   130,   131,    -1,   132,
      -1,   132,   115,    -1,   133,    87,    -1,   138,    -1,   145,
      -1,   147,    -1,   148,    -1,   124,    -1,   126,   111,   134,
      -1,   111,   134,    -1,   135,    -1,   134,    86,   135,    -1,
     142,    -1,   142,    92,   136,    -1,   209,    -1,    90,    91,
      -1,    90,   137,    91,    -1,   136,    -1,   137,    86,   136,
      -1,   137,    86,    -1,   126,   111,   139,   143,   144,    -1,
     126,   111,   139,   144,    -1,   111,   139,   143,   144,    -1,
     111,   139,   144,    -1,   142,    93,   140,    94,    -1,   142,
      93,    94,    -1,   139,    71,    -1,   141,    -1,   140,    86,
     141,    -1,   111,   142,    -1,    20,   111,   142,    -1,    83,
      -1,   142,    71,    -1,    53,   113,    -1,   150,    -1,    87,
      -1,   126,   146,   143,   150,    -1,   126,   146,   150,    -1,
     146,   143,   150,    -1,   146,   150,    -1,    83,    93,   140,
      94,    -1,    83,    93,    94,    -1,    47,   150,    -1,   150,
      -1,    19,   112,    -1,   149,    86,   112,    -1,    90,   151,
      91,    -1,    90,    91,    -1,   152,    -1,   151,   152,    -1,
     153,    -1,   154,    -1,   111,   134,    87,    -1,    20,   111,
     134,    87,    -1,   155,    -1,   156,    -1,   157,    87,    -1,
     158,    -1,   159,    -1,   164,    -1,   165,    -1,   150,    -1,
      87,    -1,    83,    95,    -1,     8,   210,    95,    -1,    15,
      95,    -1,   209,    -1,    27,    93,   209,    94,   154,    -1,
      27,    93,   209,    94,   154,    18,   154,    -1,    49,    93,
     209,    94,   150,    -1,    59,    93,   209,    94,   154,    -1,
      16,   154,    59,    93,   209,    94,    87,    -1,    23,    93,
     160,   161,   162,    94,   154,    -1,    23,    93,   160,   161,
      94,   154,    -1,   163,    87,    -1,   153,    -1,    87,    -1,
     209,    87,    -1,    87,    -1,   163,    -1,   157,    -1,   163,
      86,   157,    -1,     5,    83,    87,    -1,     5,    87,    -1,
      14,    83,    87,    -1,    14,    87,    -1,    45,   209,    87,
      -1,    45,    87,    -1,    52,   209,    87,    -1,    50,    93,
     209,    94,   154,    -1,    55,   150,   169,    -1,    55,   150,
     166,    -1,    55,   150,   166,   169,    -1,   167,    -1,   166,
     167,    -1,   168,   150,    -1,    10,    93,   111,    83,    94,
      -1,    10,    93,   111,    94,    -1,    21,   150,    -1,   123,
      -1,   171,    -1,   178,    -1,   180,    -1,   172,    -1,    93,
     209,    94,    -1,   173,    -1,    84,    -1,    85,    -1,   174,
      -1,   175,    -1,   176,    -1,   123,    96,   209,    97,    -1,
     172,    96,   209,    97,    -1,   171,    88,    83,    -1,   188,
      88,    83,    -1,   123,    88,    51,    -1,   123,    88,    12,
      -1,   114,    88,    12,    -1,   177,    93,   179,    94,    -1,
     177,    93,    94,    -1,   173,    -1,   178,    -1,   123,    -1,
      51,    -1,    48,    -1,    37,    -1,   209,    -1,   179,    86,
     209,    -1,   181,    -1,   123,    88,   181,    -1,   183,    -1,
     182,    -1,   183,    90,    91,    -1,   182,    90,    91,    -1,
     183,    90,   137,    91,    -1,   182,    90,   130,    91,    -1,
      36,   112,    93,   179,    94,    -1,    36,   112,    93,    94,
      -1,    36,   112,   184,   186,    -1,    36,   112,   184,    -1,
      36,   112,   186,    -1,   185,    -1,   184,   185,    -1,    96,
     209,    97,    -1,    71,    -1,   186,    71,    -1,   170,    -1,
     188,    -1,   187,    60,    -1,   187,    61,    -1,    60,   189,
      -1,    61,   189,    -1,   192,   193,    -1,   190,    -1,   187,
      -1,   191,   189,    -1,    98,    -1,    99,    -1,   100,    -1,
     101,    -1,   189,    -1,    93,   194,    94,   193,    -1,    93,
     195,    94,   193,    -1,    93,   209,    94,   190,    -1,   114,
      -1,   114,   186,    -1,   123,   186,    -1,   193,    -1,   196,
      89,   193,    -1,   196,   102,   193,    -1,   196,   103,   193,
      -1,   196,    -1,   197,   100,   196,    -1,   197,   101,   196,
      -1,   197,    -1,   198,    62,   197,    -1,   198,    63,   197,
      -1,   198,    64,   197,    -1,   198,    -1,   199,   104,   198,
      -1,   199,   105,   198,    -1,   199,    66,   198,    -1,   199,
      65,   198,    -1,   199,    31,   111,    -1,   199,    -1,   200,
      67,   199,    -1,   200,    68,   199,    -1,   200,    -1,   201,
     106,   200,    -1,   201,    -1,   202,   107,   201,    -1,   202,
      -1,   203,   108,   202,    -1,   203,    -1,   204,    69,   203,
      -1,   204,    -1,   205,    70,   204,    -1,   205,    -1,   205,
     109,   209,    95,   206,    -1,   206,    -1,   189,   208,   207,
      -1,    92,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,   207,    -1,   206,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    39,    43,    44,    48,    49,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    65,    66,    70,
      74,    75,    76,    77,    78,    79,    80,    84,    88,    89,
      93,    94,    98,    99,   103,   104,   108,   109,   113,   114,
     118,   119,   120,   121,   122,   123,   124,   125,   129,   130,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     147,   148,   152,   156,   157,   161,   162,   166,   167,   168,
     169,   170,   171,   175,   176,   180,   181,   185,   186,   190,
     191,   192,   196,   197,   198,   202,   203,   204,   205,   209,
     210,   211,   215,   216,   220,   221,   225,   226,   230,   234,
     235,   239,   240,   241,   242,   246,   247,   251,   255,   259,
     260,   264,   265,   269,   270,   274,   275,   279,   280,   284,
     285,   286,   287,   288,   289,   290,   291,   295,   299,   300,
     301,   305,   309,   310,   311,   315,   316,   317,   318,   322,
     323,   324,   328,   329,   333,   337,   338,   342,   343,   344,
     345,   346,   347,   348,   352,   353,   354,   355,   359,   360,
     364,   368,   369,   373,   377,   378,   382,   383,   384,   388,
     389,   393,   394,   395,   396,   397,   401,   402,   406,   407,
     408,   409,   410,   414,   415,   419,   420,   421,   425,   426,
     427,   431,   432,   436,   437,   441,   442,   443,   444,   445,
     446,   450,   451,   455,   456,   457,   461,   462,   466,   470,
     471,   475,   476,   480,   481,   485,   486,   487,   488,   492,
     493,   497,   498,   502,   503,   507,   508,   509,   510,   514,
     515,   519,   523,   524,   525,   526,   530,   531,   532,   536,
     537,   538,   539,   543,   544,   545,   546,   547,   548,   552,
     553,   554,   558,   559,   563,   564,   568,   569,   573,   574,
     578,   579,   583,   584,   588,   589,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   608,   612
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT", "BOOLEAN", "BREAK", "BYTE",
  "BYVALUE", "CASE", "CAST", "CATCH", "CHAR", "CLASS", "CONST", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTENDS", "FINAL", "FINALLY",
  "FLOAT", "FOR", "FUTURE", "GENERIC", "GOTO", "IF", "IMPLEMENTS",
  "IMPORT", "INNER", "INSTANCEOF", "INT", "INTERFACE", "LONG", "NATIVE",
  "NEW", "JNULL", "OPERATOR", "OUTER", "PACKAGE", "PRIVATE", "PROTECTED",
  "PUBLIC", "REST", "RETURN", "SHORT", "STATIC", "SUPER", "SWITCH",
  "SYNCHRONIZED", "THIS", "THROW", "THROWS", "TRANSIENT", "TRY", "VAR",
  "VOID", "VOLATILE", "WHILE", "OP_INC", "OP_DEC", "OP_SHL", "OP_SHR",
  "OP_SHRR", "OP_GE", "OP_LE", "OP_EQ", "OP_NE", "OP_LAND", "OP_LOR",
  "OP_DIM", "ASS_MUL", "ASS_DIV", "ASS_MOD", "ASS_ADD", "ASS_SUB",
  "ASS_SHL", "ASS_SHR", "ASS_SHRR", "ASS_AND", "ASS_XOR", "ASS_OR",
  "IDENTIFIER", "LITERAL", "BOOLLIT", "','", "';'", "'.'", "'*'", "'{'",
  "'}'", "'='", "'('", "')'", "':'", "'['", "']'", "'~'", "'!'", "'+'",
  "'-'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "'?'", "$accept",
  "TypeSpecifier", "TypeName", "ClassNameList", "PrimitiveType",
  "SemiColons", "CompilationUnit", "ProgramFile", "PackageStatement",
  "TypeDeclarations", "TypeDeclarationOptSemi", "ImportStatements",
  "ImportStatement", "QualifiedName", "TypeDeclaration", "ClassHeader",
  "Modifiers", "Modifier", "ClassWord", "Interfaces", "FieldDeclarations",
  "FieldDeclarationOptSemi", "FieldDeclaration",
  "FieldVariableDeclaration", "VariableDeclarators", "VariableDeclarator",
  "VariableInitializer", "ArrayInitializers", "MethodDeclaration",
  "MethodDeclarator", "ParameterList", "Parameter", "DeclaratorName",
  "Throws", "MethodBody", "ConstructorDeclaration",
  "ConstructorDeclarator", "StaticInitializer", "NonStaticInitializer",
  "Extends", "Block", "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "EmptyStatement",
  "LabelStatement", "ExpressionStatement", "SelectionStatement",
  "IterationStatement", "ForInit", "ForExpr", "ForIncr",
  "ExpressionStatements", "JumpStatement", "GuardingStatement", "Catches",
  "Catch", "CatchHeader", "Finally", "PrimaryExpression", "NotJustName",
  "ComplexPrimary", "ComplexPrimaryNoParenthesis", "ArrayAccess",
  "FieldAccess", "MethodCall", "MethodAccess", "SpecialName",
  "ArgumentList", "NewAllocationExpression",
  "PlainNewAllocationExpression", "ClassAllocationExpression",
  "ArrayAllocationExpression", "DimExprs", "DimExpr", "Dims",
  "PostfixExpression", "RealPostfixExpression", "UnaryExpression",
  "LogicalUnaryExpression", "LogicalUnaryOperator",
  "ArithmeticUnaryOperator", "CastExpression", "PrimitiveTypeExpression",
  "ClassTypeExpression", "MultiplicativeExpression", "AdditiveExpression",
  "ShiftExpression", "RelationalExpression", "EqualityExpression",
  "AndExpression", "ExclusiveOrExpression", "InclusiveOrExpression",
  "ConditionalAndExpression", "ConditionalOrExpression",
  "ConditionalExpression", "AssignmentExpression", "AssignmentOperator",
  "Expression", "ConstantExpression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,    44,    59,    46,    42,
     123,   125,    61,    40,    41,    58,    91,    93,   126,    33,
      43,    45,    47,    37,    60,    62,    38,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   116,
     117,   117,   117,   117,   117,   117,   117,   118,   119,   119,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   129,   130,   130,   131,   131,   132,   132,   132,
     132,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   137,   137,   137,   138,   138,   138,   138,   139,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   144,
     144,   145,   145,   145,   145,   146,   146,   147,   148,   149,
     149,   150,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   154,   154,   154,   154,   154,   154,   155,   156,   156,
     156,   157,   158,   158,   158,   159,   159,   159,   159,   160,
     160,   160,   161,   161,   162,   163,   163,   164,   164,   164,
     164,   164,   164,   164,   165,   165,   165,   165,   166,   166,
     167,   168,   168,   169,   170,   170,   171,   171,   171,   172,
     172,   173,   173,   173,   173,   173,   174,   174,   175,   175,
     175,   175,   175,   176,   176,   177,   177,   177,   178,   178,
     178,   179,   179,   180,   180,   181,   181,   181,   181,   181,
     181,   182,   182,   183,   183,   183,   184,   184,   185,   186,
     186,   187,   187,   188,   188,   189,   189,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   193,   193,   194,
     194,   195,   196,   196,   196,   196,   197,   197,   197,   198,
     198,   198,   198,   199,   199,   199,   199,   199,   199,   200,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   209,   210
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     2,     2,     2,     1,     1,     1,     3,     1,     2,
       1,     2,     1,     2,     3,     5,     1,     3,     4,     3,
       5,     4,     4,     4,     3,     3,     3,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     3,     2,     1,     3,     1,     3,     1,
       2,     3,     1,     3,     2,     5,     4,     4,     3,     4,
       3,     2,     1,     3,     2,     3,     1,     2,     2,     1,
       1,     4,     3,     3,     2,     4,     3,     2,     1,     2,
       3,     3,     2,     1,     2,     1,     1,     3,     4,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     1,     5,     7,     5,     5,     7,     7,     6,     2,
       1,     1,     2,     1,     1,     1,     3,     3,     2,     3,
       2,     3,     2,     3,     5,     3,     3,     4,     1,     2,
       2,     5,     4,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     4,     4,     3,     3,
       3,     3,     3,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     1,     3,     3,     4,
       4,     5,     4,     4,     3,     3,     1,     2,     3,     1,
       2,     1,     1,     2,     2,     2,     2,     2,     1,     1,
       2,     1,     1,     1,     1,     1,     4,     4,     4,     1,
       2,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    50,    60,    51,     0,    61,    58,     0,    54,    53,
      52,    55,    59,    56,    57,     0,    19,    24,    26,    28,
      25,    32,    30,     0,     0,    48,     0,    36,     0,     0,
       1,    22,    21,    29,    23,    33,    17,    31,     0,    49,
       0,    47,     0,    34,     0,    27,    20,    18,     8,    10,
       9,    15,    14,    12,    13,    11,    55,    16,    36,     0,
      39,     0,     2,     4,     5,    72,     0,     0,    63,    65,
       0,    68,    69,     0,    70,    71,   108,    44,     0,     0,
      46,    45,    37,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   190,     0,   189,     0,     0,
     188,     0,     0,     0,     0,     0,    36,   171,   172,   127,
     112,     0,   221,   222,   223,   224,     0,     4,   164,   126,
       0,   113,   115,   116,   119,   120,     0,   122,   123,   124,
     125,   211,   165,   168,   170,   173,   174,   175,     0,   166,
     167,   193,   196,   195,   219,   212,   225,   218,     0,     0,
     232,   236,   239,   243,   249,   252,   254,   256,   258,   260,
     262,   264,   278,   131,    96,    74,    75,     0,    77,   209,
       3,     0,     0,    38,    64,    66,    67,     0,     0,   104,
      42,    41,   109,    62,     6,     0,    43,    35,     0,   106,
       0,     0,    92,     0,   148,     0,   164,   225,   279,     0,
       0,   150,   130,     0,     0,     0,     0,     0,   152,     0,
       0,     0,     0,     0,     0,     0,   215,   216,   128,   229,
     164,     0,     0,     0,     0,    77,     0,     0,     0,   111,
     114,   121,     0,     0,     0,     0,     0,   213,   214,     0,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   266,     0,   220,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,   100,     0,
      88,    99,    97,     0,     0,   210,    73,     0,     0,   102,
      98,   103,    40,     0,   110,     0,    94,     0,   105,   147,
     129,   149,     0,     0,   141,   140,   145,     0,     0,     0,
       0,     0,   204,   206,   205,   151,     0,     0,   153,     0,
       0,   156,   158,     0,   155,     0,     0,   230,   231,     0,
       0,   169,   117,   182,   181,   180,   194,     0,   178,     0,
     184,     0,   191,   198,     0,     0,   197,    82,     0,    79,
     179,   265,   233,   234,   235,   237,   238,   240,   241,   242,
     248,   247,   246,   244,   245,   250,   251,   253,   255,   257,
     259,   261,     0,    76,    87,    78,    90,     0,     0,    86,
     101,     7,    95,    93,     0,   118,   143,     0,     0,     0,
     139,     0,   202,     0,     0,   207,   203,     0,     0,     0,
     163,   159,   157,   160,     0,   169,   226,   227,   228,   176,
     177,     0,   183,   200,    80,     0,    84,   199,     0,    89,
      85,     0,     0,     0,   144,   142,   146,   132,   201,   208,
     134,   154,     0,   135,   192,    81,    83,   263,     0,   138,
       0,     0,     0,   162,   136,   137,   133,   161
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    61,    62,   183,   195,    37,    15,    16,    17,    18,
      19,    20,    21,   196,    22,    23,    24,    25,    26,    80,
      67,    68,    69,    70,   165,   166,   347,   348,    71,   167,
     191,   192,   225,   178,   280,    72,    73,    74,    75,    81,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     307,   387,   423,   308,   129,   130,   321,   322,   323,   324,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   341,
     140,   141,   142,   143,   312,   313,   170,   144,   145,   146,
     147,   148,   149,   150,   221,   222,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   252,   163,
     199
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -271
static const yytype_int16 yypact[] =
{
    1690,  -271,  -271,  -271,   -34,  -271,  -271,   -34,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,    82,  -271,  1714,  1738,  -271,
    1714,  -271,    80,    67,  1738,  -271,    86,  -271,    95,   112,
    -271,  1738,  1714,  -271,  1738,  -271,  -271,    92,  1401,  -271,
     107,   128,    83,    92,   114,    92,  1738,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,   117,  -271,   109,   396,
    -271,   135,   164,  -271,   153,  -271,  1641,  1461,  -271,    80,
     162,  -271,  -271,   -12,  -271,  -271,  -271,   128,   418,   -34,
    -271,    -3,  -271,    80,  -271,   516,   -33,  1216,    93,   163,
     592,   418,   168,   173,   418,  -271,   830,  -271,   174,   178,
    -271,  1216,   117,   179,  1274,  1274,   180,  -271,  -271,  -271,
    -271,  1216,  -271,  -271,  -271,  -271,   135,   185,     6,  -271,
     494,  -271,  -271,  -271,  -271,  -271,   169,  -271,  -271,  -271,
    -271,  -271,   186,   181,   183,  -271,  -271,  -271,   188,   199,
    -271,  -271,   189,   204,   144,   190,   311,  -271,  1274,  1216,
    -271,    40,   137,   130,   -13,   172,   191,   192,   187,   227,
     -41,  -271,  -271,  -271,  -271,   212,  -271,     8,    39,  -271,
     229,   135,   -12,  -271,  -271,    92,  -271,   -34,   117,  -271,
    -271,    -3,  -271,   215,   153,   418,  -271,    92,   418,  -271,
     135,    -6,  -271,   217,  -271,   185,    66,  -271,  -271,   207,
     218,  -271,  -271,   247,   135,   652,  1216,   -23,  -271,   221,
    1216,  1216,   222,   127,  1216,  1216,  -271,  -271,  -271,    29,
      56,   219,   220,   224,   159,   -48,   299,    35,  1216,  -271,
    -271,  -271,   236,  1216,   888,  1521,   710,  -271,  -271,   237,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  1216,  -271,  -271,  1216,  1216,  1216,  1216,  1216,
    1216,  1216,  1216,   418,  1216,  1216,  1216,  1216,  1216,  1216,
    1216,  1216,  1216,  1216,  1216,  1216,   135,  -271,  -271,    87,
    -271,  -271,  -271,   958,   614,  -271,   212,     8,   117,  -271,
     215,  -271,  -271,   -34,  -271,   135,   250,   322,  -271,  -271,
    -271,  -271,   230,   161,  -271,  -271,  -271,  1018,   166,   228,
    1076,  1216,     5,  -271,   229,  -271,   231,   233,  -271,   238,
     117,   127,  -271,   117,  -271,   242,   244,   229,   229,  1216,
    1216,  1332,  -271,  -271,  -271,  -271,  -271,   235,  -271,   246,
    -271,    20,  -271,  -271,  1581,   770,  -271,  -271,    22,  -271,
    -271,  -271,  -271,  -271,  -271,    40,    40,   137,   137,   137,
    -271,   130,   130,   130,   130,   -13,   -13,   172,   191,   192,
     187,   227,   251,  -271,  -271,  -271,  -271,    74,    87,  -271,
    -271,   153,   250,  -271,  1216,  -271,  -271,  1146,   243,  1216,
    -271,   592,  -271,    77,   252,  -271,   229,   117,   592,   418,
    -271,  -271,  -271,  -271,   592,  -271,  -271,  -271,  -271,  -271,
    -271,  1216,  -271,  -271,  -271,    84,   958,  -271,  1216,  -271,
    -271,   253,   592,   254,   264,  -271,  -271,   306,  -271,  -271,
    -271,  -271,    70,  -271,  -271,  -271,  -271,  -271,   268,  -271,
     592,   592,   257,  -271,  -271,  -271,  -271,  -271
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -271,   -54,   -70,   182,   -27,    28,  -271,  -271,  -271,   108,
      78,   340,   113,    -4,   -32,  -271,   -29,     3,    19,   -55,
     123,   -53,  -271,  -271,   -99,    90,  -270,    17,  -271,   196,
      79,    72,   -51,  -151,  -259,  -271,   304,  -271,  -271,   294,
     -37,  -271,   255,   171,   -88,  -271,  -271,  -198,  -271,  -271,
    -271,  -271,  -271,   -10,  -271,  -271,  -271,    53,  -271,    57,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,    71,
    -271,   155,  -271,  -271,  -271,    68,  -174,  -271,  -271,   -45,
      63,  -271,  -271,  -134,  -271,  -271,     4,   -28,   -79,   -14,
     126,   138,   125,   133,   124,  -271,   -83,   156,  -271,    54,
    -271
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -188
static const yytype_int16 yytable[] =
{
      28,    76,   203,    29,   198,   116,    65,   306,   182,    66,
     168,    63,   171,   375,   174,   254,   279,   224,   263,    84,
     374,   288,   180,   282,   207,    79,   186,    39,   379,   274,
      76,   190,   117,   314,    64,    65,   179,   204,    66,    63,
      63,   177,   197,    40,   283,   327,   328,   334,   169,    27,
     193,    63,   264,   265,   194,   118,    43,    45,    63,   216,
     217,   177,    64,    64,    63,   213,   116,    63,   275,    39,
     310,    94,   286,   311,    64,   184,   169,    -5,    59,   277,
     297,    64,    30,   185,   219,    40,   335,    64,   298,    -5,
      64,   266,   267,   117,   227,   278,    33,   175,    59,  -187,
     169,   311,   228,   253,   197,   303,   411,   220,   416,    33,
     282,   187,    33,   417,   412,   294,   118,   226,    82,   420,
     168,   352,   353,   354,    33,    31,   292,   169,    34,   255,
     281,   283,   284,    35,   295,   289,   378,   319,   396,   296,
      46,   291,   256,   257,   227,    35,   436,    78,   320,  -187,
     209,   116,   228,   442,   227,   212,    79,    38,    63,  -187,
     297,    63,   228,   411,   443,   223,    82,    36,   419,    41,
     416,   428,    83,   184,   278,   435,   200,    59,   117,    47,
     201,    64,    36,    42,    64,   361,   362,   363,   364,   306,
      77,   426,   260,   261,   262,   406,   407,    82,    76,    36,
      44,   118,    85,    65,   237,   238,    66,    59,    63,   360,
     197,   197,   197,   197,   197,   197,   197,   197,   164,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     190,    64,   357,   358,   359,   169,    63,   258,   259,   268,
     269,    44,   281,   190,   382,   276,   332,   276,   385,   176,
     281,   380,   389,   390,   365,   366,   231,    63,   202,    64,
     309,   205,   355,   356,   316,   317,   206,   210,   325,   326,
      63,   211,   214,   226,   232,   218,  -185,   233,   239,   235,
      64,   234,   337,   400,   197,   197,   403,   339,   342,   381,
     349,   174,  -186,    64,   236,   272,   273,   270,   276,   271,
     285,   293,   300,   427,   299,   301,   302,    76,   315,   318,
     431,   333,    65,   329,   330,    66,   433,    63,   331,   338,
     350,   282,   391,   384,   441,   397,    48,   398,    49,   372,
     425,   399,   409,    50,   439,   437,   404,   349,   405,    51,
      64,   281,   188,   410,    52,   432,   418,   438,   440,   429,
     389,   447,   445,   446,    53,   444,    54,    32,   344,   290,
     430,   388,   415,   377,   342,   394,   373,   287,    55,   383,
     172,   181,    63,   197,   401,   230,   305,   424,   402,    57,
     395,   393,   336,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   408,    64,   367,   369,   371,   349,
      48,    86,    49,   251,    87,    27,   370,    50,   351,   368,
      88,    89,    90,    51,     0,     0,    91,     0,    52,    92,
       0,     0,    48,    93,    49,     0,     0,     0,    53,    50,
      54,     0,    94,    95,     0,    51,     0,     0,   421,     0,
      52,    96,    55,     0,    97,    98,    99,   100,   101,     0,
      53,   102,    54,    57,     0,   103,   104,   105,     0,     0,
       0,     0,     0,     0,    55,   434,     0,     0,     0,     0,
     349,     0,     0,     0,     0,    57,     0,     0,     0,   106,
     107,   108,     0,   109,     0,     0,    59,   110,     0,   111,
       0,     0,     0,     0,   112,   113,   114,   115,    48,    86,
      49,    27,    87,     0,     0,    50,     0,     0,    88,    89,
      90,    51,     0,     0,    91,     0,    52,    92,     0,     0,
      48,    93,    49,     0,     0,     0,    53,    50,    54,     0,
      94,    95,     0,    51,     0,     0,   188,     0,    52,    96,
      55,     0,    97,    98,    99,   100,   101,     0,    53,   102,
      54,    57,     0,   103,   104,   105,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,     0,   106,   107,   108,
       0,   109,     0,     0,    59,   229,     0,   111,     0,     0,
       0,     0,   112,   113,   114,   115,    48,    86,    49,    27,
      87,     0,     0,    50,     0,     0,    88,    89,    90,    51,
     189,     0,     0,     0,    52,    92,     0,     0,    48,    93,
      49,     0,     0,     0,    53,    50,    54,     0,    94,    95,
       0,    51,     0,     0,   188,     0,    52,    96,    55,     0,
      97,    98,    99,   100,   101,     0,    53,   102,    54,    57,
       0,   103,   104,   105,     0,     0,    48,     0,    49,     0,
      55,     0,     0,    50,     0,     0,     0,     0,     0,    51,
       0,    57,    91,     0,    52,   106,   107,   108,     0,   109,
       0,     0,    59,     0,    53,   111,    54,     0,    94,    95,
     112,   113,   114,   115,     0,     0,     0,    27,    55,     0,
      97,     0,     0,   100,     0,     0,     0,     0,   376,    57,
       0,     0,   104,   105,    48,     0,    49,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,    52,     0,     0,    27,   107,   108,     0,   304,
       0,     0,    53,     0,    54,   111,    94,    95,     0,     0,
     112,   113,   114,   115,     0,     0,    55,     0,    97,     0,
       0,   100,     0,     0,     0,     0,     0,    57,     0,     0,
     104,   105,     0,     0,    48,     0,    49,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,    52,    27,   107,   108,     0,     0,     0,     0,
     345,   346,    53,   111,    54,     0,    94,    95,   112,   113,
     114,   115,     0,     0,     0,     0,    55,     0,    97,     0,
       0,   100,     0,     0,     0,     0,     0,    57,     0,     0,
     104,   105,     0,     0,    48,     0,    49,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,    52,    27,   107,   108,     0,     0,     0,     0,
     345,   414,    53,   111,    54,     0,    94,    95,   112,   113,
     114,   115,     0,     0,     0,     0,    55,     0,    97,     0,
       0,   100,     0,     0,     0,     0,     0,    57,     0,     0,
     104,   105,    48,     0,    49,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
      52,     0,     0,    27,   107,   108,     0,   208,     0,     0,
      53,     0,    54,   111,    94,    95,     0,     0,   112,   113,
     114,   115,     0,     0,    55,     0,    97,     0,     0,   100,
       0,     0,     0,     0,     0,    57,     0,     0,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,    49,     0,     0,     0,     0,    50,
       0,    27,   107,   108,     0,    51,     0,     0,     0,     0,
      52,   111,   340,     0,     0,     0,   112,   113,   114,   115,
      53,     0,    54,     0,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    97,     0,     0,   100,
       0,     0,     0,     0,     0,    57,     0,     0,   104,   105,
       0,     0,    48,     0,    49,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
      52,    27,   107,   108,     0,     0,     0,     0,   345,     0,
      53,   111,    54,     0,    94,    95,   112,   113,   114,   115,
       0,     0,     0,     0,    55,     0,    97,     0,     0,   100,
       0,     0,     0,     0,     0,    57,     0,     0,   104,   105,
      48,     0,    49,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,    52,     0,
       0,    27,   107,   108,     0,   386,     0,     0,    53,     0,
      54,   111,    94,    95,     0,     0,   112,   113,   114,   115,
       0,     0,    55,     0,    97,     0,     0,   100,     0,     0,
       0,     0,     0,    57,     0,     0,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,    49,     0,     0,     0,     0,    50,     0,    27,
     107,   108,     0,    51,     0,     0,     0,     0,    52,   111,
     392,     0,     0,     0,   112,   113,   114,   115,    53,     0,
      54,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    97,     0,     0,   100,     0,     0,
       0,     0,     0,    57,     0,     0,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,    49,     0,     0,     0,     0,    50,     0,    27,
     107,   108,     0,    51,     0,     0,     0,     0,    52,   111,
     422,     0,     0,     0,   112,   113,   114,   115,    53,     0,
      54,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    97,     0,     0,   100,     0,     0,
       0,     0,     0,    57,     0,     0,   104,   105,    48,     0,
      49,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,    52,     0,     0,    27,
     107,   108,     0,     0,     0,     0,    53,     0,    54,   111,
      94,    95,     0,     0,   112,   113,   114,   115,     0,     0,
      55,     0,    97,     0,     0,   100,     0,     0,     0,     0,
       0,    57,     0,     0,   104,   105,    48,     0,    49,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,    52,     0,     0,    27,   107,   108,
       0,     0,     0,     0,    53,     0,    54,   215,    94,    95,
       0,     0,   112,   113,   114,   115,     0,     0,    55,     0,
      97,     0,     0,   100,     0,     0,     0,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,    48,     0,    49,     0,     0,
       0,     0,    50,     2,     0,    27,   107,   108,    51,     0,
       0,     3,     0,    52,     0,   215,     0,     0,     0,     0,
     112,   113,     0,    53,     5,    54,     6,     0,     0,     0,
       0,     0,     8,     9,    10,     0,     0,    55,    56,     0,
       0,    12,     0,     0,     0,    13,     0,     0,    57,    14,
       0,     0,     0,     0,     1,    48,     0,    49,     0,     0,
       0,     0,    50,     2,     0,     0,     0,     0,    51,     0,
       0,     3,     0,    52,    58,     0,     0,     0,     0,     0,
       0,    59,    60,    53,     5,    54,     6,     0,     0,     0,
       0,     0,     8,     9,    10,     0,     0,    55,    56,     0,
       0,    12,     0,     0,     0,    13,     0,     0,    57,    14,
       0,     0,     0,     0,     1,    48,     0,    49,     0,     0,
       0,     0,    50,     2,     0,     0,     0,     0,    51,     0,
       0,     3,     0,    52,    58,     0,     0,     0,     0,     0,
       0,    59,   173,    53,     5,    54,     6,     0,     0,     0,
       0,     0,     8,     9,    10,     0,     0,    55,    56,     0,
       0,    12,     0,     0,     0,    13,     0,     0,    57,    14,
       0,     0,     0,     0,     1,    48,     0,    49,     0,     0,
       0,     0,    50,     2,     0,     0,     0,     0,    51,     0,
       0,     3,     0,    52,    58,     0,     0,     0,     0,     0,
       0,    59,   343,    53,     5,    54,     6,     0,     0,     0,
       0,     0,     8,     9,    10,     0,     0,    55,    56,     0,
       0,    12,     0,     0,     0,    13,     0,     0,    57,    14,
       0,     0,     0,     0,     1,    48,     0,    49,     0,     0,
       0,     0,    50,     2,     0,     0,     0,     0,    51,     0,
       0,     3,     0,    52,    58,     0,     0,     0,     0,     0,
       0,    59,   413,    53,     5,    54,     6,     0,     0,     0,
       0,     0,     8,     9,    10,     0,     0,    55,    11,     0,
       0,    12,     0,     1,     0,    13,     0,     0,    57,    14,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     1,     0,     4,
       0,     0,     0,     5,    58,     6,     2,     0,     0,     0,
       7,     8,     9,    10,     3,     0,     0,    11,     0,     0,
      12,     1,     0,     4,    13,     0,     0,     5,    14,     6,
       2,     0,     0,     0,     0,     8,     9,    10,     3,     0,
       0,    11,     0,     0,    12,     0,     0,     0,    13,     0,
       0,     5,    14,     6,     0,     0,     0,     0,     0,     8,
       9,    10,     0,     0,     0,    11,     0,     0,    12,     0,
       0,     0,    13,     0,     0,     0,    14
};

static const yytype_int16 yycheck[] =
{
       4,    38,    90,     7,    87,    59,    38,   205,    78,    38,
      61,    38,    66,   283,    67,   149,   167,   116,    31,    56,
     279,   172,    77,    71,    94,    28,    81,    24,   287,    70,
      67,    85,    59,   207,    38,    67,    73,    91,    67,    66,
      67,    53,    87,    24,    92,   219,   220,    12,    71,    83,
      83,    78,    65,    66,    87,    59,    28,    29,    85,   104,
     105,    53,    66,    67,    91,   102,   120,    94,   109,    66,
      93,    36,   171,    96,    78,    79,    71,    71,    90,    71,
      86,    85,     0,    86,   111,    66,    51,    91,    94,    83,
      94,   104,   105,   120,    88,    87,    18,    69,    90,    93,
      71,    96,    96,   148,   149,   204,    86,   111,    86,    31,
      71,    83,    34,    91,    94,   185,   120,    88,    83,   378,
     171,   255,   256,   257,    46,    17,   181,    71,    20,    89,
     167,    92,    93,    20,   188,   172,   287,    10,   312,   190,
      32,   178,   102,   103,    88,    32,   416,    19,    21,    93,
      96,   205,    96,    83,    88,   101,    28,    90,   185,    93,
      86,   188,    96,    86,    94,   111,    83,    87,    94,    83,
      86,    94,    89,   177,    87,    91,    83,    90,   205,    87,
      87,   185,    87,    88,   188,   264,   265,   266,   267,   387,
      83,   389,    62,    63,    64,   329,   330,    83,   235,    87,
      88,   205,    93,   235,    60,    61,   235,    90,   235,   263,
     255,   256,   257,   258,   259,   260,   261,   262,    83,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     284,   235,   260,   261,   262,    71,   263,   100,   101,    67,
      68,    88,   279,   297,   295,    86,    87,    86,    87,    87,
     287,   288,    86,    87,   268,   269,    87,   284,    95,   263,
     206,    93,   258,   259,   210,   211,    93,    93,   214,   215,
     297,    93,    93,    88,    88,    95,    93,    96,    88,    90,
     284,    93,   228,   320,   329,   330,   323,   233,   234,   293,
     236,   344,    93,   297,    90,   108,    69,   106,    86,   107,
      71,    86,    95,   391,    87,    87,    59,   344,    87,    87,
     398,    12,   344,    94,    94,   344,   404,   344,    94,    83,
      83,    71,    94,    93,    18,    94,     4,    94,     6,   275,
      87,    93,    97,    11,   422,   418,    94,   283,    94,    17,
     344,   378,    20,    97,    22,   399,    95,    94,    94,    97,
      86,    94,   440,   441,    32,    87,    34,    17,   235,   177,
     397,   307,   345,   284,   310,   311,   276,   171,    46,   297,
      66,    77,   399,   418,   321,   120,   205,   387,   321,    57,
     312,   310,   227,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,   331,   399,   270,   272,   274,   345,
       4,     5,     6,    92,     8,    83,   273,    11,   252,   271,
      14,    15,    16,    17,    -1,    -1,    20,    -1,    22,    23,
      -1,    -1,     4,    27,     6,    -1,    -1,    -1,    32,    11,
      34,    -1,    36,    37,    -1,    17,    -1,    -1,   384,    -1,
      22,    45,    46,    -1,    48,    49,    50,    51,    52,    -1,
      32,    55,    34,    57,    -1,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    46,   411,    -1,    -1,    -1,    -1,
     416,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    -1,    93,
      -1,    -1,    -1,    -1,    98,    99,   100,   101,     4,     5,
       6,    83,     8,    -1,    -1,    11,    -1,    -1,    14,    15,
      16,    17,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
       4,    27,     6,    -1,    -1,    -1,    32,    11,    34,    -1,
      36,    37,    -1,    17,    -1,    -1,    20,    -1,    22,    45,
      46,    -1,    48,    49,    50,    51,    52,    -1,    32,    55,
      34,    57,    -1,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    83,    84,    85,
      -1,    87,    -1,    -1,    90,    91,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,   101,     4,     5,     6,    83,
       8,    -1,    -1,    11,    -1,    -1,    14,    15,    16,    17,
      94,    -1,    -1,    -1,    22,    23,    -1,    -1,     4,    27,
       6,    -1,    -1,    -1,    32,    11,    34,    -1,    36,    37,
      -1,    17,    -1,    -1,    20,    -1,    22,    45,    46,    -1,
      48,    49,    50,    51,    52,    -1,    32,    55,    34,    57,
      -1,    59,    60,    61,    -1,    -1,     4,    -1,     6,    -1,
      46,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    57,    20,    -1,    22,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    -1,    32,    93,    34,    -1,    36,    37,
      98,    99,   100,   101,    -1,    -1,    -1,    83,    46,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    94,    57,
      -1,    -1,    60,    61,     4,    -1,     6,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    83,    84,    85,    -1,    87,
      -1,    -1,    32,    -1,    34,    93,    36,    37,    -1,    -1,
      98,    99,   100,   101,    -1,    -1,    46,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    61,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    22,    83,    84,    85,    -1,    -1,    -1,    -1,
      90,    91,    32,    93,    34,    -1,    36,    37,    98,    99,
     100,   101,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    61,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    22,    83,    84,    85,    -1,    -1,    -1,    -1,
      90,    91,    32,    93,    34,    -1,    36,    37,    98,    99,
     100,   101,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    61,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    83,    84,    85,    -1,    87,    -1,    -1,
      32,    -1,    34,    93,    36,    37,    -1,    -1,    98,    99,
     100,   101,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,
      -1,    83,    84,    85,    -1,    17,    -1,    -1,    -1,    -1,
      22,    93,    94,    -1,    -1,    -1,    98,    99,   100,   101,
      32,    -1,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,
      -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      22,    83,    84,    85,    -1,    -1,    -1,    -1,    90,    -1,
      32,    93,    34,    -1,    36,    37,    98,    99,   100,   101,
      -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,
       4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    83,    84,    85,    -1,    87,    -1,    -1,    32,    -1,
      34,    93,    36,    37,    -1,    -1,    98,    99,   100,   101,
      -1,    -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    83,
      84,    85,    -1,    17,    -1,    -1,    -1,    -1,    22,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,    32,    -1,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    83,
      84,    85,    -1,    17,    -1,    -1,    -1,    -1,    22,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,    32,    -1,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    61,     4,    -1,
       6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    83,
      84,    85,    -1,    -1,    -1,    -1,    32,    -1,    34,    93,
      36,    37,    -1,    -1,    98,    99,   100,   101,    -1,    -1,
      46,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    61,     4,    -1,     6,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    83,    84,    85,
      -1,    -1,    -1,    -1,    32,    -1,    34,    93,    36,    37,
      -1,    -1,    98,    99,   100,   101,    -1,    -1,    46,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,    -1,
      -1,    -1,    11,    12,    -1,    83,    84,    85,    17,    -1,
      -1,    20,    -1,    22,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,    -1,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    46,    47,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    46,    47,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    46,    47,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    46,    47,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    20,    -1,    22,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    46,    47,    -1,
      -1,    50,    -1,     3,    -1,    54,    -1,    -1,    57,    58,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    29,
      -1,    -1,    -1,    33,    83,    35,    12,    -1,    -1,    -1,
      40,    41,    42,    43,    20,    -1,    -1,    47,    -1,    -1,
      50,     3,    -1,    29,    54,    -1,    -1,    33,    58,    35,
      12,    -1,    -1,    -1,    -1,    41,    42,    43,    20,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,
      -1,    33,    58,    35,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    -1,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    12,    20,    29,    33,    35,    40,    41,    42,
      43,    47,    50,    54,    58,   116,   117,   118,   119,   120,
     121,   122,   124,   125,   126,   127,   128,    83,   123,   123,
       0,   119,   121,   120,   119,   122,    87,   115,    90,   127,
     128,    83,    88,   115,    88,   115,   119,    87,     4,     6,
      11,    17,    22,    32,    34,    46,    47,    57,    83,    90,
      91,   111,   112,   114,   123,   124,   126,   130,   131,   132,
     133,   138,   145,   146,   147,   148,   150,    83,    19,    28,
     129,   149,    83,    89,   150,    93,     5,     8,    14,    15,
      16,    20,    23,    27,    36,    37,    45,    48,    49,    50,
      51,    52,    55,    59,    60,    61,    83,    84,    85,    87,
      91,    93,    98,    99,   100,   101,   111,   114,   123,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   164,
     165,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     180,   181,   182,   183,   187,   188,   189,   190,   191,   192,
     193,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   209,    83,   134,   135,   139,   142,    71,
     186,   111,   146,    91,   131,   115,    87,    53,   143,   150,
     129,   149,   112,   113,   123,    86,   129,   115,    20,    94,
     111,   140,   141,    83,    87,   114,   123,   189,   206,   210,
      83,    87,    95,   154,   111,    93,    93,   112,    87,   209,
      93,    93,   209,   150,    93,    93,   189,   189,    95,   114,
     123,   194,   195,   209,   134,   142,    88,    88,    96,    91,
     152,    87,    88,    96,    93,    90,    90,    60,    61,    88,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    92,   208,   189,   193,    89,   102,   103,   100,   101,
      62,    63,    64,    31,    65,    66,   104,   105,    67,    68,
     106,   107,   108,    69,    70,   109,    86,    71,    87,   143,
     144,   150,    71,    92,    93,    71,   134,   139,   143,   150,
     113,   150,   129,    86,   112,   111,   142,    86,    94,    87,
      95,    87,    59,   134,    87,   153,   157,   160,   163,   209,
      93,    96,   184,   185,   186,    87,   209,   209,    87,    10,
      21,   166,   167,   168,   169,   209,   209,   186,   186,    94,
      94,    94,    87,    12,    12,    51,   181,   209,    83,   209,
      94,   179,   209,    91,   130,    90,    91,   136,   137,   209,
      83,   207,   193,   193,   193,   196,   196,   197,   197,   197,
     111,   198,   198,   198,   198,   199,   199,   200,   201,   202,
     203,   204,   209,   135,   144,   136,    94,   140,   143,   144,
     150,   123,   142,   141,    93,    87,    87,   161,   209,    86,
      87,    94,    94,   179,   209,   185,   186,    94,    94,    93,
     150,   167,   169,   150,    94,    94,   193,   193,   190,    97,
      97,    86,    94,    91,    91,   137,    86,    91,    95,    94,
     144,   209,    94,   162,   163,    87,   157,   154,    94,    97,
     150,   154,   111,   154,   209,    91,   136,   206,    94,   154,
      94,    18,    83,    94,    87,   154,   154,    94
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 2237 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 615 "pJava.y"

int main()
{
yyparse();

}

int yyerror(char* s)
{
printf("%s\n", s);
}

