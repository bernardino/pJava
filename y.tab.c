
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
#line 1 "comp.y"

#include <stdio.h>
#include "symbol_table.h"
#include "structures.h"
#include "functions.h"
#include "shows.h"

table_element *symtab = NULL;
is_program *myprogram;



/* Line 189 of yacc.c  */
#line 86 "y.tab.c"

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

/* Line 214 of yacc.c  */
#line 36 "comp.y"


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
is_increase_list *inc_list;
is_increase *inc;
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



/* Line 214 of yacc.c  */
#line 298 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 310 "y.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   577

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  207

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    69,    70,     2,
      71,    72,    67,    65,    83,    66,     2,    68,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,    82,
      73,    75,    74,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,    79,     2,     2,     2,     2,
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
      76,    77
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    16,    28,    30,    33,    42,    44,
      46,    48,    51,    55,    57,    60,    63,    66,    69,    71,
      73,    76,    79,    82,    86,    89,    92,    95,    98,   100,
     102,   104,   107,   111,   113,   115,   117,   119,   123,   128,
     132,   136,   140,   144,   148,   152,   156,   160,   164,   168,
     172,   176,   180,   184,   188,   192,   194,   198,   200,   204,
     206,   210,   212,   216,   219,   229,   235,   243,   249,   257,
     265,   267,   271,   273,   275,   279,   281,   283,   286,   292,
     297,   302,   306,   308,   310,   312,   314,   316,   318,   320,
     322,   324,   326,   329,   332,   334,   336,   338,   340,   342,
     344,   346,   348,   350
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      86,     0,    -1,    17,    63,    78,    87,    79,    -1,    17,
      63,    78,    87,    88,    79,    -1,    48,    50,    57,    31,
      71,    51,    80,    81,     3,    72,    91,    -1,    89,    -1,
      88,    89,    -1,    90,    50,   115,    63,    71,   105,    72,
      91,    -1,    46,    -1,    47,    -1,    48,    -1,    78,    79,
      -1,    78,    92,    79,    -1,    93,    -1,    92,    93,    -1,
      94,    82,    -1,    95,    82,    -1,    96,    82,    -1,   108,
      -1,   107,    -1,    97,    82,    -1,    99,    82,    -1,   115,
     103,    -1,    63,   113,    98,    -1,    63,    34,    -1,    34,
      63,    -1,    63,    35,    -1,    35,    63,    -1,    13,    -1,
      18,    -1,    53,    -1,    53,    98,    -1,    71,    98,    72,
      -1,   114,    -1,    99,    -1,   100,    -1,   101,    -1,    63,
      71,    72,    -1,    63,    71,   102,    72,    -1,    98,    65,
      98,    -1,    98,    66,    98,    -1,    98,    67,    98,    -1,
      98,    68,    98,    -1,    98,    69,    98,    -1,    98,    70,
      98,    -1,    98,    30,    98,    -1,    98,    54,    98,    -1,
      98,    74,    98,    -1,    98,    73,    98,    -1,    98,    41,
      98,    -1,    98,    40,    98,    -1,    98,    39,    98,    -1,
      98,    42,    98,    -1,    98,    44,    98,    -1,    98,    43,
      98,    -1,    98,    -1,   102,    83,    98,    -1,   104,    -1,
     103,    83,   104,    -1,    63,    -1,    63,    75,    98,    -1,
     106,    -1,   105,    83,   106,    -1,   115,    63,    -1,    25,
      71,    95,    82,   101,    82,   109,    72,   111,    -1,    58,
      71,   101,    72,   111,    -1,    20,   111,    58,    71,   101,
      72,    82,    -1,    26,    71,    98,    72,   111,    -1,    26,
      71,    98,    72,   111,    22,   111,    -1,    52,    71,    98,
      72,    78,   112,    79,    -1,   110,    -1,   109,    83,   110,
      -1,    95,    -1,    96,    -1,    78,    92,    79,    -1,    93,
      -1,    82,    -1,    78,    79,    -1,    15,   114,    84,    92,
     112,    -1,    19,    84,    92,   112,    -1,    15,   114,    84,
      92,    -1,    19,    84,    92,    -1,    75,    -1,     6,    -1,
       7,    -1,     4,    -1,     5,    -1,    76,    -1,     9,    -1,
      63,    -1,    61,    -1,    59,    -1,    65,    59,    -1,    66,
      59,    -1,    60,    -1,    62,    -1,    55,    -1,    23,    -1,
      16,    -1,    28,    -1,    51,    -1,    12,    -1,    24,    -1,
      57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   120,   123,   127,   128,   132,   135,   136,
     137,   140,   141,   145,   146,   150,   151,   152,   153,   154,
     155,   156,   160,   163,   167,   168,   169,   170,   174,   175,
     176,   177,   182,   183,   184,   185,   186,   190,   191,   195,
     196,   197,   198,   199,   200,   201,   202,   206,   207,   208,
     209,   210,   211,   212,   213,   217,   218,   222,   223,   227,
     228,   233,   234,   238,   242,   243,   244,   247,   248,   249,
     253,   254,   258,   259,   264,   265,   266,   267,   272,   273,
     274,   275,   279,   280,   281,   282,   283,   284,   285,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   301,   302,
     303,   304,   305,   306
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARGS", "ASS_MUL", "ASS_DIV", "ASS_ADD",
  "ASS_SUB", "ASS_EQ", "ASS_AND", "ASS_LS", "ASS_RS", "BOOLEAN", "BREAK",
  "BYTE", "CASE", "CHAR", "CLASS", "CONTINUE", "DEFAULT", "DO", "DOUBLE",
  "ELSE", "FALSE", "FLOAT", "FOR", "IF", "IFELSE", "INT", "LONG", "LS",
  "MAIN", "NEW", "JNULL", "OP_INC", "OP_DEC", "OP_SHL", "OP_SHR",
  "OP_SHRR", "OP_GE", "OP_LE", "OP_EQ", "OP_NE", "OP_LAND", "OP_LOR",
  "OP_DIM", "PRIVATE", "PROTECTED", "PUBLIC", "SHORT", "STATIC", "STRING",
  "SWITCH", "RETURN", "RS", "TRUE", "THIS", "VOID", "WHILE", "NUMBER_VAL",
  "DOUBLE_VAL", "STRING_VAL", "CHAR_VAL", "ID", "IFPREC", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'&'", "'('", "')'", "'<'", "'>'", "'='",
  "ASS_PERC", "ASS_SUM", "'{'", "'}'", "'['", "']'", "';'", "','", "':'",
  "$accept", "init", "main", "function_list", "function", "scope", "code",
  "operation_list", "operation", "declaration", "assignment", "unary",
  "control", "expression", "function_call", "infix_expression",
  "if_expression", "parameter_list", "var_list", "var", "argument_list",
  "argument", "cycle", "if", "increase_list", "increase", "condition_code",
  "switch", "assign_operator", "value", "type", 0
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
     315,   316,   317,   318,   319,    43,    45,    42,    47,    37,
      38,    40,    41,    60,    62,    61,   320,   321,   123,   125,
      91,    93,    59,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    87,    88,    88,    89,    90,    90,
      90,    91,    91,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    94,    95,    96,    96,    96,    96,    97,    97,
      97,    97,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   107,   107,   107,   108,   108,   108,
     109,   109,   110,   110,   111,   111,   111,   111,   112,   112,
     112,   112,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     115,   115,   115,   115
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     6,    11,     1,     2,     8,     1,     1,
       1,     2,     3,     1,     2,     2,     2,     2,     1,     1,
       2,     2,     2,     3,     2,     2,     2,     2,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     3,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     2,     9,     5,     7,     5,     7,     7,
       1,     3,     1,     1,     3,     1,     1,     2,     5,     4,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     8,
       9,    10,     2,     0,     5,     0,     0,     3,     6,     0,
       0,   101,    98,   102,    99,   100,   103,     0,     0,     0,
       0,     0,     0,     0,    61,     0,     0,     0,     0,    63,
       0,     0,     7,    62,     0,    28,    29,     0,     0,     0,
       0,     0,     0,    30,     0,     0,    11,     0,    13,     0,
       0,     0,     0,     0,    19,    18,     0,     4,     0,    76,
      75,     0,     0,     0,    25,    27,     0,    97,    96,    91,
      94,    90,    95,    89,     0,     0,     0,    31,    34,    35,
      36,    33,     0,    85,    86,    83,    84,    88,    24,    26,
       0,    82,    87,     0,    12,    14,    15,    16,    17,    20,
      21,    59,    22,    57,    77,     0,     0,     0,     0,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    37,    55,     0,    23,     0,     0,    74,     0,
       0,     0,     0,    32,    45,    51,    50,    49,    52,    54,
      53,    46,    39,    40,    41,    42,    43,    44,    48,    47,
       0,    38,     0,    60,    58,    36,    36,    67,     0,    65,
      56,     0,     0,     0,     0,     0,     0,    66,     0,    72,
      73,     0,    70,    68,    89,     0,     0,    69,     0,     0,
       0,    81,    64,    71,    80,    79,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    13,    14,    15,    42,    57,    70,    59,
      60,    61,    62,   140,    88,    89,    90,   144,   112,   113,
      33,    34,    64,    65,   191,   192,    71,   186,   103,    91,
      66
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -172
static const yytype_int16 yypact[] =
{
       8,   -60,    29,   -48,  -172,   -13,    -5,   -38,     0,  -172,
    -172,  -172,  -172,   -28,  -172,    20,    40,  -172,  -172,   149,
       1,  -172,  -172,  -172,  -172,  -172,  -172,    10,    28,     9,
       2,   149,    19,   -51,  -172,    39,    80,    25,   149,  -172,
      35,   205,  -172,  -172,    25,  -172,  -172,   156,    34,    50,
      57,    59,    52,   133,    55,    33,  -172,   253,  -172,    45,
      53,    54,    63,    66,  -172,  -172,    68,  -172,   273,  -172,
    -172,    93,    89,   133,  -172,  -172,   133,  -172,  -172,  -172,
    -172,  -172,  -172,    82,    95,    99,   133,   495,  -172,  -172,
    -172,  -172,   133,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
      78,  -172,  -172,   133,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,    96,    81,  -172,  -172,   321,   104,    49,    97,   396,
     437,  -172,  -172,   454,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     495,   106,  -172,   495,    -8,   495,   133,    68,  -172,   133,
     133,   156,   105,  -172,    73,  -172,  -172,  -172,  -172,  -172,
    -172,    73,   503,   503,    73,    73,    73,    73,  -172,  -172,
     156,  -172,   133,   495,  -172,   113,   107,   164,     7,  -172,
     495,   115,   -20,   156,   182,   103,   122,  -172,    43,  -172,
    -172,    -7,  -172,  -172,  -172,   118,   390,  -172,   156,   -20,
     390,   370,  -172,  -172,   370,  -172,  -172
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,  -172,  -172,   190,  -172,   166,   -66,   -34,  -172,
     -71,  -171,  -172,   -40,   -41,  -172,   -88,  -172,  -172,    64,
    -172,   174,  -172,  -172,  -172,    16,  -139,  -135,  -172,    32,
     -14
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      63,   118,   115,     3,   141,    27,    63,    58,     9,    10,
      11,   190,   177,    87,    50,    51,    63,    35,     9,    10,
      11,    37,   184,   105,    35,     1,   185,    63,   190,     4,
       5,   179,    38,   119,    58,     6,   120,    93,    94,    95,
      96,    12,    97,   188,   193,     8,   123,    93,    94,    95,
      96,    17,    97,    93,    94,    95,    96,    16,    97,   202,
     143,   175,   176,   145,   171,   198,   205,    98,    99,   206,
      19,    20,    28,    29,    63,   172,   199,    98,    99,    30,
      31,   105,    32,    40,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
      36,    77,    39,    41,   100,    72,   173,    44,   101,   102,
      63,   189,   125,   126,   127,   128,   129,   130,   101,   102,
      74,    73,    75,    76,   101,   102,    92,   106,   189,    63,
     201,   111,   180,    78,   204,   107,   108,    79,    80,    81,
      82,    83,    63,    84,    85,   109,   138,   139,   110,    86,
     142,   116,   117,   100,   121,    63,    77,    63,   122,    63,
      63,    21,    58,    63,   147,    22,    58,   105,    21,    45,
     105,   146,    22,    23,    46,   149,    47,    24,   170,   150,
      23,    48,    49,   178,    24,   181,   183,   196,    78,   182,
      50,    51,    79,    80,    81,    82,    83,   187,    84,    85,
      25,   197,   200,    18,    86,    77,    26,    25,    52,    53,
      67,   174,    43,    26,    54,   203,   195,    21,    45,    55,
       0,    22,     0,    46,     0,    47,     0,     0,     0,    23,
      48,    49,     0,    24,    68,     0,     0,    78,    69,    50,
      51,    79,    80,    81,    82,   194,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,    25,    52,    53,     0,
       0,     0,    26,    54,     0,    21,    45,     0,    55,    22,
       0,    46,     0,    47,     0,     0,     0,    23,    48,    49,
       0,    24,     0,     0,    56,    21,    45,    50,    51,    22,
       0,    46,     0,    47,     0,     0,     0,    23,    48,    49,
       0,    24,     0,     0,    25,    52,    53,    50,    51,     0,
      26,    54,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,    25,    52,    53,     0,     0,     0,
      26,    54,   104,    21,    45,     0,    55,    22,     0,    46,
       0,    47,     0,     0,     0,    23,    48,    49,     0,    24,
       0,     0,   114,     0,     0,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    52,    53,     0,     0,     0,    26,    54,
       0,     0,    21,    45,    55,   184,    22,     0,    46,   185,
      47,     0,     0,     0,    23,    48,    49,     0,    24,     0,
     148,     0,    21,    45,    50,    51,    22,     0,    46,     0,
      47,     0,     0,     0,    23,    48,    49,     0,    24,     0,
       0,    25,    52,    53,    50,    51,   124,    26,    54,     0,
       0,     0,     0,    55,     0,   125,   126,   127,   128,   129,
     130,    25,    52,    53,     0,     0,     0,    26,    54,     0,
     131,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,   132,   133,   134,   135,   136,   137,   124,   151,   138,
     139,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,     0,     0,   124,     0,     0,     0,     0,     0,
       0,   131,     0,   125,   126,   127,   128,   129,   130,     0,
       0,     0,   132,   133,   134,   135,   136,   137,   131,   152,
     138,   139,     0,     0,     0,     0,     0,     0,     0,   132,
     133,   134,   135,   136,   137,   124,   153,   138,   139,     0,
       0,     0,     0,   124,   125,   126,   127,   128,   129,   130,
       0,     0,   125,   126,   127,   128,   129,   130,     0,   131,
       0,     0,     0,     0,     0,     0,     0,   131,     0,     0,
     132,   133,   134,   135,   136,   137,     0,     0,   138,   139,
     134,   135,   136,   137,     0,     0,   138,   139
};

static const yytype_int16 yycheck[] =
{
      41,    72,    68,    63,    92,    19,    47,    41,    46,    47,
      48,   182,   151,    53,    34,    35,    57,    31,    46,    47,
      48,    72,    15,    57,    38,    17,    19,    68,   199,     0,
      78,   170,    83,    73,    68,    48,    76,     4,     5,     6,
       7,    79,     9,    63,   183,    50,    86,     4,     5,     6,
       7,    79,     9,     4,     5,     6,     7,    57,     9,   198,
     100,   149,   150,   103,    72,    72,   201,    34,    35,   204,
      50,    31,    71,    63,   115,    83,    83,    34,    35,    51,
      71,   115,    80,     3,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
      81,    23,    63,    78,    71,    71,   146,    72,    75,    76,
     151,   182,    39,    40,    41,    42,    43,    44,    75,    76,
      63,    71,    63,    71,    75,    76,    71,    82,   199,   170,
     196,    63,   172,    55,   200,    82,    82,    59,    60,    61,
      62,    63,   183,    65,    66,    82,    73,    74,    82,    71,
      72,    58,    63,    71,    59,   196,    23,   198,    59,   200,
     201,    12,   196,   204,    83,    16,   200,   201,    12,    13,
     204,    75,    16,    24,    18,    71,    20,    28,    72,    82,
      24,    25,    26,    78,    28,    72,    22,    84,    55,    82,
      34,    35,    59,    60,    61,    62,    63,    82,    65,    66,
      51,    79,    84,    13,    71,    23,    57,    51,    52,    53,
      44,   147,    38,    57,    58,   199,   184,    12,    13,    63,
      -1,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    -1,    28,    78,    -1,    -1,    55,    82,    34,
      35,    59,    60,    61,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      -1,    -1,    57,    58,    -1,    12,    13,    -1,    63,    16,
      -1,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      -1,    28,    -1,    -1,    79,    12,    13,    34,    35,    16,
      -1,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      -1,    28,    -1,    -1,    51,    52,    53,    34,    35,    -1,
      57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    58,    79,    12,    13,    -1,    63,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,
      -1,    -1,    79,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    12,    13,    63,    15,    16,    -1,    18,    19,
      20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,    -1,
      79,    -1,    12,    13,    34,    35,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,    -1,
      -1,    51,    52,    53,    34,    35,    30,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    39,    40,    41,    42,    43,
      44,    51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,
      54,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    30,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    54,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    30,    72,    73,    74,    -1,
      -1,    -1,    -1,    30,    39,    40,    41,    42,    43,    44,
      -1,    -1,    39,    40,    41,    42,    43,    44,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      65,    66,    67,    68,    69,    70,    -1,    -1,    73,    74,
      67,    68,    69,    70,    -1,    -1,    73,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    86,    63,     0,    78,    48,    87,    50,    46,
      47,    48,    79,    88,    89,    90,    57,    79,    89,    50,
      31,    12,    16,    24,    28,    51,    57,   115,    71,    63,
      51,    71,    80,   105,   106,   115,    81,    72,    83,    63,
       3,    78,    91,   106,    72,    13,    18,    20,    25,    26,
      34,    35,    52,    53,    58,    63,    79,    92,    93,    94,
      95,    96,    97,    99,   107,   108,   115,    91,    78,    82,
      93,   111,    71,    71,    63,    63,    71,    23,    55,    59,
      60,    61,    62,    63,    65,    66,    71,    98,    99,   100,
     101,   114,    71,     4,     5,     6,     7,     9,    34,    35,
      71,    75,    76,   113,    79,    93,    82,    82,    82,    82,
      82,    63,   103,   104,    79,    92,    58,    63,    95,    98,
      98,    59,    59,    98,    30,    39,    40,    41,    42,    43,
      44,    54,    65,    66,    67,    68,    69,    70,    73,    74,
      98,   101,    72,    98,   102,    98,    75,    83,    79,    71,
      82,    72,    72,    72,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      72,    72,    83,    98,   104,   101,   101,   111,    78,   111,
      98,    72,    82,    22,    15,    19,   112,    82,    63,    95,
      96,   109,   110,   111,    63,   114,    84,    79,    72,    83,
      84,    92,   111,   110,    92,   112,   112
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
        case 2:

/* Line 1455 of yacc.c  */
#line 119 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].m),NULL); myprogram = (yyval.prog); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 120 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (6)].string),(yyvsp[(4) - (6)].m),(yyvsp[(5) - (6)].func_list)); myprogram = (yyval.prog); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 123 "comp.y"
    { (yyval.m) = insert_main((yyvsp[(11) - (11)].cod));}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 127 "comp.y"
    { (yyval.func_list) = insert_function_list(NULL,(yyvsp[(1) - (1)].func));}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 128 "comp.y"
    { (yyval.func_list) = insert_function_list((yyvsp[(1) - (2)].func_list),(yyvsp[(2) - (2)].func));}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 132 "comp.y"
    { (yyval.func) = insert_function((yyvsp[(1) - (8)].st), (yyvsp[(3) - (8)].uvt), (yyvsp[(4) - (8)].string), (yyvsp[(6) - (8)].arg_list), (yyvsp[(8) - (8)].cod));}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 135 "comp.y"
    {(yyval.st) = is_private;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 136 "comp.y"
    {(yyval.st) = is_protected;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 137 "comp.y"
    {(yyval.st) = is_public;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 140 "comp.y"
    { (yyval.cod) = insert_code(NULL);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 141 "comp.y"
    { (yyval.cod) = insert_code((yyvsp[(2) - (3)].oper_list));}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 145 "comp.y"
    {(yyval.oper_list) = insert_operation_list(NULL,(yyvsp[(1) - (1)].oper));}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 146 "comp.y"
    {(yyval.oper_list) = insert_operation_list((yyvsp[(1) - (2)].oper_list),(yyvsp[(2) - (2)].oper));}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 150 "comp.y"
    { (yyval.oper) = insert_operation_dec((yyvsp[(1) - (2)].declar));}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 151 "comp.y"
    { (yyval.oper) = insert_operation_assign((yyvsp[(1) - (2)].assign));}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 152 "comp.y"
    { (yyval.oper) = insert_operation_unary((yyvsp[(1) - (2)].un)); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 153 "comp.y"
    { (yyval.oper) = insert_operation_if((yyvsp[(1) - (1)].cond));}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 154 "comp.y"
    { (yyval.oper) = insert_operation_cycle((yyvsp[(1) - (1)].cycle));}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 155 "comp.y"
    { (yyval.oper) = insert_operation_control((yyvsp[(1) - (2)].cont));}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 156 "comp.y"
    { (yyval.oper) = insert_operation_function((yyvsp[(1) - (2)].call));}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 160 "comp.y"
    { (yyval.declar) = insert_declaration((yyvsp[(1) - (2)].uvt),(yyvsp[(2) - (2)].var_l));}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 163 "comp.y"
    { (yyval.assign) = insert_assignment((yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].at),(yyvsp[(3) - (3)].exp));}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 167 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(1) - (2)].string), is_after_plus);}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 168 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(2) - (2)].string), is_before_plus);}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 169 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(1) - (2)].string), is_after_minus);}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 170 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(2) - (2)].string), is_before_minus);}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 174 "comp.y"
    { (yyval.cont) = insert_control(is_break,NULL);}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 175 "comp.y"
    { (yyval.cont) = insert_control(is_continue,NULL);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 176 "comp.y"
    { (yyval.cont) = insert_control(is_return,NULL);}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 177 "comp.y"
    { (yyval.cont) = insert_control(is_return_exp,(yyvsp[(2) - (2)].exp));}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 182 "comp.y"
    { (yyval.exp) = insert_expression((yyvsp[(2) - (3)].exp));}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 183 "comp.y"
    { (yyval.exp) = insert_expression_value((yyvsp[(1) - (1)].val));}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 184 "comp.y"
    { (yyval.exp) = insert_expression_func((yyvsp[(1) - (1)].call));}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 185 "comp.y"
    { (yyval.exp) = insert_expression_infix((yyvsp[(1) - (1)].infix));}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 186 "comp.y"
    { (yyval.exp) = insert_expression_if((yyvsp[(1) - (1)].is_if));}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 190 "comp.y"
    { (yyval.call) = insert_function_call((yyvsp[(1) - (3)].string),NULL);}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 191 "comp.y"
    { (yyval.call) = insert_function_call((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].param));}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 195 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_plus, (yyvsp[(3) - (3)].exp));}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 196 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_minus, (yyvsp[(3) - (3)].exp));}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 197 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_mult, (yyvsp[(3) - (3)].exp));}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 198 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_div, (yyvsp[(3) - (3)].exp));}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 199 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_percent, (yyvsp[(3) - (3)].exp));}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 200 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_and, (yyvsp[(3) - (3)].exp));}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 201 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_lshift, (yyvsp[(3) - (3)].exp));}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 202 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_rshift, (yyvsp[(3) - (3)].exp));}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 206 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_BIGGER, (yyvsp[(3) - (3)].exp));}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 207 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LOWER, (yyvsp[(3) - (3)].exp));}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 208 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_EQ, (yyvsp[(3) - (3)].exp));}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 209 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LE, (yyvsp[(3) - (3)].exp));}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 210 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_GE, (yyvsp[(3) - (3)].exp));}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 211 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_NE, (yyvsp[(3) - (3)].exp));}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 212 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LOR, (yyvsp[(3) - (3)].exp));}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 213 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LAND, (yyvsp[(3) - (3)].exp));}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 217 "comp.y"
    { (yyval.param) = insert_parameter_list(NULL, (yyvsp[(1) - (1)].exp));}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 218 "comp.y"
    { (yyval.param) = insert_parameter_list((yyvsp[(1) - (3)].param), (yyvsp[(3) - (3)].exp));}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 222 "comp.y"
    { (yyval.var_l) = insert_variable_list(NULL, (yyvsp[(1) - (1)].var));}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 223 "comp.y"
    { (yyval.var_l) = insert_variable_list((yyvsp[(1) - (3)].var_l), (yyvsp[(3) - (3)].var));}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 227 "comp.y"
    { (yyval.var) = insert_variable(is_id, (yyvsp[(1) - (1)].string), NULL);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 228 "comp.y"
    { (yyval.var) = insert_variable(is_id, (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].exp));}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 233 "comp.y"
    { (yyval.arg_list) = insert_argument_list(NULL, (yyvsp[(1) - (1)].arg));}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 234 "comp.y"
    { (yyval.arg_list) = insert_argument_list((yyvsp[(1) - (3)].arg_list),(yyvsp[(3) - (3)].arg));}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 238 "comp.y"
    { (yyval.arg) = insert_argument((yyvsp[(1) - (2)].uvt), (yyvsp[(2) - (2)].string));}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 242 "comp.y"
    { (yyval.cycle) = insert_for((yyvsp[(3) - (9)].assign),(yyvsp[(5) - (9)].is_if),(yyvsp[(7) - (9)].inc_list),(yyvsp[(9) - (9)].cond_code));}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 243 "comp.y"
    { (yyval.cycle) = insert_while((yyvsp[(3) - (5)].is_if),(yyvsp[(5) - (5)].cond_code));}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 244 "comp.y"
    { (yyval.cycle) = insert_do_while((yyvsp[(2) - (7)].cond_code),(yyvsp[(5) - (7)].is_if));}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 247 "comp.y"
    { (yyval.cond) = insert_if_statement((yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].cond_code)); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 248 "comp.y"
    { (yyval.cond) = insert_if_else_statement((yyvsp[(3) - (7)].exp),(yyvsp[(5) - (7)].cond_code),(yyvsp[(7) - (7)].cond_code));}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 249 "comp.y"
    { (yyval.cond) = insert_switch_statement((yyvsp[(3) - (7)].exp),(yyvsp[(6) - (7)].sw));}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 253 "comp.y"
    { (yyval.inc_list) = insert_increase_list(NULL,(yyvsp[(1) - (1)].inc));}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 254 "comp.y"
    { (yyval.inc_list) = insert_increase_list((yyvsp[(1) - (3)].inc_list),(yyvsp[(3) - (3)].inc));}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 258 "comp.y"
    { (yyval.inc) = insert_assign_inc((yyvsp[(1) - (1)].assign));}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 259 "comp.y"
    { (yyval.inc) = insert_unary_inc((yyvsp[(1) - (1)].un));}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 264 "comp.y"
    { (yyval.cond_code) = insert_condition_code((yyvsp[(2) - (3)].oper_list), NULL);}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 265 "comp.y"
    { (yyval.cond_code) = insert_condition_code(NULL,(yyvsp[(1) - (1)].oper));}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 266 "comp.y"
    { (yyval.cond_code) = insert_condition_code(NULL,NULL);}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 267 "comp.y"
    { (yyval.cond_code) = insert_condition_code(NULL, NULL);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 272 "comp.y"
    { (yyval.sw) = insert_switch_case(is_NORMAL,(yyvsp[(2) - (5)].val),(yyvsp[(4) - (5)].oper_list),(yyvsp[(5) - (5)].sw));}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 273 "comp.y"
    { (yyval.sw) = insert_switch_case(is_DEFAULT,NULL,(yyvsp[(3) - (4)].oper_list),(yyvsp[(4) - (4)].sw));}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 274 "comp.y"
    { (yyval.sw) = insert_switch_case(is_NORMAL,(yyvsp[(2) - (4)].val),(yyvsp[(4) - (4)].oper_list),NULL);}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 275 "comp.y"
    { (yyval.sw) = insert_switch_case(is_DEFAULT,NULL,(yyvsp[(3) - (3)].oper_list),NULL);}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 279 "comp.y"
    { (yyval.at) = is_ASS_EQ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 280 "comp.y"
    { (yyval.at) = is_ASS_ADD;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 281 "comp.y"
    { (yyval.at) = is_ASS_SUB;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 282 "comp.y"
    { (yyval.at) = is_ASS_MUL;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 283 "comp.y"
    { (yyval.at) = is_ASS_DIV;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 284 "comp.y"
    { (yyval.at) = is_ASS_PERC;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 285 "comp.y"
    { (yyval.at) = is_ASS_AND;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 289 "comp.y"
    { (yyval.val) = insert_string(is_string, (yyvsp[(1) - (1)].string));}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 290 "comp.y"
    { (yyval.val) = insert_string(is_string, (yyvsp[(1) - (1)].string));}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 291 "comp.y"
    { (yyval.val) = insert_int(is_int, (yyvsp[(1) - (1)].val_i));}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 292 "comp.y"
    { (yyval.val) = insert_int(is_int, (yyvsp[(2) - (2)].val_i));}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 293 "comp.y"
    { (yyval.val) = insert_int(is_int, (yyvsp[(2) - (2)].val_i));}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 294 "comp.y"
    { (yyval.val) = insert_double(is_double, (yyvsp[(1) - (1)].doubleval));}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 295 "comp.y"
    { (yyval.val) = insert_char(is_char, (yyvsp[(1) - (1)].chr));}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 296 "comp.y"
    { (yyval.val) = insert_boolean(is_boolean, 1);}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 297 "comp.y"
    { (yyval.val) = insert_boolean(is_boolean, 0);}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 301 "comp.y"
    {(yyval.uvt) = is_char;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 302 "comp.y"
    {(yyval.uvt) = is_int;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 303 "comp.y"
    {(yyval.uvt) = is_string;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 304 "comp.y"
    {(yyval.uvt) = is_boolean;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 305 "comp.y"
    {(yyval.uvt) = is_double;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 306 "comp.y"
    {(yyval.uvt) = is_void;}
    break;



/* Line 1455 of yacc.c  */
#line 2486 "y.tab.c"
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
#line 310 "comp.y"


int yyerror (char *s)
{
	printf ("%s\n", s);
}

int main(){
	yyparse();
	show_program(myprogram);
	return 0;
}

