
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
#include "semantics.h"

prog_env *ambient = NULL;
is_program *myprogram;
extern int line;



/* Line 189 of yacc.c  */
#line 88 "y.tab.c"

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
#line 38 "comp.y"


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
#line 302 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 314 "y.tab.c"

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
#define YYLAST   557

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNRULES -- Number of states.  */
#define YYNSTATES  218

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
       0,     0,     3,    10,    16,    23,    31,    43,    45,    48,
      53,    56,    58,    61,    70,    72,    74,    76,    79,    83,
      85,    88,    91,    94,    97,    99,   101,   104,   107,   110,
     114,   117,   120,   123,   126,   128,   130,   132,   135,   139,
     141,   143,   145,   147,   151,   156,   160,   164,   168,   172,
     176,   180,   184,   188,   192,   196,   200,   204,   208,   212,
     216,   220,   222,   226,   228,   232,   234,   238,   240,   244,
     247,   257,   263,   271,   277,   285,   293,   295,   299,   301,
     303,   307,   309,   311,   314,   320,   325,   330,   334,   336,
     338,   340,   342,   344,   346,   348,   350,   352,   354,   357,
     360,   362,   364,   366,   368,   370,   372,   374,   376,   378
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      86,     0,    -1,    17,    63,    78,    87,    90,    79,    -1,
      17,    63,    78,    87,    79,    -1,    17,    63,    78,    88,
      87,    79,    -1,    17,    63,    78,    88,    87,    90,    79,
      -1,    92,    50,    57,    31,    71,    51,    80,    81,     3,
      72,    93,    -1,    89,    -1,    88,    89,    -1,    92,    50,
      96,    82,    -1,    96,    82,    -1,    91,    -1,    90,    91,
      -1,    92,    50,   117,    63,    71,   107,    72,    93,    -1,
      46,    -1,    47,    -1,    48,    -1,    78,    79,    -1,    78,
      94,    79,    -1,    95,    -1,    94,    95,    -1,    96,    82,
      -1,    97,    82,    -1,    98,    82,    -1,   110,    -1,   109,
      -1,    99,    82,    -1,   101,    82,    -1,   117,   105,    -1,
      63,   115,   100,    -1,    63,    34,    -1,    34,    63,    -1,
      63,    35,    -1,    35,    63,    -1,    13,    -1,    18,    -1,
      53,    -1,    53,   100,    -1,    71,   100,    72,    -1,   116,
      -1,   101,    -1,   102,    -1,   103,    -1,    63,    71,    72,
      -1,    63,    71,   104,    72,    -1,   100,    65,   100,    -1,
     100,    66,   100,    -1,   100,    67,   100,    -1,   100,    68,
     100,    -1,   100,    69,   100,    -1,   100,    70,   100,    -1,
     100,    30,   100,    -1,   100,    54,   100,    -1,   100,    74,
     100,    -1,   100,    73,   100,    -1,   100,    41,   100,    -1,
     100,    40,   100,    -1,   100,    39,   100,    -1,   100,    42,
     100,    -1,   100,    44,   100,    -1,   100,    43,   100,    -1,
     100,    -1,   104,    83,   100,    -1,   106,    -1,   105,    83,
     106,    -1,    63,    -1,    63,    75,   100,    -1,   108,    -1,
     107,    83,   108,    -1,   117,    63,    -1,    25,    71,    97,
      82,   103,    82,   111,    72,   113,    -1,    58,    71,   103,
      72,   113,    -1,    20,   113,    58,    71,   103,    72,    82,
      -1,    26,    71,   100,    72,   113,    -1,    26,    71,   100,
      72,   113,    22,   113,    -1,    52,    71,   100,    72,    78,
     114,    79,    -1,   112,    -1,   111,    83,   112,    -1,    97,
      -1,    98,    -1,    78,    94,    79,    -1,    95,    -1,    82,
      -1,    78,    79,    -1,    15,   116,    84,    94,   114,    -1,
      19,    84,    94,   114,    -1,    15,   116,    84,    94,    -1,
      19,    84,    94,    -1,    75,    -1,     6,    -1,     7,    -1,
       4,    -1,     5,    -1,    76,    -1,     9,    -1,    63,    -1,
      61,    -1,    59,    -1,    65,    59,    -1,    66,    59,    -1,
      60,    -1,    62,    -1,    55,    -1,    23,    -1,    16,    -1,
      28,    -1,    51,    -1,    12,    -1,    24,    -1,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   125,   125,   126,   127,   128,   131,   135,   136,   140,
     141,   145,   146,   150,   154,   155,   156,   159,   160,   164,
     165,   169,   170,   171,   172,   173,   174,   175,   179,   182,
     186,   187,   188,   189,   193,   194,   195,   196,   201,   202,
     203,   204,   205,   209,   210,   214,   215,   216,   217,   218,
     219,   220,   221,   225,   226,   227,   228,   229,   230,   231,
     232,   236,   237,   241,   242,   246,   247,   252,   253,   257,
     261,   262,   263,   266,   267,   268,   272,   273,   277,   278,
     283,   284,   285,   286,   291,   292,   293,   294,   298,   299,
     300,   301,   302,   303,   304,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   320,   321,   322,   323,   324,   325
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
  "$accept", "init", "main", "global_list", "global_variable",
  "function_list", "function", "scope", "code", "operation_list",
  "operation", "declaration", "assignment", "unary", "control",
  "expression", "function_call", "infix_expression", "if_expression",
  "parameter_list", "var_list", "var", "argument_list", "argument",
  "cycle", "if", "increase_list", "increase", "condition_code", "switch",
  "assign_operator", "value", "type", 0
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
       0,    85,    86,    86,    86,    86,    87,    88,    88,    89,
      89,    90,    90,    91,    92,    92,    92,    93,    93,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    96,    97,
      98,    98,    98,    98,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     109,   109,   109,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   114,   114,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   117,   117,   117,   117,   117,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     5,     6,     7,    11,     1,     2,     4,
       2,     1,     2,     8,     1,     1,     1,     2,     3,     1,
       2,     2,     2,     2,     1,     1,     2,     2,     2,     3,
       2,     2,     2,     2,     1,     1,     1,     2,     3,     1,
       1,     1,     1,     3,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     2,
       9,     5,     7,     5,     7,     7,     1,     3,     1,     1,
       3,     1,     1,     2,     5,     4,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,   107,   104,   108,   105,
      14,    15,    16,   106,   109,     0,     0,     7,     0,     0,
       0,     3,     0,    11,     0,     0,     8,     0,    10,    65,
      28,    63,     2,    12,     0,     4,     0,   109,     0,     0,
       0,     0,     5,     0,     9,   103,   102,    97,   100,    96,
     101,    95,     0,     0,     0,    66,    40,    41,    42,    39,
      64,     0,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    61,     0,    38,    51,
      57,    56,    55,    58,    60,    59,    52,    45,    46,    47,
      48,    49,    50,    54,    53,     0,    67,     0,     0,    44,
       0,     0,     0,    69,     0,    62,     0,    13,    68,     0,
      34,    35,     0,     0,     0,     0,     0,     0,    36,     0,
       0,    17,     0,    19,     0,     0,     0,     0,     0,    25,
      24,     0,     0,    82,    81,     0,     0,     0,    31,    33,
       0,    37,     0,    91,    92,    89,    90,    94,    30,    32,
      88,    93,     0,    18,    20,    21,    22,    23,    26,    27,
       6,    83,     0,     0,     0,     0,     0,     0,     0,    42,
      29,    80,     0,     0,     0,     0,     0,    42,    42,    73,
       0,    71,     0,     0,     0,     0,     0,     0,    72,     0,
      78,    79,     0,    76,    74,    95,     0,     0,    75,     0,
       0,     0,    87,    70,    77,    86,    85,    84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    15,    16,    17,    22,    23,    24,   117,   132,
     144,   134,   135,   136,   137,   178,    56,    57,    58,    87,
      30,    31,   105,   106,   139,   140,   202,   203,   145,   197,
     162,    59,    20
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -146
static const yytype_int16 yypact[] =
{
     -15,   -52,    20,   -33,  -146,    81,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,   -21,    81,  -146,    16,   -10,
       5,  -146,    15,  -146,    23,    55,  -146,   129,  -146,    -1,
      30,  -146,  -146,  -146,   139,  -146,   228,    85,    35,   168,
       5,    57,  -146,    47,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,    53,    71,    72,   168,   475,  -146,  -146,  -146,  -146,
    -146,    62,    93,   113,  -146,  -146,   376,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   139,    78,  -146,   475,   -60,  -146,   395,
    -146,  -146,  -146,  -146,  -146,  -146,   395,   483,   483,   395,
     395,   395,   395,  -146,  -146,   -19,  -146,    96,    84,  -146,
     168,    88,   139,  -146,   166,   475,   185,  -146,  -146,   105,
    -146,  -146,   136,   110,   111,   120,   137,   121,   168,   131,
      12,  -146,   233,  -146,   122,   125,   126,   130,   133,  -146,
    -146,    88,   253,  -146,  -146,   158,   159,   168,  -146,  -146,
     168,   475,   168,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,   168,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,   301,   150,     0,   142,   417,   434,   475,   153,
     475,  -146,   168,   168,   136,   148,   136,   160,   162,   213,
      -5,  -146,   165,    56,   136,   278,   156,   171,  -146,    50,
    -146,  -146,    27,  -146,  -146,  -146,   157,   370,  -146,   136,
      56,   370,   350,  -146,  -146,   350,  -146,  -146
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,   236,  -146,   238,   230,   -14,    99,   115,  -129,
     -65,   190,  -145,  -124,  -146,   -39,   -72,  -146,  -103,  -146,
    -146,   220,  -146,   151,  -146,  -146,  -146,    52,   -88,  -120,
    -146,    75,   -31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      55,   175,     1,    41,   153,   154,   155,   156,    33,   157,
     195,     3,   109,   172,   196,    66,   153,   154,   155,   156,
       4,   157,    33,   110,    86,    10,    11,    12,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   138,     5,   158,   159,   200,   179,
     138,   133,   107,   111,   153,   154,   155,   156,    21,   157,
     138,    10,    11,    12,   112,   200,    27,   164,    29,   201,
     138,   115,    28,    34,    39,   160,   161,   133,   212,   187,
     188,   107,   215,    63,   158,   159,   201,   160,   161,   151,
     125,   126,   216,     6,    32,   217,   189,     7,   191,   209,
     138,    10,    11,    12,    18,     8,   204,   164,   176,     9,
     210,   177,   138,    40,   138,    18,    43,    44,    62,   199,
      61,   213,   138,   180,    63,   160,   161,    10,    11,    12,
      64,    65,    13,    83,    35,   138,    45,   138,    14,   138,
     138,     6,   133,   138,    84,     7,   133,   164,     6,   120,
     164,     6,     7,     8,   121,     7,   122,     9,   108,   113,
       8,   123,   124,     8,     9,   114,   116,     9,    46,   119,
     125,   126,    47,    48,    49,    50,    51,   141,    52,    53,
      13,   146,   147,   148,    54,    85,    37,    13,   127,   128,
      13,    45,   150,    14,   129,    19,    14,     6,   120,   130,
     149,     7,   152,   121,   165,   122,    19,   166,   167,     8,
     123,   124,   168,     9,   142,   169,   173,    38,   143,   125,
     126,   182,   174,    46,   183,   186,   190,    47,    48,    49,
      50,    51,   192,    52,    53,   194,    13,   127,   128,    54,
     207,   211,    14,   129,   193,     6,   120,   198,   130,     7,
     208,   121,    25,   122,    26,    36,   170,     8,   123,   124,
      60,     9,   214,   118,   131,     6,   120,   125,   126,     7,
     206,   121,     0,   122,    10,    11,    12,     8,   123,   124,
       0,     9,     0,     0,    13,   127,   128,   125,   126,     0,
      14,   129,     0,     0,     0,     0,   130,     0,     0,     0,
       0,    45,     0,     0,    13,   127,   128,    42,     0,     0,
      14,   129,   163,     6,   120,     0,   130,     7,     0,   121,
       0,   122,     0,     0,     0,     8,   123,   124,     0,     9,
       0,     0,   171,    46,     0,   125,   126,    47,    48,    49,
      50,   205,     0,    52,    53,     0,     0,     0,     0,     0,
       0,     0,    13,   127,   128,     0,     0,     0,    14,   129,
       0,     0,     6,   120,   130,   195,     7,     0,   121,   196,
     122,     0,     0,     0,     8,   123,   124,     0,     9,     0,
     181,     0,     6,   120,   125,   126,     7,     0,   121,     0,
     122,     0,     0,     0,     8,   123,   124,     0,     9,     0,
       0,    13,   127,   128,   125,   126,    67,    14,   129,     0,
       0,     0,     0,   130,     0,    68,    69,    70,    71,    72,
      73,    13,   127,   128,     0,     0,     0,    14,   129,     0,
      74,     0,     0,   130,    68,    69,    70,    71,    72,    73,
       0,    75,    76,    77,    78,    79,    80,    67,    88,    81,
      82,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,     0,     0,    67,     0,     0,     0,    81,    82,
       0,    74,     0,    68,    69,    70,    71,    72,    73,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    74,   184,
      81,    82,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    67,   185,    81,    82,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
       0,     0,    68,    69,    70,    71,    72,    73,     0,    74,
       0,     0,     0,     0,     0,     0,     0,    74,     0,     0,
      75,    76,    77,    78,    79,    80,     0,     0,    81,    82,
      77,    78,    79,    80,     0,     0,    81,    82
};

static const yytype_int16 yycheck[] =
{
      39,   146,    17,    34,     4,     5,     6,     7,    22,     9,
      15,    63,    72,   142,    19,    54,     4,     5,     6,     7,
       0,     9,    36,    83,    63,    46,    47,    48,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,   116,    78,    34,    35,   193,   152,
     122,   116,    83,    72,     4,     5,     6,     7,    79,     9,
     132,    46,    47,    48,    83,   210,    50,   132,    63,   193,
     142,   110,    82,    50,    75,    75,    76,   142,   207,   182,
     183,   112,   211,    71,    34,    35,   210,    75,    76,   128,
      34,    35,   212,    12,    79,   215,   184,    16,   186,    72,
     172,    46,    47,    48,     5,    24,   194,   172,   147,    28,
      83,   150,   184,    83,   186,    16,    31,    82,    71,    63,
      63,   209,   194,   162,    71,    75,    76,    46,    47,    48,
      59,    59,    51,    71,    79,   207,    23,   209,    57,   211,
     212,    12,   207,   215,    51,    16,   211,   212,    12,    13,
     215,    12,    16,    24,    18,    16,    20,    28,    80,    63,
      24,    25,    26,    24,    28,    81,    78,    28,    55,     3,
      34,    35,    59,    60,    61,    62,    63,    72,    65,    66,
      51,    71,    71,    63,    71,    72,    57,    51,    52,    53,
      51,    23,    71,    57,    58,     5,    57,    12,    13,    63,
      63,    16,    71,    18,    82,    20,    16,    82,    82,    24,
      25,    26,    82,    28,    78,    82,    58,    27,    82,    34,
      35,    71,    63,    55,    82,    72,    78,    59,    60,    61,
      62,    63,    72,    65,    66,    22,    51,    52,    53,    71,
      84,    84,    57,    58,    82,    12,    13,    82,    63,    16,
      79,    18,    16,    20,    16,    25,   141,    24,    25,    26,
      40,    28,   210,   112,    79,    12,    13,    34,    35,    16,
     195,    18,    -1,    20,    46,    47,    48,    24,    25,    26,
      -1,    28,    -1,    -1,    51,    52,    53,    34,    35,    -1,
      57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    51,    52,    53,    79,    -1,    -1,
      57,    58,    79,    12,    13,    -1,    63,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,
      -1,    -1,    79,    55,    -1,    34,    35,    59,    60,    61,
      62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    12,    13,    63,    15,    16,    -1,    18,    19,
      20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,    -1,
      79,    -1,    12,    13,    34,    35,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,    -1,
      -1,    51,    52,    53,    34,    35,    30,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    39,    40,    41,    42,    43,
      44,    51,    52,    53,    -1,    -1,    -1,    57,    58,    -1,
      54,    -1,    -1,    63,    39,    40,    41,    42,    43,    44,
      -1,    65,    66,    67,    68,    69,    70,    30,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    -1,    -1,    30,    -1,    -1,    -1,    73,    74,
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
       0,    17,    86,    63,     0,    78,    12,    16,    24,    28,
      46,    47,    48,    51,    57,    87,    88,    89,    92,    96,
     117,    79,    90,    91,    92,    87,    89,    50,    82,    63,
     105,   106,    79,    91,    50,    79,    90,    57,    96,    75,
      83,   117,    79,    31,    82,    23,    55,    59,    60,    61,
      62,    63,    65,    66,    71,   100,   101,   102,   103,   116,
     106,    63,    71,    71,    59,    59,   100,    30,    39,    40,
      41,    42,    43,    44,    54,    65,    66,    67,    68,    69,
      70,    73,    74,    71,    51,    72,   100,   104,    72,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   107,   108,   117,    80,    72,
      83,    72,    83,    63,    81,   100,    78,    93,   108,     3,
      13,    18,    20,    25,    26,    34,    35,    52,    53,    58,
      63,    79,    94,    95,    96,    97,    98,    99,   101,   109,
     110,    72,    78,    82,    95,   113,    71,    71,    63,    63,
      71,   100,    71,     4,     5,     6,     7,     9,    34,    35,
      75,    76,   115,    79,    95,    82,    82,    82,    82,    82,
      93,    79,    94,    58,    63,    97,   100,   100,   100,   103,
     100,    79,    71,    82,    72,    72,    72,   103,   103,   113,
      78,   113,    72,    82,    22,    15,    19,   114,    82,    63,
      97,    98,   111,   112,   113,    63,   116,    84,    79,    72,
      83,    84,    94,   113,   112,    94,   114,   114
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
#line 125 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (6)].string),(yyvsp[(4) - (6)].m),(yyvsp[(5) - (6)].func_list),NULL); myprogram = (yyval.prog); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 126 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].m),NULL,NULL); myprogram = (yyval.prog); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 127 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (6)].string),(yyvsp[(5) - (6)].m),NULL,(yyvsp[(4) - (6)].glob)); myprogram = (yyval.prog); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 128 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (7)].string),(yyvsp[(5) - (7)].m),(yyvsp[(6) - (7)].func_list),(yyvsp[(4) - (7)].glob)); myprogram = (yyval.prog); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 131 "comp.y"
    { (yyval.m) = insert_main((yyvsp[(11) - (11)].cod));}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 135 "comp.y"
    { (yyval.glob) = insert_global_list(NULL,(yyvsp[(1) - (1)].dec));}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 136 "comp.y"
    { (yyval.glob) = insert_global_list((yyvsp[(1) - (2)].glob),(yyvsp[(2) - (2)].dec));}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 140 "comp.y"
    { (yyval.dec) = insert_global_declaration((yyvsp[(1) - (4)].st),(yyvsp[(3) - (4)].declar),line);}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 141 "comp.y"
    { (yyval.dec) = insert_global_declaration(is_public,(yyvsp[(1) - (2)].declar),line);}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 145 "comp.y"
    { (yyval.func_list) = insert_function_list(NULL,(yyvsp[(1) - (1)].func));}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 146 "comp.y"
    { (yyval.func_list) = insert_function_list((yyvsp[(1) - (2)].func_list),(yyvsp[(2) - (2)].func));}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 150 "comp.y"
    { (yyval.func) = insert_function((yyvsp[(1) - (8)].st), (yyvsp[(3) - (8)].uvt), (yyvsp[(4) - (8)].string), (yyvsp[(6) - (8)].arg_list), (yyvsp[(8) - (8)].cod),line);}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 154 "comp.y"
    {(yyval.st) = is_private;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 155 "comp.y"
    {(yyval.st) = is_protected;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 156 "comp.y"
    {(yyval.st) = is_public;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 159 "comp.y"
    { (yyval.cod) = insert_code(NULL);}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 160 "comp.y"
    { (yyval.cod) = insert_code((yyvsp[(2) - (3)].oper_list));}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 164 "comp.y"
    {(yyval.oper_list) = insert_operation_list(NULL,(yyvsp[(1) - (1)].oper));}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 165 "comp.y"
    {(yyval.oper_list) = insert_operation_list((yyvsp[(1) - (2)].oper_list),(yyvsp[(2) - (2)].oper));}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 169 "comp.y"
    { (yyval.oper) = insert_operation_dec((yyvsp[(1) - (2)].declar));}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 170 "comp.y"
    { (yyval.oper) = insert_operation_assign((yyvsp[(1) - (2)].assign));}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 171 "comp.y"
    { (yyval.oper) = insert_operation_unary((yyvsp[(1) - (2)].un)); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 172 "comp.y"
    { (yyval.oper) = insert_operation_if((yyvsp[(1) - (1)].cond));}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 173 "comp.y"
    { (yyval.oper) = insert_operation_cycle((yyvsp[(1) - (1)].cycle));}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 174 "comp.y"
    { (yyval.oper) = insert_operation_control((yyvsp[(1) - (2)].cont));}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 175 "comp.y"
    { (yyval.oper) = insert_operation_function((yyvsp[(1) - (2)].call));}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 179 "comp.y"
    { (yyval.declar) = insert_declaration((yyvsp[(1) - (2)].uvt),(yyvsp[(2) - (2)].var_l),line); /*insert_element($1,$2);*/}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 182 "comp.y"
    { (yyval.assign) = insert_assignment((yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].at),(yyvsp[(3) - (3)].exp),line);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 186 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(1) - (2)].string), is_after_plus,line);}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 187 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(2) - (2)].string), is_before_plus,line);}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 188 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(1) - (2)].string), is_after_minus,line);}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 189 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(2) - (2)].string), is_before_minus,line);}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 193 "comp.y"
    { (yyval.cont) = insert_control(is_break,NULL,line);}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 194 "comp.y"
    { (yyval.cont) = insert_control(is_continue,NULL,line);}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 195 "comp.y"
    { (yyval.cont) = insert_control(is_return,NULL,line);}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 196 "comp.y"
    { (yyval.cont) = insert_control(is_return_exp,(yyvsp[(2) - (2)].exp),line);}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 201 "comp.y"
    { (yyval.exp) = insert_expression((yyvsp[(2) - (3)].exp));}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 202 "comp.y"
    { (yyval.exp) = insert_expression_value((yyvsp[(1) - (1)].val));}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 203 "comp.y"
    { (yyval.exp) = insert_expression_func((yyvsp[(1) - (1)].call));}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 204 "comp.y"
    { (yyval.exp) = insert_expression_infix((yyvsp[(1) - (1)].infix));}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 205 "comp.y"
    { (yyval.exp) = insert_expression_if((yyvsp[(1) - (1)].is_if));}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 209 "comp.y"
    { (yyval.call) = insert_function_call((yyvsp[(1) - (3)].string),NULL,line);}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 210 "comp.y"
    { (yyval.call) = insert_function_call((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].param),line);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 214 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_plus, (yyvsp[(3) - (3)].exp));}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 215 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_minus, (yyvsp[(3) - (3)].exp));}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 216 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_mult, (yyvsp[(3) - (3)].exp));}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 217 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_div, (yyvsp[(3) - (3)].exp));}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 218 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_percent, (yyvsp[(3) - (3)].exp));}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 219 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_and, (yyvsp[(3) - (3)].exp));}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 220 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_lshift, (yyvsp[(3) - (3)].exp));}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 221 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_rshift, (yyvsp[(3) - (3)].exp));}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 225 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_BIGGER, (yyvsp[(3) - (3)].exp));}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 226 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LOWER, (yyvsp[(3) - (3)].exp));}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 227 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_EQ, (yyvsp[(3) - (3)].exp));}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 228 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LE, (yyvsp[(3) - (3)].exp));}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 229 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_GE, (yyvsp[(3) - (3)].exp));}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 230 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_NE, (yyvsp[(3) - (3)].exp));}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 231 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LOR, (yyvsp[(3) - (3)].exp));}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 232 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LAND, (yyvsp[(3) - (3)].exp));}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 236 "comp.y"
    { (yyval.param) = insert_parameter_list(NULL, (yyvsp[(1) - (1)].exp));}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 237 "comp.y"
    { (yyval.param) = insert_parameter_list((yyvsp[(1) - (3)].param), (yyvsp[(3) - (3)].exp));}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 241 "comp.y"
    { (yyval.var_l) = insert_variable_list(NULL, (yyvsp[(1) - (1)].var));}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 242 "comp.y"
    { (yyval.var_l) = insert_variable_list((yyvsp[(1) - (3)].var_l), (yyvsp[(3) - (3)].var));}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 246 "comp.y"
    { (yyval.var) = insert_variable(is_id, (yyvsp[(1) - (1)].string), NULL,line);}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 247 "comp.y"
    { (yyval.var) = insert_variable(is_id, (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].exp),line);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 252 "comp.y"
    { (yyval.arg_list) = insert_argument_list(NULL, (yyvsp[(1) - (1)].arg));}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 253 "comp.y"
    { (yyval.arg_list) = insert_argument_list((yyvsp[(1) - (3)].arg_list),(yyvsp[(3) - (3)].arg));}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 257 "comp.y"
    { (yyval.arg) = insert_argument((yyvsp[(1) - (2)].uvt), (yyvsp[(2) - (2)].string));}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 261 "comp.y"
    { (yyval.cycle) = insert_for((yyvsp[(3) - (9)].assign),(yyvsp[(5) - (9)].is_if),(yyvsp[(7) - (9)].inc_list),(yyvsp[(9) - (9)].cond_code),line);}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 262 "comp.y"
    { (yyval.cycle) = insert_while((yyvsp[(3) - (5)].is_if),(yyvsp[(5) - (5)].cond_code),line);}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 263 "comp.y"
    { (yyval.cycle) = insert_do_while((yyvsp[(2) - (7)].cond_code),(yyvsp[(5) - (7)].is_if),line);}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 266 "comp.y"
    { (yyval.cond) = insert_if_statement((yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].cond_code),line); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 267 "comp.y"
    { (yyval.cond) = insert_if_else_statement((yyvsp[(3) - (7)].exp),(yyvsp[(5) - (7)].cond_code),(yyvsp[(7) - (7)].cond_code),line);}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 268 "comp.y"
    { (yyval.cond) = insert_switch_statement((yyvsp[(3) - (7)].exp),(yyvsp[(6) - (7)].sw),line);}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 272 "comp.y"
    { (yyval.inc_list) = insert_increase_list(NULL,(yyvsp[(1) - (1)].inc));}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 273 "comp.y"
    { (yyval.inc_list) = insert_increase_list((yyvsp[(1) - (3)].inc_list),(yyvsp[(3) - (3)].inc));}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 277 "comp.y"
    { (yyval.inc) = insert_assign_inc((yyvsp[(1) - (1)].assign));}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 278 "comp.y"
    { (yyval.inc) = insert_unary_inc((yyvsp[(1) - (1)].un));}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 283 "comp.y"
    { (yyval.cond_code) = insert_condition_code((yyvsp[(2) - (3)].oper_list), NULL);}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 284 "comp.y"
    { (yyval.cond_code) = insert_condition_code(NULL,(yyvsp[(1) - (1)].oper));}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 285 "comp.y"
    { (yyval.cond_code) = insert_condition_code(NULL,NULL);}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 286 "comp.y"
    { (yyval.cond_code) = insert_condition_code(NULL, NULL);}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 291 "comp.y"
    { (yyval.sw) = insert_switch_case(is_NORMAL,(yyvsp[(2) - (5)].val),(yyvsp[(4) - (5)].oper_list),(yyvsp[(5) - (5)].sw));}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 292 "comp.y"
    { (yyval.sw) = insert_switch_case(is_DEFAULT,NULL,(yyvsp[(3) - (4)].oper_list),(yyvsp[(4) - (4)].sw));}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 293 "comp.y"
    { (yyval.sw) = insert_switch_case(is_NORMAL,(yyvsp[(2) - (4)].val),(yyvsp[(4) - (4)].oper_list),NULL);}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 294 "comp.y"
    { (yyval.sw) = insert_switch_case(is_DEFAULT,NULL,(yyvsp[(3) - (3)].oper_list),NULL);}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 298 "comp.y"
    { (yyval.at) = is_ASS_EQ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 299 "comp.y"
    { (yyval.at) = is_ASS_ADD;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 300 "comp.y"
    { (yyval.at) = is_ASS_SUB;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 301 "comp.y"
    { (yyval.at) = is_ASS_MUL;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 302 "comp.y"
    { (yyval.at) = is_ASS_DIV;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 303 "comp.y"
    { (yyval.at) = is_ASS_PERC;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 304 "comp.y"
    { (yyval.at) = is_ASS_AND;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 308 "comp.y"
    { (yyval.val) = insert_string(is_ident, (yyvsp[(1) - (1)].string));}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 309 "comp.y"
    { (yyval.val) = insert_string(is_string, (yyvsp[(1) - (1)].string));}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 310 "comp.y"
    { (yyval.val) = insert_int(is_int, (yyvsp[(1) - (1)].val_i));}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 311 "comp.y"
    { (yyval.val) = insert_int(is_int, (yyvsp[(2) - (2)].val_i));}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 312 "comp.y"
    { (yyval.val) = insert_int(is_int, (yyvsp[(2) - (2)].val_i));}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 313 "comp.y"
    { (yyval.val) = insert_double(is_double, (yyvsp[(1) - (1)].doubleval));}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 314 "comp.y"
    { (yyval.val) = insert_char(is_char, (yyvsp[(1) - (1)].chr));}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 315 "comp.y"
    { (yyval.val) = insert_boolean(is_boolean, 1);}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 316 "comp.y"
    { (yyval.val) = insert_boolean(is_boolean, 0);}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 320 "comp.y"
    {(yyval.uvt) = is_char;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 321 "comp.y"
    {(yyval.uvt) = is_int;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 322 "comp.y"
    {(yyval.uvt) = is_string;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 323 "comp.y"
    {(yyval.uvt) = is_boolean;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 324 "comp.y"
    {(yyval.uvt) = is_double;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 325 "comp.y"
    {(yyval.uvt) = is_void;}
    break;



/* Line 1455 of yacc.c  */
#line 2534 "y.tab.c"
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
#line 329 "comp.y"


int yyerror (char *s)
{
	printf ("%s\n", s);
}

int main(){
	yyparse();
	ambient = semantic_analysis(myprogram);
	/*show_program(myprogram);*/
	printf("%d\n",line); 
	return 0;
}

