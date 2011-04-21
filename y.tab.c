
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
#include "structures.h"
#include "functions.h"

is_program *myprogram;


/* Line 189 of yacc.c  */
#line 82 "y.tab.c"

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



/* Line 214 of yacc.c  */
#line 291 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 303 "y.tab.c"

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
#define YYLAST   396

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNRULES -- Number of states.  */
#define YYNSTATES  165

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
      76,    79,    67,    65,    81,    66,     2,    68,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    80,
       2,    71,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,    75,     2,     2,     2,     2,
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
      72,    73
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    16,    28,    30,    33,    42,    44,
      46,    48,    51,    55,    57,    60,    62,    64,    67,    69,
      73,    78,    81,    84,    87,    90,    94,    96,    98,   100,
     102,   105,   109,   114,   118,   122,   126,   130,   134,   138,
     142,   146,   150,   154,   158,   162,   166,   170,   172,   176,
     178,   182,   184,   188,   190,   194,   197,   203,   211,   219,
     223,   225,   231,   236,   241,   245,   247,   249,   251,   254,
     256,   258,   260,   262,   264,   266,   268,   270,   272,   274,
     276,   278,   280,   282,   284,   286,   288,   290,   292
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      84,     0,    -1,    17,    63,    74,    85,    75,    -1,    17,
      63,    74,    85,    86,    75,    -1,    48,    50,    57,    31,
      76,    51,    77,    78,     3,    79,    89,    -1,    87,    -1,
      86,    87,    -1,    88,    50,   110,    63,    76,   102,    79,
      89,    -1,    46,    -1,    47,    -1,    48,    -1,    74,    75,
      -1,    74,    90,    75,    -1,    91,    -1,    90,    91,    -1,
      92,    -1,    93,    -1,    94,    80,    -1,   104,    -1,   110,
     100,    80,    -1,    63,   108,    95,    80,    -1,    63,    34,
      -1,    34,    63,    -1,    63,    35,    -1,    35,    63,    -1,
      76,    95,    79,    -1,   109,    -1,    96,    -1,    97,    -1,
      98,    -1,   107,    80,    -1,    63,    76,    79,    -1,    63,
      76,    99,    79,    -1,    95,    65,    95,    -1,    95,    66,
      95,    -1,    95,    67,    95,    -1,    95,    68,    95,    -1,
      95,    69,    95,    -1,    95,    70,    95,    -1,    95,    30,
      95,    -1,    95,    54,    95,    -1,    95,    41,    95,    -1,
      95,    40,    95,    -1,    95,    39,    95,    -1,    95,    42,
      95,    -1,    95,    44,    95,    -1,    95,    43,    95,    -1,
      95,    -1,    99,    81,    95,    -1,   101,    -1,   100,    81,
     101,    -1,    63,    -1,    63,    71,   109,    -1,   103,    -1,
     102,    81,   103,    -1,   110,    63,    -1,    26,    76,    95,
      79,   105,    -1,    26,    76,    95,    79,   105,    22,   105,
      -1,    52,    76,    95,    79,    74,   106,    75,    -1,    74,
      90,    75,    -1,    91,    -1,    15,   109,    82,    90,   106,
      -1,    19,    82,    90,   106,    -1,    15,   109,    82,    90,
      -1,    19,    82,    90,    -1,    13,    -1,    18,    -1,    53,
      -1,    53,    95,    -1,    71,    -1,     6,    -1,     7,    -1,
       4,    -1,     5,    -1,    72,    -1,     9,    -1,    61,    -1,
      59,    -1,    60,    -1,    62,    -1,    55,    -1,    23,    -1,
      63,    -1,    16,    -1,    28,    -1,    51,    -1,    12,    -1,
      24,    -1,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   111,   114,   118,   119,   123,   126,   127,
     128,   131,   132,   136,   137,   141,   142,   143,   144,   149,
     152,   156,   157,   158,   159,   163,   164,   165,   166,   167,
     168,   172,   173,   177,   178,   179,   180,   181,   182,   183,
     184,   188,   189,   190,   191,   192,   193,   197,   198,   202,
     203,   207,   208,   213,   214,   218,   224,   225,   226,   230,
     231,   236,   237,   238,   239,   243,   244,   245,   246,   250,
     251,   252,   253,   254,   255,   256,   260,   261,   262,   263,
     264,   265,   266,   270,   271,   272,   273,   274,   275
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
  "'*'", "'/'", "'%'", "'&'", "'='", "ASS_PERC", "ASS_SUM", "'{'", "'}'",
  "'('", "'['", "']'", "')'", "';'", "','", "':'", "$accept", "init",
  "main", "function_list", "function", "scope", "code", "operation_list",
  "operation", "declaration", "assignment", "unary", "expression",
  "function_call", "infix_expression", "if_expression", "parameter_list",
  "var_list", "var", "argument_list", "argument", "if", "condition_code",
  "switch", "control", "assign_operator", "value", "type", 0
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
      38,    61,   320,   321,   123,   125,    40,    91,    93,    41,
      59,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    84,    85,    86,    86,    87,    88,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    92,
      93,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   104,   104,   104,   105,
     105,   106,   106,   106,   106,   107,   107,   107,   107,   108,
     108,   108,   108,   108,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   110,   110,   110,   110,   110,   110
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     6,    11,     1,     2,     8,     1,     1,
       1,     2,     3,     1,     2,     1,     1,     2,     1,     3,
       4,     2,     2,     2,     2,     3,     1,     1,     1,     1,
       2,     3,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     2,     5,     7,     7,     3,
       1,     5,     4,     4,     3,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     8,
       9,    10,     2,     0,     5,     0,     0,     3,     6,     0,
       0,    86,    83,    87,    84,    85,    88,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,    55,
       0,     0,     7,    54,     0,     0,     0,     0,     0,     0,
      11,     0,    13,    15,    16,     0,    18,     0,     4,     0,
      22,    24,     0,    72,    73,    70,    71,    75,    21,    23,
      69,    74,     0,    12,    14,    17,    51,     0,    49,    65,
      66,    81,    67,    80,    77,    78,    76,    79,    82,     0,
       0,    27,    28,    29,     0,    26,     0,     0,     0,    19,
       0,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    20,    82,    52,    50,    31,    47,     0,    25,    39,
      43,    42,    41,    44,    46,    45,    40,    33,    34,    35,
      36,    37,    38,     0,    60,    56,     0,    32,     0,     0,
       0,     0,     0,     0,    48,    59,    57,     0,     0,    58,
       0,    64,    63,    62,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    13,    14,    15,    42,    51,    52,    53,
      54,    55,    90,    91,    92,    93,   127,    77,    78,    33,
      34,    56,   145,   153,    94,    72,    95,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -132
static const yytype_int16 yypact[] =
{
       7,   -28,    40,   -16,  -132,    14,    21,   -38,    23,  -132,
    -132,  -132,  -132,   -33,  -132,    28,    33,  -132,  -132,     6,
       5,  -132,  -132,  -132,  -132,  -132,  -132,    19,    34,    10,
      11,     6,    12,   -62,  -132,    31,    93,    29,     6,  -132,
      18,    67,  -132,  -132,    29,    30,    42,    44,    32,    -2,
    -132,    88,  -132,  -132,  -132,    35,  -132,    57,  -132,   120,
    -132,  -132,   120,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,   120,  -132,  -132,  -132,    38,   -42,  -132,  -132,
    -132,  -132,   120,  -132,  -132,  -132,  -132,  -132,    45,   120,
     217,  -132,  -132,  -132,    48,  -132,   258,   211,   333,  -132,
      57,   305,    13,   264,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   143,  -132,
      52,  -132,  -132,  -132,  -132,  -132,   305,   -56,  -132,   343,
    -132,  -132,  -132,  -132,  -132,  -132,   343,   311,   311,   343,
     343,   343,   343,   186,  -132,   109,     1,  -132,   120,   101,
     143,   333,    50,    59,   305,  -132,  -132,    55,   186,  -132,
     186,   173,   173,  -132,  -132
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,   128,  -132,   100,  -131,   -51,  -132,
    -132,  -132,   -61,  -132,  -132,  -132,  -132,  -132,    47,  -132,
     108,  -132,    -1,  -101,  -132,  -132,   -92,    46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      74,    96,    63,    64,    65,    66,   123,    67,     9,    10,
      11,    97,   149,     9,    10,    11,   151,    37,    21,    38,
     152,   101,    22,   147,     1,   148,    79,   161,   103,   162,
      23,    80,    68,    69,    24,     3,    81,    12,    99,   100,
       4,   126,    17,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,    25,     5,   157,
     163,   164,     6,    26,    20,    27,    82,   144,    83,    70,
      71,     8,    84,    85,    86,    87,    88,    35,    19,    21,
      16,    28,    29,    22,    35,    30,    31,   154,    32,    89,
      36,    23,   125,    45,    39,    24,    40,    44,    74,   144,
      21,    46,    47,    41,    22,    60,    59,    61,    62,    98,
      74,    74,    23,    21,    45,    75,    24,    22,    25,    48,
      76,   102,    46,    47,    26,    23,   146,    45,   119,    24,
      49,   150,   158,    79,   159,    46,    47,   160,    80,    25,
      48,    18,    50,    81,    58,    26,    43,   124,     0,   156,
       0,    49,    25,    48,     0,    21,     0,     0,    26,    22,
       0,     0,     0,    73,    49,     0,     0,    23,     0,    45,
       0,    24,     0,    82,     0,    83,   155,    46,    47,    84,
      85,    86,    87,    88,     0,    21,     0,     0,   151,    22,
       0,     0,   152,     0,    25,    48,    89,    23,    21,    45,
      26,    24,    22,     0,     0,     0,    49,    46,    47,     0,
      23,     0,    45,     0,    24,     0,     0,   143,     0,     0,
      46,    47,     0,     0,    25,    48,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    49,    25,    48,     0,
       0,   104,     0,    26,     0,     0,     0,   104,     0,    49,
     105,   106,   107,   108,   109,   110,   105,   106,   107,   108,
     109,   110,     0,     0,     0,   111,     0,     0,     0,     0,
       0,   111,     0,     0,     0,     0,   112,   113,   114,   115,
     116,   117,   112,   113,   114,   115,   116,   117,   104,     0,
       0,   121,     0,     0,   104,     0,   118,   105,   106,   107,
     108,   109,   110,   105,   106,   107,   108,   109,   110,     0,
       0,     0,   111,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,   112,   113,   114,   115,   116,   117,   112,
     113,   114,   115,   116,   117,   104,     0,   120,     0,     0,
       0,   104,     0,   128,   105,   106,   107,   108,   109,   110,
     105,   106,   107,   108,   109,   110,    81,     0,     0,   111,
       0,     0,     0,     0,     0,   111,     0,     0,     0,     0,
     112,   113,   114,   115,   116,   117,     0,     0,   114,   115,
     116,   117,   105,   106,   107,   108,   109,   110,    83,     0,
       0,     0,    84,    85,    86,    87,   122
};

static const yytype_int16 yycheck[] =
{
      51,    62,     4,     5,     6,     7,    98,     9,    46,    47,
      48,    72,   143,    46,    47,    48,    15,    79,    12,    81,
      19,    82,    16,    79,    17,    81,    13,   158,    89,   160,
      24,    18,    34,    35,    28,    63,    23,    75,    80,    81,
       0,   102,    75,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    51,    74,   151,
     161,   162,    48,    57,    31,    19,    53,   118,    55,    71,
      72,    50,    59,    60,    61,    62,    63,    31,    50,    12,
      57,    76,    63,    16,    38,    51,    76,   148,    77,    76,
      78,    24,    79,    26,    63,    28,     3,    79,   149,   150,
      12,    34,    35,    74,    16,    63,    76,    63,    76,    71,
     161,   162,    24,    12,    26,    80,    28,    16,    51,    52,
      63,    76,    34,    35,    57,    24,    74,    26,    80,    28,
      63,    22,    82,    13,    75,    34,    35,    82,    18,    51,
      52,    13,    75,    23,    44,    57,    38,   100,    -1,   150,
      -1,    63,    51,    52,    -1,    12,    -1,    -1,    57,    16,
      -1,    -1,    -1,    75,    63,    -1,    -1,    24,    -1,    26,
      -1,    28,    -1,    53,    -1,    55,    75,    34,    35,    59,
      60,    61,    62,    63,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,    19,    -1,    51,    52,    76,    24,    12,    26,
      57,    28,    16,    -1,    -1,    -1,    63,    34,    35,    -1,
      24,    -1,    26,    -1,    28,    -1,    -1,    74,    -1,    -1,
      34,    35,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    63,    51,    52,    -1,
      -1,    30,    -1,    57,    -1,    -1,    -1,    30,    -1,    63,
      39,    40,    41,    42,    43,    44,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    65,    66,    67,    68,    69,    70,    30,    -1,
      -1,    80,    -1,    -1,    30,    -1,    79,    39,    40,    41,
      42,    43,    44,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    65,
      66,    67,    68,    69,    70,    30,    -1,    79,    -1,    -1,
      -1,    30,    -1,    79,    39,    40,    41,    42,    43,    44,
      39,    40,    41,    42,    43,    44,    23,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    -1,    -1,    67,    68,
      69,    70,    39,    40,    41,    42,    43,    44,    55,    -1,
      -1,    -1,    59,    60,    61,    62,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    84,    63,     0,    74,    48,    85,    50,    46,
      47,    48,    75,    86,    87,    88,    57,    75,    87,    50,
      31,    12,    16,    24,    28,    51,    57,   110,    76,    63,
      51,    76,    77,   102,   103,   110,    78,    79,    81,    63,
       3,    74,    89,   103,    79,    26,    34,    35,    52,    63,
      75,    90,    91,    92,    93,    94,   104,   110,    89,    76,
      63,    63,    76,     4,     5,     6,     7,     9,    34,    35,
      71,    72,   108,    75,    91,    80,    63,   100,   101,    13,
      18,    23,    53,    55,    59,    60,    61,    62,    63,    76,
      95,    96,    97,    98,   107,   109,    95,    95,    71,    80,
      81,    95,    76,    95,    30,    39,    40,    41,    42,    43,
      44,    54,    65,    66,    67,    68,    69,    70,    79,    80,
      79,    80,    63,   109,   101,    79,    95,    99,    79,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    74,    91,   105,    74,    79,    81,    90,
      22,    15,    19,   106,    95,    75,   105,   109,    82,    75,
      82,    90,    90,   106,   106
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
#line 110 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].m),NULL); myprogram = (yyval.prog); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 111 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (6)].string),(yyvsp[(4) - (6)].m),(yyvsp[(5) - (6)].func_list)); myprogram = (yyval.prog); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 114 "comp.y"
    { (yyval.m) = insert_main((yyvsp[(11) - (11)].cod));}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 118 "comp.y"
    { (yyval.func_list) = insert_function_list(NULL,(yyvsp[(1) - (1)].func));}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 119 "comp.y"
    { (yyval.func_list) = insert_function_list((yyvsp[(1) - (2)].func_list),(yyvsp[(2) - (2)].func));}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 123 "comp.y"
    { (yyval.func) = insert_function((yyvsp[(1) - (8)].st), (yyvsp[(3) - (8)].uvt), (yyvsp[(4) - (8)].string), (yyvsp[(6) - (8)].arg_list), (yyvsp[(8) - (8)].cod));}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 126 "comp.y"
    {(yyval.st) = is_private;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 127 "comp.y"
    {(yyval.st) = is_protected;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 128 "comp.y"
    {(yyval.st) = is_public;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 131 "comp.y"
    { (yyval.cod) = insert_code(NULL);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 132 "comp.y"
    { (yyval.cod) = insert_code((yyvsp[(2) - (3)].oper_list));}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 136 "comp.y"
    {(yyval.oper_list) = insert_operation_list(NULL,(yyvsp[(1) - (1)].oper));}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 137 "comp.y"
    {(yyval.oper_list) = insert_operation_list((yyvsp[(1) - (2)].oper_list),(yyvsp[(2) - (2)].oper));}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 141 "comp.y"
    { (yyval.oper) = insert_operation_dec((yyvsp[(1) - (1)].declar));}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 142 "comp.y"
    { (yyval.oper) = insert_operation_assign((yyvsp[(1) - (1)].assign));}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 143 "comp.y"
    { (yyval.oper) = insert_operation_unary((yyvsp[(1) - (2)].un));}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 144 "comp.y"
    { (yyval.oper) = insert_operation_if((yyvsp[(1) - (1)].cond));}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 149 "comp.y"
    { (yyval.declar) = insert_declaration((yyvsp[(1) - (3)].uvt),(yyvsp[(2) - (3)].var_l));}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 152 "comp.y"
    { (yyval.assign) = insert_assignment((yyvsp[(1) - (4)].string),(yyvsp[(2) - (4)].at),(yyvsp[(3) - (4)].exp));}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 156 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(1) - (2)].string), is_after_plus);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 157 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(2) - (2)].string), is_before_plus);}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 158 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(1) - (2)].string), is_after_minus);}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 159 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(2) - (2)].string), is_before_minus);}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 163 "comp.y"
    { (yyval.exp) = insert_expression((yyvsp[(2) - (3)].exp));}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 164 "comp.y"
    { (yyval.exp) = insert_expression_value((yyvsp[(1) - (1)].val));}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 165 "comp.y"
    { (yyval.exp) = insert_expression_func((yyvsp[(1) - (1)].call));}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 166 "comp.y"
    { (yyval.exp) = insert_expression_infix((yyvsp[(1) - (1)].infix));}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 167 "comp.y"
    { (yyval.exp) = insert_expression_if((yyvsp[(1) - (1)].is_if));}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 168 "comp.y"
    { (yyval.exp) = insert_expression_control((yyvsp[(1) - (2)].cont));}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 172 "comp.y"
    { (yyval.call) = insert_function_call((yyvsp[(1) - (3)].string),NULL);}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 173 "comp.y"
    { (yyval.call) = insert_function_call((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].param));}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 177 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_plus, (yyvsp[(3) - (3)].exp));}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 178 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_minus, (yyvsp[(3) - (3)].exp));}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 179 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_mult, (yyvsp[(3) - (3)].exp));}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 180 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_div, (yyvsp[(3) - (3)].exp));}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 181 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_percent, (yyvsp[(3) - (3)].exp));}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 182 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_and, (yyvsp[(3) - (3)].exp));}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 183 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_lshift, (yyvsp[(3) - (3)].exp));}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 184 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_rshift, (yyvsp[(3) - (3)].exp));}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 188 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_EQ, (yyvsp[(3) - (3)].exp));}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 189 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LE, (yyvsp[(3) - (3)].exp));}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 190 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_GE, (yyvsp[(3) - (3)].exp));}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 191 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_NE, (yyvsp[(3) - (3)].exp));}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 192 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LOR, (yyvsp[(3) - (3)].exp));}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 193 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LAND, (yyvsp[(3) - (3)].exp));}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 197 "comp.y"
    { (yyval.param) = insert_parameter_list(NULL, (yyvsp[(1) - (1)].exp));}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 198 "comp.y"
    { (yyval.param) = insert_parameter_list((yyvsp[(1) - (3)].param), (yyvsp[(3) - (3)].exp));}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 202 "comp.y"
    { (yyval.var_l) = insert_variable_list(NULL, (yyvsp[(1) - (1)].var));}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 203 "comp.y"
    { (yyval.var_l) = insert_variable_list((yyvsp[(1) - (3)].var_l), (yyvsp[(3) - (3)].var));}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 207 "comp.y"
    { (yyval.var) = insert_variable(is_id, (yyvsp[(1) - (1)].string), NULL);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 208 "comp.y"
    { (yyval.var) = insert_variable(is_id, (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].val));}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 213 "comp.y"
    { (yyval.arg_list) = insert_argument_list(NULL, (yyvsp[(1) - (1)].arg));}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 214 "comp.y"
    { (yyval.arg_list) = insert_argument_list((yyvsp[(1) - (3)].arg_list),(yyvsp[(3) - (3)].arg));}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 218 "comp.y"
    { (yyval.arg) = insert_argument((yyvsp[(1) - (2)].uvt), (yyvsp[(2) - (2)].string));}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 224 "comp.y"
    { (yyval.cond) = insert_if_statement((yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].cond_code)); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 225 "comp.y"
    { (yyval.cond) = insert_if_else_statement((yyvsp[(3) - (7)].exp),(yyvsp[(5) - (7)].cond_code),(yyvsp[(7) - (7)].cond_code));}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 226 "comp.y"
    { (yyval.cond) = insert_switch_statement((yyvsp[(3) - (7)].exp),(yyvsp[(6) - (7)].sw));}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 230 "comp.y"
    { (yyval.cond_code) = insert_condition_code((yyvsp[(2) - (3)].oper_list), NULL);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 231 "comp.y"
    { (yyval.cond_code) = insert_condition_code(NULL,(yyvsp[(1) - (1)].oper));}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 236 "comp.y"
    { (yyval.sw) = insert_switch_case(is_NORMAL,(yyvsp[(2) - (5)].val),(yyvsp[(4) - (5)].oper_list),(yyvsp[(5) - (5)].sw));}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 237 "comp.y"
    { (yyval.sw) = insert_switch_case(is_DEFAULT,NULL,(yyvsp[(3) - (4)].oper_list),(yyvsp[(4) - (4)].sw));}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 238 "comp.y"
    { (yyval.sw) = insert_switch_case(is_NORMAL,(yyvsp[(2) - (4)].val),(yyvsp[(4) - (4)].oper_list),NULL);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 239 "comp.y"
    { (yyval.sw) = insert_switch_case(is_DEFAULT,NULL,(yyvsp[(3) - (3)].oper_list),NULL);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 243 "comp.y"
    { (yyval.cont) = insert_control(is_break,NULL);}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 244 "comp.y"
    { (yyval.cont) = insert_control(is_continue,NULL);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 245 "comp.y"
    { (yyval.cont) = insert_control(is_return,NULL);}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 246 "comp.y"
    { (yyval.cont) = insert_control(is_return_exp,(yyvsp[(2) - (2)].exp));}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 250 "comp.y"
    { (yyval.at) = is_ASS_EQ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 251 "comp.y"
    { (yyval.at) = is_ASS_ADD;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 252 "comp.y"
    { (yyval.at) = is_ASS_SUB;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 253 "comp.y"
    { (yyval.at) = is_ASS_MUL;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 254 "comp.y"
    { (yyval.at) = is_ASS_DIV;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 255 "comp.y"
    { (yyval.at) = is_ASS_PERC;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 256 "comp.y"
    { (yyval.at) = is_ASS_AND;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 260 "comp.y"
    { (yyval.val) = insert_string(is_string, (yyvsp[(1) - (1)].string));}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 261 "comp.y"
    { (yyval.val) = insert_int(is_int, (yyvsp[(1) - (1)].val_i));}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 262 "comp.y"
    { (yyval.val) = insert_double(is_double, (yyvsp[(1) - (1)].doubleval));}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 263 "comp.y"
    { (yyval.val) = insert_char(is_char, (yyvsp[(1) - (1)].chr));}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 264 "comp.y"
    { (yyval.val) = insert_boolean(is_boolean, 1);}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 265 "comp.y"
    { (yyval.val) = insert_boolean(is_boolean, 0);}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 266 "comp.y"
    { (yyval.val) = insert_string(is_string, (yyvsp[(1) - (1)].string));}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 270 "comp.y"
    {(yyval.uvt) = is_char;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 271 "comp.y"
    {(yyval.uvt) = is_int;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 272 "comp.y"
    {(yyval.uvt) = is_string;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 273 "comp.y"
    {(yyval.uvt) = is_boolean;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 274 "comp.y"
    {(yyval.uvt) = is_double;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 275 "comp.y"
    {(yyval.uvt) = is_void;}
    break;



/* Line 1455 of yacc.c  */
#line 2309 "y.tab.c"
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
#line 279 "comp.y"


int yyerror (char *s)
{
	printf ("%s\n", s);
}

int main()
{
	yyparse();
	return 0;
}

