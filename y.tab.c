
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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 288 "y.tab.c"

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
#define YYLAST   1708

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  278
/* YYNRULES -- Number of states.  */
#define YYNSTATES  447

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    97,     2,     2,     2,   101,   104,     2,
      91,    92,    87,    98,    84,    99,    86,   100,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    85,
     102,    90,   103,   107,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    94,     2,    95,   105,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,   106,    89,    96,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83
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
     259,   263,   265,   269,   272,   276,   278,   281,   284,   286,
     288,   293,   297,   301,   304,   309,   313,   316,   318,   321,
     325,   329,   332,   334,   337,   339,   341,   345,   350,   352,
     354,   357,   359,   361,   363,   365,   367,   369,   372,   376,
     379,   381,   387,   395,   401,   407,   415,   423,   430,   433,
     435,   437,   440,   442,   444,   446,   450,   454,   457,   461,
     464,   468,   471,   475,   481,   485,   489,   494,   496,   499,
     502,   508,   513,   516,   518,   520,   522,   524,   526,   530,
     532,   534,   536,   538,   540,   542,   547,   552,   556,   560,
     564,   568,   572,   577,   581,   583,   585,   587,   589,   591,
     593,   595,   599,   601,   605,   607,   609,   613,   617,   622,
     627,   633,   638,   643,   647,   651,   653,   656,   660,   662,
     665,   667,   669,   672,   675,   678,   681,   684,   686,   688,
     691,   693,   695,   697,   699,   701,   706,   711,   716,   718,
     721,   724,   726,   730,   734,   738,   740,   744,   748,   750,
     754,   758,   762,   764,   768,   772,   776,   780,   784,   786,
     790,   794,   796,   800,   802,   806,   808,   812,   814,   818,
     820,   824,   826,   832,   834,   838,   840,   842,   844,   846,
     848,   850,   852,   854,   856,   858,   860,   862,   864
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     114,     0,    -1,   110,    -1,   110,   184,    -1,   112,    -1,
     121,    -1,   121,    -1,   111,    84,   121,    -1,     4,    -1,
      11,    -1,     6,    -1,    44,    -1,    30,    -1,    32,    -1,
      21,    -1,    16,    -1,    55,    -1,    85,    -1,   113,    85,
      -1,   115,    -1,   116,   119,   117,    -1,   116,   119,    -1,
     116,   117,    -1,   119,   117,    -1,   116,    -1,   119,    -1,
     117,    -1,    38,   121,   113,    -1,   118,    -1,   117,   118,
      -1,   122,    -1,   122,   113,    -1,   120,    -1,   119,   120,
      -1,    27,   121,   113,    -1,    27,   121,    86,    87,   113,
      -1,    81,    -1,   121,    86,    81,    -1,   123,    88,   128,
      89,    -1,   123,    88,    89,    -1,   124,   126,    81,   147,
     127,    -1,   124,   126,    81,   147,    -1,   124,   126,    81,
     127,    -1,   126,    81,   147,   127,    -1,   124,   126,    81,
      -1,   126,    81,   147,    -1,   126,    81,   127,    -1,   126,
      81,    -1,   125,    -1,   124,   125,    -1,     3,    -1,    19,
      -1,    41,    -1,    40,    -1,    39,    -1,    45,    -1,    52,
      -1,    56,    -1,    33,    -1,    48,    -1,    12,    -1,    31,
      -1,    26,   111,    -1,   129,    -1,   128,   129,    -1,   130,
      -1,   130,   113,    -1,   131,    85,    -1,   136,    -1,   143,
      -1,   145,    -1,   146,    -1,   122,    -1,   124,   109,   132,
      -1,   109,   132,    -1,   133,    -1,   132,    84,   133,    -1,
     140,    -1,   140,    90,   134,    -1,   207,    -1,    88,    89,
      -1,    88,   135,    89,    -1,   134,    -1,   135,    84,   134,
      -1,   135,    84,    -1,   124,   109,   137,   141,   142,    -1,
     124,   109,   137,   142,    -1,   109,   137,   141,   142,    -1,
     109,   137,   142,    -1,   140,    91,   138,    92,    -1,   140,
      91,    92,    -1,   139,    -1,   138,    84,   139,    -1,   109,
     140,    -1,    19,   109,   140,    -1,    81,    -1,   140,    69,
      -1,    51,   111,    -1,   148,    -1,    85,    -1,   124,   144,
     141,   148,    -1,   124,   144,   148,    -1,   144,   141,   148,
      -1,   144,   148,    -1,    81,    91,   138,    92,    -1,    81,
      91,    92,    -1,    45,   148,    -1,   148,    -1,    18,   110,
      -1,   147,    84,   110,    -1,    88,   149,    89,    -1,    88,
      89,    -1,   150,    -1,   149,   150,    -1,   151,    -1,   152,
      -1,   109,   132,    85,    -1,    19,   109,   132,    85,    -1,
     153,    -1,   154,    -1,   155,    85,    -1,   156,    -1,   157,
      -1,   162,    -1,   163,    -1,   148,    -1,    85,    -1,    81,
      93,    -1,     8,   208,    93,    -1,    14,    93,    -1,   207,
      -1,    25,    91,   207,    92,   152,    -1,    25,    91,   207,
      92,   152,    17,   152,    -1,    47,    91,   207,    92,   148,
      -1,    57,    91,   207,    92,   152,    -1,    15,   152,    57,
      91,   207,    92,    85,    -1,    22,    91,   158,   159,   160,
      92,   152,    -1,    22,    91,   158,   159,    92,   152,    -1,
     161,    85,    -1,   151,    -1,    85,    -1,   207,    85,    -1,
      85,    -1,   161,    -1,   155,    -1,   161,    84,   155,    -1,
       5,    81,    85,    -1,     5,    85,    -1,    13,    81,    85,
      -1,    13,    85,    -1,    43,   207,    85,    -1,    43,    85,
      -1,    50,   207,    85,    -1,    48,    91,   207,    92,   152,
      -1,    53,   148,   167,    -1,    53,   148,   164,    -1,    53,
     148,   164,   167,    -1,   165,    -1,   164,   165,    -1,   166,
     148,    -1,    10,    91,   109,    81,    92,    -1,    10,    91,
     109,    92,    -1,    20,   148,    -1,   121,    -1,   169,    -1,
     176,    -1,   178,    -1,   170,    -1,    91,   207,    92,    -1,
     171,    -1,    82,    -1,    83,    -1,   172,    -1,   173,    -1,
     174,    -1,   121,    94,   207,    95,    -1,   170,    94,   207,
      95,    -1,   169,    86,    81,    -1,   186,    86,    81,    -1,
     121,    86,    49,    -1,   121,    86,    12,    -1,   112,    86,
      12,    -1,   175,    91,   177,    92,    -1,   175,    91,    92,
      -1,   171,    -1,   176,    -1,   121,    -1,    49,    -1,    46,
      -1,    35,    -1,   207,    -1,   177,    84,   207,    -1,   179,
      -1,   121,    86,   179,    -1,   181,    -1,   180,    -1,   181,
      88,    89,    -1,   180,    88,    89,    -1,   181,    88,   135,
      89,    -1,   180,    88,   128,    89,    -1,    34,   110,    91,
     177,    92,    -1,    34,   110,    91,    92,    -1,    34,   110,
     182,   184,    -1,    34,   110,   182,    -1,    34,   110,   184,
      -1,   183,    -1,   182,   183,    -1,    94,   207,    95,    -1,
      69,    -1,   184,    69,    -1,   168,    -1,   186,    -1,   185,
      58,    -1,   185,    59,    -1,    58,   187,    -1,    59,   187,
      -1,   190,   191,    -1,   188,    -1,   185,    -1,   189,   187,
      -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,   187,
      -1,    91,   192,    92,   191,    -1,    91,   193,    92,   191,
      -1,    91,   207,    92,   188,    -1,   112,    -1,   112,   184,
      -1,   121,   184,    -1,   191,    -1,   194,    87,   191,    -1,
     194,   100,   191,    -1,   194,   101,   191,    -1,   194,    -1,
     195,    98,   194,    -1,   195,    99,   194,    -1,   195,    -1,
     196,    60,   195,    -1,   196,    61,   195,    -1,   196,    62,
     195,    -1,   196,    -1,   197,   102,   196,    -1,   197,   103,
     196,    -1,   197,    64,   196,    -1,   197,    63,   196,    -1,
     197,    29,   109,    -1,   197,    -1,   198,    65,   197,    -1,
     198,    66,   197,    -1,   198,    -1,   199,   104,   198,    -1,
     199,    -1,   200,   105,   199,    -1,   200,    -1,   201,   106,
     200,    -1,   201,    -1,   202,    67,   201,    -1,   202,    -1,
     203,    68,   202,    -1,   203,    -1,   203,   107,   207,    93,
     204,    -1,   204,    -1,   187,   206,   205,    -1,    90,    -1,
      70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,
      75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,
      80,    -1,   205,    -1,   204,    -1
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
     210,   214,   215,   219,   220,   224,   225,   229,   233,   234,
     238,   239,   240,   241,   245,   246,   250,   254,   258,   259,
     263,   264,   268,   269,   273,   274,   278,   279,   283,   284,
     285,   286,   287,   288,   289,   290,   294,   298,   299,   300,
     304,   308,   309,   310,   314,   315,   316,   317,   321,   322,
     323,   327,   328,   332,   336,   337,   341,   342,   343,   344,
     345,   346,   347,   351,   352,   353,   354,   358,   359,   363,
     367,   368,   372,   376,   377,   381,   382,   383,   387,   388,
     392,   393,   394,   395,   396,   400,   401,   405,   406,   407,
     408,   409,   413,   414,   418,   419,   420,   424,   425,   426,
     430,   431,   435,   436,   440,   441,   442,   443,   444,   445,
     449,   450,   454,   455,   456,   460,   461,   465,   469,   470,
     474,   475,   479,   480,   484,   485,   486,   487,   491,   492,
     496,   497,   501,   502,   506,   507,   508,   509,   513,   514,
     518,   522,   523,   524,   525,   529,   530,   531,   535,   536,
     537,   538,   542,   543,   544,   545,   546,   547,   551,   552,
     553,   557,   558,   562,   563,   567,   568,   572,   573,   577,
     578,   582,   583,   587,   588,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   607,   611
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT", "BOOLEAN", "BREAK", "BYTE",
  "BYVALUE", "CASE", "CAST", "CATCH", "CHAR", "CLASS", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTENDS", "FINAL", "FINALLY",
  "FLOAT", "FOR", "FUTURE", "GENERIC", "IF", "IMPLEMENTS", "IMPORT",
  "INNER", "INSTANCEOF", "INT", "INTERFACE", "LONG", "NATIVE", "NEW",
  "JNULL", "OPERATOR", "OUTER", "PACKAGE", "PRIVATE", "PROTECTED",
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
     335,   336,   337,   338,    44,    59,    46,    42,   123,   125,
      61,    40,    41,    58,    91,    93,   126,    33,    43,    45,
      47,    37,    60,    62,    38,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   113,   113,   114,
     115,   115,   115,   115,   115,   115,   115,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   123,   123,   123,   123,   123,   123,   124,   124,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     126,   126,   127,   128,   128,   129,   129,   130,   130,   130,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   135,   135,   135,   136,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   142,   142,
     143,   143,   143,   143,   144,   144,   145,   146,   147,   147,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     152,   152,   152,   152,   152,   152,   153,   154,   154,   154,
     155,   156,   156,   156,   157,   157,   157,   157,   158,   158,
     158,   159,   159,   160,   161,   161,   162,   162,   162,   162,
     162,   162,   162,   163,   163,   163,   163,   164,   164,   165,
     166,   166,   167,   168,   168,   169,   169,   169,   170,   170,
     171,   171,   171,   171,   171,   172,   172,   173,   173,   173,
     173,   173,   174,   174,   175,   175,   175,   176,   176,   176,
     177,   177,   178,   178,   179,   179,   179,   179,   179,   179,
     180,   180,   181,   181,   181,   182,   182,   183,   184,   184,
     185,   185,   186,   186,   187,   187,   187,   187,   188,   188,
     189,   189,   190,   190,   191,   191,   191,   191,   192,   192,
     193,   194,   194,   194,   194,   195,   195,   195,   196,   196,
     196,   196,   197,   197,   197,   197,   197,   197,   198,   198,
     198,   199,   199,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   207,   208
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
       3,     1,     3,     2,     3,     1,     2,     2,     1,     1,
       4,     3,     3,     2,     4,     3,     2,     1,     2,     3,
       3,     2,     1,     2,     1,     1,     3,     4,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     3,     2,
       1,     5,     7,     5,     5,     7,     7,     6,     2,     1,
       1,     2,     1,     1,     1,     3,     3,     2,     3,     2,
       3,     2,     3,     5,     3,     3,     4,     1,     2,     2,
       5,     4,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     4,     4,     3,     3,     3,
       3,     3,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     1,     3,     3,     4,     4,
       5,     4,     4,     3,     3,     1,     2,     3,     1,     2,
       1,     1,     2,     2,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     4,     4,     4,     1,     2,
       2,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
       0,    68,    69,     0,    70,    71,   107,    44,     0,     0,
      46,    45,    37,     0,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,     0,   188,     0,     0,
     187,     0,     0,     0,     0,     0,    36,   170,   171,   126,
     111,     0,   220,   221,   222,   223,     0,     4,   163,   125,
       0,   112,   114,   115,   118,   119,     0,   121,   122,   123,
     124,   210,   164,   167,   169,   172,   173,   174,     0,   165,
     166,   192,   195,   194,   218,   211,   224,   217,     0,     0,
     231,   235,   238,   242,   248,   251,   253,   255,   257,   259,
     261,   263,   277,   130,    95,    74,    75,     0,    77,   208,
       3,     0,     0,    38,    64,    66,    67,     0,     0,   103,
      42,    41,   108,    62,     6,     0,    43,    35,     0,   105,
       0,     0,    91,     0,   147,     0,   163,   224,   278,     0,
       0,   149,   129,     0,     0,     0,     0,     0,   151,     0,
       0,     0,     0,     0,     0,     0,   214,   215,   127,   228,
     163,     0,     0,     0,     0,    77,     0,     0,     0,   110,
     113,   120,     0,     0,     0,     0,     0,   212,   213,     0,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   265,     0,   219,   216,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,    88,
      98,    96,     0,     0,   209,    73,     0,     0,   101,    97,
     102,    40,     0,   109,     0,    93,     0,   104,   146,   128,
     148,     0,     0,   140,   139,   144,     0,     0,     0,     0,
       0,   203,   205,   204,   150,     0,     0,   152,     0,     0,
     155,   157,     0,   154,     0,     0,   229,   230,     0,     0,
     168,   116,   181,   180,   179,   193,     0,   177,     0,   183,
       0,   190,   197,     0,     0,   196,    82,     0,    79,   178,
     264,   232,   233,   234,   236,   237,   239,   240,   241,   247,
     246,   245,   243,   244,   249,   250,   252,   254,   256,   258,
     260,     0,    76,    87,    78,    90,     0,     0,    86,   100,
       7,    94,    92,     0,   117,   142,     0,     0,     0,   138,
       0,   201,     0,     0,   206,   202,     0,     0,     0,   162,
     158,   156,   159,     0,   168,   225,   226,   227,   175,   176,
       0,   182,   199,    80,     0,    84,   198,     0,    89,    85,
       0,     0,     0,   143,   141,   145,   131,   200,   207,   133,
     153,     0,   134,   191,    81,    83,   262,     0,   137,     0,
       0,     0,   161,   135,   136,   132,   160
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    61,    62,   183,   195,    37,    15,    16,    17,    18,
      19,    20,    21,   196,    22,    23,    24,    25,    26,    80,
      67,    68,    69,    70,   165,   166,   346,   347,    71,   167,
     191,   192,   225,   178,   279,    72,    73,    74,    75,    81,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     306,   386,   422,   307,   129,   130,   320,   321,   322,   323,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   340,
     140,   141,   142,   143,   311,   312,   170,   144,   145,   146,
     147,   148,   149,   150,   221,   222,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   252,   163,
     199
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -270
static const yytype_int16 yypact[] =
{
    1621,  -270,  -270,  -270,   -58,  -270,  -270,   -58,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,    49,  -270,  1652,   513,  -270,
    1652,  -270,     9,    15,   513,  -270,    29,  -270,   142,   185,
    -270,   513,  1652,  -270,   513,  -270,  -270,    41,  1371,  -270,
      64,   113,    83,    41,    78,    41,   513,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,    81,  -270,    85,   394,
    -270,    99,   130,  -270,   121,  -270,  1587,  1425,  -270,     9,
     125,  -270,  -270,     1,  -270,  -270,  -270,   113,   287,   -58,
    -270,    -6,  -270,     9,  -270,   257,   131,  1201,   132,   126,
     588,   287,   155,   157,   287,  -270,   793,  -270,   160,   166,
    -270,  1201,    81,   171,  1259,  1259,   174,  -270,  -270,  -270,
    -270,  1201,  -270,  -270,  -270,  -270,    99,   178,   149,  -270,
     492,  -270,  -270,  -270,  -270,  -270,   187,  -270,  -270,  -270,
    -270,  -270,   191,   190,   195,  -270,  -270,  -270,   199,   205,
    -270,  -270,   219,   222,   216,   227,   384,  -270,  1259,  1201,
    -270,   -28,   182,   172,    16,   229,   214,   225,   226,   270,
     -47,  -270,  -270,  -270,  -270,   259,  -270,    10,    23,  -270,
     272,    99,     1,  -270,  -270,    41,  -270,   -58,    81,  -270,
    -270,    -6,  -270,   261,   121,   287,  -270,    41,   287,  -270,
      99,    48,  -270,   262,  -270,   178,    80,  -270,  -270,   253,
     263,  -270,  -270,   293,    99,   661,  1201,    74,  -270,   268,
    1201,  1201,   269,   102,  1201,  1201,  -270,  -270,  -270,   -36,
      14,   264,   265,   266,   215,   -13,   343,    42,  1201,  -270,
    -270,  -270,   279,  1201,   851,  1479,   156,  -270,  -270,   280,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  1201,  -270,  -270,  1201,  1201,  1201,  1201,  1201,
    1201,  1201,  1201,   287,  1201,  1201,  1201,  1201,  1201,  1201,
    1201,  1201,  1201,  1201,  1201,  1201,    99,  -270,    97,  -270,
    -270,  -270,   924,   815,  -270,   259,    10,    81,  -270,   261,
    -270,  -270,   -58,  -270,    99,   294,   850,  -270,  -270,  -270,
    -270,   271,   220,  -270,  -270,  -270,   997,   241,   273,  1055,
    1201,   -26,  -270,   272,  -270,   274,   275,  -270,   278,    81,
     102,  -270,    81,  -270,   288,   300,   272,   272,  1201,  1201,
    1317,  -270,  -270,  -270,  -270,  -270,   298,  -270,   301,  -270,
      71,  -270,  -270,  1533,   719,  -270,  -270,    17,  -270,  -270,
    -270,  -270,  -270,  -270,   -28,   -28,   182,   182,   182,  -270,
     172,   172,   172,   172,    16,    16,   229,   214,   225,   226,
     270,   277,  -270,  -270,  -270,  -270,    91,    97,  -270,  -270,
     121,   294,  -270,  1201,  -270,  -270,  1128,   310,  1201,  -270,
     588,  -270,    95,   302,  -270,   272,    81,   588,   287,  -270,
    -270,  -270,  -270,   588,  -270,  -270,  -270,  -270,  -270,  -270,
    1201,  -270,  -270,  -270,    60,   924,  -270,  1201,  -270,  -270,
     309,   588,   311,   320,  -270,  -270,   347,  -270,  -270,  -270,
    -270,    46,  -270,  -270,  -270,  -270,  -270,   321,  -270,   588,
     588,   319,  -270,  -270,  -270,  -270,  -270
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,   -54,   -70,   235,   -27,    19,  -270,  -270,  -270,    79,
      51,   397,    89,    -4,   -32,  -270,   -29,     4,    20,   -24,
     183,   -60,  -270,  -270,  -100,   141,  -269,    76,  -270,   250,
     139,   127,   -34,  -150,  -260,  -270,   359,  -270,  -270,   350,
     -37,  -270,   312,   228,   -88,  -270,  -270,  -191,  -270,  -270,
    -270,  -270,  -270,    44,  -270,  -270,  -270,   111,  -270,   114,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,   158,
    -270,   208,  -270,  -270,  -270,   128,  -178,  -270,  -270,   117,
     106,  -270,  -270,  -103,  -270,  -270,    69,   -68,    56,    67,
     180,   177,   193,   196,   192,  -270,   -83,   218,  -270,   -86,
    -270
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -187
static const yytype_int16 yytable[] =
{
      28,    76,   203,    29,   198,   116,    65,   174,   182,    66,
     209,    63,   171,   374,   305,   212,   224,   278,   373,    84,
      79,   274,   287,    27,   207,   223,   378,   168,    39,   313,
      76,   190,   117,   169,    64,    65,   179,   204,    66,    63,
      63,   326,   327,   169,    40,   263,   254,    43,    45,    30,
     226,    63,   177,   180,   333,   118,   281,   186,    63,   255,
     275,   177,    64,    64,    63,   213,   116,    63,   310,    33,
      39,   285,   256,   257,    64,   184,    94,   282,   185,   264,
     265,    64,    33,   169,   219,    33,    40,    64,   175,    59,
      64,   334,   281,   117,    36,   277,    31,    33,    59,    34,
     227,   415,   187,    38,   302,  -186,   416,   220,   228,    35,
      41,    46,   318,   282,   283,   293,   118,   419,   266,   267,
     308,    35,   319,    82,   315,   316,    47,   441,   324,   325,
     280,    78,   296,   395,   294,   288,   377,   168,   442,    79,
     297,   290,   336,   169,   415,    77,   435,   338,   341,   434,
     348,   116,   351,   352,   353,   410,   295,   291,    63,    82,
      48,    63,    49,   411,    82,   309,   227,    50,   310,    59,
      83,  -186,    51,   184,   228,   296,    85,    52,   117,   410,
     164,    64,   277,   418,    64,    59,    53,   427,    54,   371,
      94,    95,   356,   357,   358,   305,   348,   425,    76,   169,
      55,   118,    97,    65,   197,   100,    66,    44,    63,   359,
     176,    57,   193,   200,   104,   105,   194,   201,    -5,   202,
     387,   216,   217,   341,   393,   405,   406,    36,    42,   190,
      -5,    64,   260,   261,   262,   227,    63,    27,   107,   108,
    -186,   280,   190,   228,   344,   345,   205,   111,   206,   280,
     379,   210,   112,   113,   114,   115,    63,   211,   348,    64,
     381,    48,   214,    49,   226,   253,   197,   218,    50,    63,
      36,    44,   231,    51,   237,   238,   188,   232,    52,    64,
     258,   259,   399,   174,   233,   402,  -184,    53,   380,    54,
     234,    48,    64,    49,   268,   269,  -185,   420,    50,   276,
     331,    55,   426,    51,   276,   384,    76,   235,    52,   430,
     236,    65,    57,   239,    66,   432,    63,    53,   270,    54,
     360,   361,   362,   363,   433,   388,   389,   354,   355,   348,
     271,    55,   272,   438,   436,   364,   365,   273,    27,    64,
     280,   284,    57,   276,   431,   292,   299,   298,   300,   189,
     301,   444,   445,   314,   317,   332,   328,   329,   330,   429,
     337,   349,   383,   281,   440,   390,   396,   397,    27,   398,
     417,    63,   197,   197,   197,   197,   197,   197,   197,   197,
     403,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   404,   408,    64,   424,   409,   428,    48,    86,
      49,   437,    87,   439,   388,    50,   443,    88,    89,    90,
      51,   446,   289,    91,    32,    52,    92,   372,   343,    93,
     414,   286,   376,   382,    53,   172,    54,   181,    94,    95,
     423,   400,   230,   304,   401,   335,   407,    96,    55,   394,
      97,    98,    99,   100,   101,   197,   197,   102,   367,    57,
     366,   103,   104,   105,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   368,   370,   392,     0,   369,
     350,     0,     0,     0,   251,   106,   107,   108,     0,   109,
       0,     0,    59,   110,     0,   111,     0,     0,     0,     0,
     112,   113,   114,   115,     0,     0,    48,    86,    49,     0,
      87,     0,     0,    50,     0,    88,    89,    90,    51,     0,
       0,    91,     0,    52,    92,     0,     1,    93,     0,     0,
       0,     0,    53,     0,    54,     2,    94,    95,     0,     0,
       0,     0,     3,     0,   197,    96,    55,     0,    97,    98,
      99,   100,   101,     0,     5,   102,     6,    57,     0,   103,
     104,   105,     8,     9,    10,     0,     0,     0,    11,     0,
       0,    12,     0,     0,     0,    13,     0,     0,     0,    14,
       0,     0,     0,   106,   107,   108,     0,   109,     0,     0,
      59,   229,     0,   111,     0,     0,     0,     0,   112,   113,
     114,   115,    48,    86,    49,     0,    87,     0,     0,    50,
       0,    88,    89,    90,    51,     0,     0,     0,     0,    52,
      92,     0,     0,    93,     0,     0,     0,     0,    53,     0,
      54,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,    96,    55,     0,    97,    98,    99,   100,   101,     0,
       0,   102,     0,    57,     0,   103,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,    49,     0,   106,
     107,   108,    50,   109,     0,     0,    59,    51,     0,   111,
      91,     0,    52,     0,   112,   113,   114,   115,     0,     0,
       0,    53,     0,    54,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    97,     0,     0,
     100,     0,     0,     0,     0,     0,    57,     0,     0,   104,
     105,     0,     0,    48,     0,    49,     0,     0,     0,     0,
      50,     0,     0,     0,     0,    51,     0,     0,     0,     0,
      52,     0,    27,   107,   108,     0,   303,     0,     0,    53,
       0,    54,   111,    94,    95,     0,     0,   112,   113,   114,
     115,     0,     0,    55,     0,    97,     0,     0,   100,     0,
       0,     0,     0,     0,    57,     0,     0,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,    49,
      27,   107,   108,     0,    50,     0,     0,   344,   413,    51,
     111,     0,     0,     0,    52,   112,   113,   114,   115,    48,
       0,    49,     0,    53,     0,    54,    50,    94,    95,     0,
       0,    51,     0,     0,   188,     0,    52,    55,     0,    97,
       0,     0,   100,     0,     0,    53,     0,    54,    57,     0,
       0,   104,   105,     0,    48,    48,    49,    49,     0,    55,
       0,    50,    50,     0,     0,     0,    51,    51,     0,   188,
      57,    52,    52,     0,    27,   107,   108,     0,   208,     0,
      53,    53,    54,    54,   111,    94,    95,     0,     0,   112,
     113,   114,   115,     0,    55,    55,    27,    97,     0,     0,
     100,     0,     0,     0,     0,    57,    57,   375,     0,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
      49,    27,    27,   107,   108,    50,     0,     0,     0,     0,
      51,     0,   111,   339,     0,    52,     0,   112,   113,   114,
     115,     0,     0,     0,    53,     0,    54,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      97,     0,     0,   100,     0,     0,     0,     0,     0,    57,
       0,     0,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,    49,     0,    27,   107,   108,    50,     0,
       0,     0,   344,    51,     0,   111,     0,     0,    52,     0,
     112,   113,   114,   115,     0,     0,     0,    53,     0,    54,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    97,     0,     0,   100,     0,     0,     0,
       0,     0,    57,     0,     0,   104,   105,     0,     0,    48,
       0,    49,     0,     0,     0,     0,    50,     0,     0,     0,
       0,    51,     0,     0,     0,     0,    52,     0,    27,   107,
     108,     0,   385,     0,     0,    53,     0,    54,   111,    94,
      95,     0,     0,   112,   113,   114,   115,     0,     0,    55,
       0,    97,     0,     0,   100,     0,     0,     0,     0,     0,
      57,     0,     0,   104,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,    49,     0,    27,   107,   108,    50,
       0,     0,     0,     0,    51,     0,   111,   391,     0,    52,
       0,   112,   113,   114,   115,     0,     0,     0,    53,     0,
      54,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    97,     0,     0,   100,     0,     0,
       0,     0,     0,    57,     0,     0,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,    49,     0,    27,
     107,   108,    50,     0,     0,     0,     0,    51,     0,   111,
     421,     0,    52,     0,   112,   113,   114,   115,     0,     0,
       0,    53,     0,    54,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    97,     0,     0,
     100,     0,     0,     0,     0,     0,    57,     0,     0,   104,
     105,     0,     0,    48,     0,    49,     0,     0,     0,     0,
      50,     0,     0,     0,     0,    51,     0,     0,     0,     0,
      52,     0,    27,   107,   108,     0,     0,     0,     0,    53,
       0,    54,   111,    94,    95,     0,     0,   112,   113,   114,
     115,     0,     0,    55,     0,    97,     0,     0,   100,     0,
       0,     0,     0,     0,    57,     0,     0,   104,   105,     0,
       0,    48,     0,    49,     0,     0,     0,     0,    50,     0,
       0,     0,     0,    51,     0,     0,     0,     0,    52,     0,
      27,   107,   108,     0,     0,     0,     0,    53,     0,    54,
     215,    94,    95,     0,     0,   112,   113,   114,   115,     0,
       0,    55,     0,    97,     0,     0,   100,     0,     0,     0,
       0,     0,    57,     0,     1,    48,     0,    49,     0,     0,
       0,     0,    50,     2,     0,     0,     0,    51,     0,     0,
       3,     0,    52,     0,     0,     0,     0,     0,    27,   107,
     108,    53,     5,    54,     6,     0,     0,     0,   215,     0,
       8,     9,    10,   112,   113,    55,    56,     0,     0,    12,
       0,     0,     0,    13,     0,     0,    57,    14,     1,    48,
       0,    49,     0,     0,     0,     0,    50,     2,     0,     0,
       0,    51,     0,     0,     3,     0,    52,     0,     0,     0,
       0,     0,    58,     0,     0,    53,     5,    54,     6,    59,
      60,     0,     0,     0,     8,     9,    10,     0,     0,    55,
      56,     0,     0,    12,     0,     0,     0,    13,     0,     0,
      57,    14,     1,    48,     0,    49,     0,     0,     0,     0,
      50,     2,     0,     0,     0,    51,     0,     0,     3,     0,
      52,     0,     0,     0,     0,     0,    58,     0,     0,    53,
       5,    54,     6,    59,   173,     0,     0,     0,     8,     9,
      10,     0,     0,    55,    56,     0,     0,    12,     0,     0,
       0,    13,     0,     0,    57,    14,     1,    48,     0,    49,
       0,     0,     0,     0,    50,     2,     0,     0,     0,    51,
       0,     0,     3,     0,    52,     0,     0,     0,     0,     0,
      58,     0,     0,    53,     5,    54,     6,    59,   342,     0,
       0,     0,     8,     9,    10,     0,     0,    55,    56,     0,
       0,    12,     0,     0,     0,    13,     0,     0,    57,    14,
       1,    48,     0,    49,     0,     0,     0,     0,    50,     2,
       0,     0,     0,    51,     0,     0,     3,     0,    52,     0,
       0,     0,     0,     0,    58,     0,     0,    53,     5,    54,
       6,    59,   412,     0,     1,     0,     8,     9,    10,     0,
       0,    55,    11,     2,     0,    12,     0,     0,     0,    13,
       3,     0,    57,    14,     0,     0,     0,     0,     4,     0,
       0,     0,     5,     0,     6,     1,     0,     0,     0,     7,
       8,     9,    10,     0,     2,     0,    11,     0,    58,    12,
       0,     3,     0,    13,     0,     0,     0,    14,     0,     4,
       0,     0,     0,     5,     0,     6,     0,     0,     0,     0,
       0,     8,     9,    10,     0,     0,     0,    11,     0,     0,
      12,     0,     0,     0,    13,     0,     0,     0,    14
};

static const yytype_int16 yycheck[] =
{
       4,    38,    90,     7,    87,    59,    38,    67,    78,    38,
      96,    38,    66,   282,   205,   101,   116,   167,   278,    56,
      26,    68,   172,    81,    94,   111,   286,    61,    24,   207,
      67,    85,    59,    69,    38,    67,    73,    91,    67,    66,
      67,   219,   220,    69,    24,    29,   149,    28,    29,     0,
      86,    78,    51,    77,    12,    59,    69,    81,    85,    87,
     107,    51,    66,    67,    91,   102,   120,    94,    94,    18,
      66,   171,   100,   101,    78,    79,    34,    90,    84,    63,
      64,    85,    31,    69,   111,    34,    66,    91,    69,    88,
      94,    49,    69,   120,    85,    85,    17,    46,    88,    20,
      86,    84,    83,    88,   204,    91,    89,   111,    94,    20,
      81,    32,    10,    90,    91,   185,   120,   377,   102,   103,
     206,    32,    20,    81,   210,   211,    85,    81,   214,   215,
     167,    18,    84,   311,   188,   172,   286,   171,    92,    26,
      92,   178,   228,    69,    84,    81,   415,   233,   234,    89,
     236,   205,   255,   256,   257,    84,   190,   181,   185,    81,
       4,   188,     6,    92,    81,    91,    86,    11,    94,    88,
      87,    91,    16,   177,    94,    84,    91,    21,   205,    84,
      81,   185,    85,    92,   188,    88,    30,    92,    32,   275,
      34,    35,   260,   261,   262,   386,   282,   388,   235,    69,
      44,   205,    46,   235,    87,    49,   235,    86,   235,   263,
      85,    55,    81,    81,    58,    59,    85,    85,    69,    93,
     306,   104,   105,   309,   310,   328,   329,    85,    86,   283,
      81,   235,    60,    61,    62,    86,   263,    81,    82,    83,
      91,   278,   296,    94,    88,    89,    91,    91,    91,   286,
     287,    91,    96,    97,    98,    99,   283,    91,   344,   263,
     294,     4,    91,     6,    86,   148,   149,    93,    11,   296,
      85,    86,    85,    16,    58,    59,    19,    86,    21,   283,
      98,    99,   319,   343,    94,   322,    91,    30,   292,    32,
      91,     4,   296,     6,    65,    66,    91,   383,    11,    84,
      85,    44,   390,    16,    84,    85,   343,    88,    21,   397,
      88,   343,    55,    86,   343,   403,   343,    30,   104,    32,
     264,   265,   266,   267,   410,    84,    85,   258,   259,   415,
     105,    44,   106,   421,   417,   268,   269,    67,    81,   343,
     377,    69,    55,    84,   398,    84,    93,    85,    85,    92,
      57,   439,   440,    85,    85,    12,    92,    92,    92,   396,
      81,    81,    91,    69,    17,    92,    92,    92,    81,    91,
      93,   398,   255,   256,   257,   258,   259,   260,   261,   262,
      92,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,    92,    95,   398,    85,    95,    95,     4,     5,
       6,    92,     8,    92,    84,    11,    85,    13,    14,    15,
      16,    92,   177,    19,    17,    21,    22,   276,   235,    25,
     344,   171,   283,   296,    30,    66,    32,    77,    34,    35,
     386,   320,   120,   205,   320,   227,   330,    43,    44,   311,
      46,    47,    48,    49,    50,   328,   329,    53,   271,    55,
     270,    57,    58,    59,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   272,   274,   309,    -1,   273,
     252,    -1,    -1,    -1,    90,    81,    82,    83,    -1,    85,
      -1,    -1,    88,    89,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,    -1,    -1,     4,     5,     6,    -1,
       8,    -1,    -1,    11,    -1,    13,    14,    15,    16,    -1,
      -1,    19,    -1,    21,    22,    -1,     3,    25,    -1,    -1,
      -1,    -1,    30,    -1,    32,    12,    34,    35,    -1,    -1,
      -1,    -1,    19,    -1,   417,    43,    44,    -1,    46,    47,
      48,    49,    50,    -1,    31,    53,    33,    55,    -1,    57,
      58,    59,    39,    40,    41,    -1,    -1,    -1,    45,    -1,
      -1,    48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,    -1,
      88,    89,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,     4,     5,     6,    -1,     8,    -1,    -1,    11,
      -1,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,     6,    -1,    81,
      82,    83,    11,    85,    -1,    -1,    88,    16,    -1,    91,
      19,    -1,    21,    -1,    96,    97,    98,    99,    -1,    -1,
      -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      21,    -1,    81,    82,    83,    -1,    85,    -1,    -1,    30,
      -1,    32,    91,    34,    35,    -1,    -1,    96,    97,    98,
      99,    -1,    -1,    44,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,
      81,    82,    83,    -1,    11,    -1,    -1,    88,    89,    16,
      91,    -1,    -1,    -1,    21,    96,    97,    98,    99,     4,
      -1,     6,    -1,    30,    -1,    32,    11,    34,    35,    -1,
      -1,    16,    -1,    -1,    19,    -1,    21,    44,    -1,    46,
      -1,    -1,    49,    -1,    -1,    30,    -1,    32,    55,    -1,
      -1,    58,    59,    -1,     4,     4,     6,     6,    -1,    44,
      -1,    11,    11,    -1,    -1,    -1,    16,    16,    -1,    19,
      55,    21,    21,    -1,    81,    82,    83,    -1,    85,    -1,
      30,    30,    32,    32,    91,    34,    35,    -1,    -1,    96,
      97,    98,    99,    -1,    44,    44,    81,    46,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    55,    55,    92,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,    81,    81,    82,    83,    11,    -1,    -1,    -1,    -1,
      16,    -1,    91,    92,    -1,    21,    -1,    96,    97,    98,
      99,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,     6,    -1,    81,    82,    83,    11,    -1,
      -1,    -1,    88,    16,    -1,    91,    -1,    -1,    21,    -1,
      96,    97,    98,    99,    -1,    -1,    -1,    30,    -1,    32,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,     4,
      -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    21,    -1,    81,    82,
      83,    -1,    85,    -1,    -1,    30,    -1,    32,    91,    34,
      35,    -1,    -1,    96,    97,    98,    99,    -1,    -1,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,     6,    -1,    81,    82,    83,    11,
      -1,    -1,    -1,    -1,    16,    -1,    91,    92,    -1,    21,
      -1,    96,    97,    98,    99,    -1,    -1,    -1,    30,    -1,
      32,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,     6,    -1,    81,
      82,    83,    11,    -1,    -1,    -1,    -1,    16,    -1,    91,
      92,    -1,    21,    -1,    96,    97,    98,    99,    -1,    -1,
      -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      21,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,    30,
      -1,    32,    91,    34,    35,    -1,    -1,    96,    97,    98,
      99,    -1,    -1,    44,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,    -1,
      81,    82,    83,    -1,    -1,    -1,    -1,    30,    -1,    32,
      91,    34,    35,    -1,    -1,    96,    97,    98,    99,    -1,
      -1,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    55,    -1,     3,     4,    -1,     6,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    16,    -1,    -1,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    30,    31,    32,    33,    -1,    -1,    -1,    91,    -1,
      39,    40,    41,    96,    97,    44,    45,    -1,    -1,    48,
      -1,    -1,    -1,    52,    -1,    -1,    55,    56,     3,     4,
      -1,     6,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    30,    31,    32,    33,    88,
      89,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,    -1,
      55,    56,     3,     4,    -1,     6,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    16,    -1,    -1,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    30,
      31,    32,    33,    88,    89,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    48,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,     3,     4,    -1,     6,
      -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    30,    31,    32,    33,    88,    89,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    48,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
       3,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    16,    -1,    -1,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    30,    31,    32,
      33,    88,    89,    -1,     3,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    12,    -1,    48,    -1,    -1,    -1,    52,
      19,    -1,    55,    56,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,    33,     3,    -1,    -1,    -1,    38,
      39,    40,    41,    -1,    12,    -1,    45,    -1,    81,    48,
      -1,    19,    -1,    52,    -1,    -1,    -1,    56,    -1,    27,
      -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    -1,    -1,
      48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    12,    19,    27,    31,    33,    38,    39,    40,
      41,    45,    48,    52,    56,   114,   115,   116,   117,   118,
     119,   120,   122,   123,   124,   125,   126,    81,   121,   121,
       0,   117,   119,   118,   117,   120,    85,   113,    88,   125,
     126,    81,    86,   113,    86,   113,   117,    85,     4,     6,
      11,    16,    21,    30,    32,    44,    45,    55,    81,    88,
      89,   109,   110,   112,   121,   122,   124,   128,   129,   130,
     131,   136,   143,   144,   145,   146,   148,    81,    18,    26,
     127,   147,    81,    87,   148,    91,     5,     8,    13,    14,
      15,    19,    22,    25,    34,    35,    43,    46,    47,    48,
      49,    50,    53,    57,    58,    59,    81,    82,    83,    85,
      89,    91,    96,    97,    98,    99,   109,   112,   121,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   162,
     163,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     178,   179,   180,   181,   185,   186,   187,   188,   189,   190,
     191,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   207,    81,   132,   133,   137,   140,    69,
     184,   109,   144,    89,   129,   113,    85,    51,   141,   148,
     127,   147,   110,   111,   121,    84,   127,   113,    19,    92,
     109,   138,   139,    81,    85,   112,   121,   187,   204,   208,
      81,    85,    93,   152,   109,    91,    91,   110,    85,   207,
      91,    91,   207,   148,    91,    91,   187,   187,    93,   112,
     121,   192,   193,   207,   132,   140,    86,    86,    94,    89,
     150,    85,    86,    94,    91,    88,    88,    58,    59,    86,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    90,   206,   187,   191,    87,   100,   101,    98,    99,
      60,    61,    62,    29,    63,    64,   102,   103,    65,    66,
     104,   105,   106,    67,    68,   107,    84,    85,   141,   142,
     148,    69,    90,    91,    69,   132,   137,   141,   148,   111,
     148,   127,    84,   110,   109,   140,    84,    92,    85,    93,
      85,    57,   132,    85,   151,   155,   158,   161,   207,    91,
      94,   182,   183,   184,    85,   207,   207,    85,    10,    20,
     164,   165,   166,   167,   207,   207,   184,   184,    92,    92,
      92,    85,    12,    12,    49,   179,   207,    81,   207,    92,
     177,   207,    89,   128,    88,    89,   134,   135,   207,    81,
     205,   191,   191,   191,   194,   194,   195,   195,   195,   109,
     196,   196,   196,   196,   197,   197,   198,   199,   200,   201,
     202,   207,   133,   142,   134,    92,   138,   141,   142,   148,
     121,   140,   139,    91,    85,    85,   159,   207,    84,    85,
      92,    92,   177,   207,   183,   184,    92,    92,    91,   148,
     165,   167,   148,    92,    92,   191,   191,   188,    95,    95,
      84,    92,    89,    89,   135,    84,    89,    93,    92,   142,
     207,    92,   160,   161,    85,   155,   152,    92,    95,   148,
     152,   109,   152,   207,    89,   134,   204,    92,   152,    92,
      17,    81,    92,    85,   152,   152,    92
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
#line 2214 "y.tab.c"
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
#line 614 "pJava.y"

int main()
{
yyparse();

}

int yyerror(char* s)
{
printf("%s\n", s);
}

