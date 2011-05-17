
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
int errors;



/* Line 189 of yacc.c  */
#line 89 "y.tab.c"

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
{

/* Line 214 of yacc.c  */
#line 39 "comp.y"


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



/* Line 214 of yacc.c  */
#line 312 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 324 "y.tab.c"

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
#define YYLAST   819

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNRULES -- Number of states.  */
#define YYNSTATES  242

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    73,    74,     2,
      75,    76,    71,    69,    88,    70,    87,    72,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    86,
      77,    79,    78,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,     2,    83,     2,     2,     2,     2,
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
      65,    66,    67,    68,    80,    81
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    16,    23,    31,    43,    45,    48,
      53,    56,    58,    61,    70,    72,    74,    76,    79,    83,
      85,    88,    91,    94,    97,    99,   101,   104,   107,   110,
     114,   118,   121,   124,   127,   130,   132,   134,   136,   139,
     148,   157,   161,   163,   165,   167,   169,   173,   178,   182,
     186,   190,   194,   198,   202,   206,   210,   214,   218,   222,
     226,   230,   234,   238,   242,   244,   248,   250,   254,   256,
     260,   262,   266,   269,   279,   288,   297,   305,   311,   319,
     325,   333,   341,   343,   345,   347,   351,   353,   355,   359,
     361,   363,   366,   372,   377,   381,   383,   385,   387,   389,
     391,   393,   395,   397,   399,   401,   404,   407,   409,   411,
     413,   415,   417,   419,   421,   423,   425
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      91,     0,    -1,    17,    67,    82,    92,    95,    83,    -1,
      17,    67,    82,    92,    83,    -1,    17,    67,    82,    93,
      92,    83,    -1,    17,    67,    82,    93,    92,    95,    83,
      -1,    97,    53,    61,    31,    75,    54,    84,    85,     3,
      76,    98,    -1,    94,    -1,    93,    94,    -1,    97,    53,
     101,    86,    -1,   101,    86,    -1,    96,    -1,    95,    96,
      -1,    97,    53,   123,    67,    75,   112,    76,    98,    -1,
      49,    -1,    50,    -1,    51,    -1,    82,    83,    -1,    82,
      99,    83,    -1,   100,    -1,    99,   100,    -1,   101,    86,
      -1,   102,    86,    -1,   103,    86,    -1,   115,    -1,   114,
      -1,   104,    86,    -1,   106,    86,    -1,   123,   110,    -1,
      67,   121,   105,    -1,    67,   121,   102,    -1,    67,    34,
      -1,    34,    67,    -1,    67,    35,    -1,    35,    67,    -1,
      13,    -1,    18,    -1,    57,    -1,    57,   105,    -1,    56,
      87,    46,    87,    48,    75,   105,    76,    -1,    56,    87,
      46,    87,    47,    75,   105,    76,    -1,    75,   105,    76,
      -1,   122,    -1,   106,    -1,   107,    -1,   108,    -1,    67,
      75,    76,    -1,    67,    75,   109,    76,    -1,   105,    69,
     105,    -1,   105,    70,   105,    -1,   105,    71,   105,    -1,
     105,    72,   105,    -1,   105,    73,   105,    -1,   105,    74,
     105,    -1,   105,    30,   105,    -1,   105,    58,   105,    -1,
     105,    78,   105,    -1,   105,    77,   105,    -1,   105,    41,
     105,    -1,   105,    40,   105,    -1,   105,    39,   105,    -1,
     105,    42,   105,    -1,   105,    44,   105,    -1,   105,    43,
     105,    -1,   105,    -1,   109,    88,   105,    -1,   111,    -1,
     110,    88,   111,    -1,    67,    -1,    67,    79,   105,    -1,
     113,    -1,   112,    88,   113,    -1,   123,    67,    -1,    25,
      75,   116,    86,   105,    86,   117,    76,   119,    -1,    25,
      75,    86,   105,    86,   117,    76,   119,    -1,    25,    75,
     116,    86,   105,    86,    76,   119,    -1,    25,    75,    86,
     105,    86,    76,   119,    -1,    62,    75,   105,    76,   119,
      -1,    20,   119,    62,    75,   105,    76,    86,    -1,    26,
      75,   105,    76,   119,    -1,    26,    75,   105,    76,   119,
      22,   119,    -1,    55,    75,   105,    76,    82,   120,    83,
      -1,   102,    -1,   101,    -1,   118,    -1,   117,    88,   118,
      -1,   102,    -1,   103,    -1,    82,    99,    83,    -1,   100,
      -1,    86,    -1,    82,    83,    -1,    15,   122,    89,    99,
     120,    -1,    15,   122,    89,    99,    -1,    19,    89,    99,
      -1,    79,    -1,     6,    -1,     7,    -1,     4,    -1,     5,
      -1,    80,    -1,     9,    -1,    67,    -1,    65,    -1,    63,
      -1,    69,    63,    -1,    70,    63,    -1,    64,    -1,    66,
      -1,    59,    -1,    23,    -1,    16,    -1,    28,    -1,    54,
      -1,    12,    -1,    21,    -1,    61,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   128,   128,   129,   130,   131,   134,   138,   139,   143,
     144,   148,   149,   153,   157,   158,   159,   162,   163,   167,
     168,   172,   173,   174,   175,   176,   177,   178,   182,   185,
     186,   190,   191,   192,   193,   197,   198,   199,   200,   201,
     202,   207,   208,   209,   210,   211,   215,   216,   220,   221,
     222,   223,   224,   225,   226,   227,   231,   232,   233,   234,
     235,   236,   237,   238,   242,   243,   247,   248,   252,   253,
     258,   259,   263,   267,   268,   269,   270,   271,   272,   275,
     276,   277,   281,   282,   286,   287,   291,   292,   297,   298,
     299,   300,   305,   306,   307,   311,   312,   313,   314,   315,
     316,   317,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   333,   334,   335,   336,   337,   338
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
  "OP_DIM", "OUT", "PRINT", "PRINTLN", "PRIVATE", "PROTECTED", "PUBLIC",
  "SHORT", "STATIC", "STRING", "SWITCH", "SYSTEM", "RETURN", "RS", "TRUE",
  "THIS", "VOID", "WHILE", "NUMBER_VAL", "DOUBLE_VAL", "STRING_VAL",
  "CHAR_VAL", "ID", "IFPREC", "'+'", "'-'", "'*'", "'/'", "'%'", "'&'",
  "'('", "')'", "'<'", "'>'", "'='", "ASS_PERC", "ASS_SUM", "'{'", "'}'",
  "'['", "']'", "';'", "'.'", "','", "':'", "$accept", "init", "main",
  "global_list", "global_variable", "function_list", "function", "scope",
  "code", "operation_list", "operation", "declaration", "assignment",
  "unary", "control", "expression", "function_call", "infix_expression",
  "if_expression", "parameter_list", "var_list", "var", "argument_list",
  "argument", "cycle", "if", "forInit", "increase_list", "increase",
  "condition_code", "switch", "assign_operator", "value", "type", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,    43,
      45,    42,    47,    37,    38,    40,    41,    60,    62,    61,
     324,   325,   123,   125,    91,    93,    59,    46,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    91,    91,    92,    93,    93,    94,
      94,    95,    95,    96,    97,    97,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   101,   102,
     102,   103,   103,   103,   103,   104,   104,   104,   104,   104,
     104,   105,   105,   105,   105,   105,   106,   106,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   114,   114,   114,   114,   114,   114,   115,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   119,   120,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   123,   123,   123,   123,   123,   123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     5,     6,     7,    11,     1,     2,     4,
       2,     1,     2,     8,     1,     1,     1,     2,     3,     1,
       2,     2,     2,     2,     1,     1,     2,     2,     2,     3,
       3,     2,     2,     2,     2,     1,     1,     1,     2,     8,
       8,     3,     1,     1,     1,     1,     3,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     2,     9,     8,     8,     7,     5,     7,     5,
       7,     7,     1,     1,     1,     3,     1,     1,     3,     1,
       1,     2,     5,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,   114,   111,   115,   112,
      14,    15,    16,   113,   116,     0,     0,     7,     0,     0,
       0,     3,     0,    11,     0,     0,     8,     0,    10,    68,
      28,    66,     2,    12,     0,     4,     0,   116,     0,     0,
       0,     0,     5,     0,     9,   110,   109,   104,   107,   103,
     108,   102,     0,     0,     0,    69,    43,    44,    45,    42,
      67,     0,     0,     0,   105,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    64,     0,    41,    54,
      60,    59,    58,    61,    63,    62,    55,    48,    49,    50,
      51,    52,    53,    57,    56,     0,    70,     0,     0,    47,
       0,     0,     0,    72,     0,    65,     0,    13,    71,     0,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,    17,     0,    19,     0,     0,     0,     0,     0,
      25,    24,     0,     0,    90,    89,     0,     0,     0,    32,
      34,     0,     0,    38,     0,    98,    99,    96,    97,   101,
      31,    33,    95,   100,     0,    18,    20,    21,    22,    23,
      26,    27,     6,    91,     0,     0,     0,     0,    83,    82,
       0,     0,     0,     0,     0,   102,    30,    29,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,    77,     0,     0,     0,    86,    87,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    78,    76,
       0,     0,     0,     0,    80,   102,     0,     0,    81,     0,
       0,    74,    85,    75,     0,     0,    94,    40,    39,    73,
      93,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    15,    16,    17,    22,    23,    24,   117,   133,
     145,   135,   136,   137,   138,    55,    56,    57,    58,    87,
      30,    31,   105,   106,   140,   141,   180,   209,   210,   146,
     215,   164,    59,    20
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -167
static const yytype_int16 yypact[] =
{
     -15,   -62,    12,   -49,  -167,   484,  -167,  -167,  -167,  -167,
    -167,  -167,  -167,  -167,  -167,   143,   484,  -167,     9,   -33,
      -6,  -167,   164,  -167,    25,   172,  -167,   414,  -167,    19,
      -9,  -167,  -167,  -167,   490,  -167,   330,    55,    13,   223,
      -6,    41,  -167,    39,  -167,  -167,  -167,  -167,  -167,  -167,
    -167,    43,    50,    56,   223,   669,  -167,  -167,  -167,  -167,
    -167,    46,    71,   136,  -167,  -167,   513,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   490,    45,  -167,   669,   -38,  -167,   741,
    -167,  -167,  -167,  -167,  -167,  -167,   741,   693,   693,   741,
     741,   741,   741,  -167,  -167,   -18,  -167,    60,    68,  -167,
     223,    48,   490,  -167,   128,   669,   216,  -167,  -167,    66,
    -167,  -167,   163,    65,    69,    78,    79,    80,    70,   223,
      83,    37,  -167,   240,  -167,    74,    75,    82,    84,    86,
    -167,  -167,    48,   292,  -167,  -167,   111,    61,   223,  -167,
    -167,   223,   134,   669,   223,  -167,  -167,  -167,  -167,  -167,
    -167,  -167,  -167,  -167,   299,  -167,  -167,  -167,  -167,  -167,
    -167,  -167,  -167,  -167,   316,    99,    59,   223,  -167,  -167,
      96,   534,   558,   100,   579,   160,  -167,   669,  -167,   223,
     346,   223,   163,   103,   -37,   163,   603,   -28,   367,   168,
     -11,   121,   129,  -167,   122,    98,   163,  -167,  -167,     7,
    -167,     0,   163,   691,    97,   124,   223,   223,  -167,  -167,
     163,    57,   163,     8,  -167,  -167,   120,   460,  -167,   624,
     648,  -167,  -167,  -167,   163,   460,   460,  -167,  -167,  -167,
     436,  -167
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,   194,  -167,   200,   202,    38,    64,    89,  -142,
     -84,    24,  -110,  -166,  -167,   -54,   -86,  -167,  -167,  -167,
    -167,   193,  -167,   126,  -167,  -167,  -167,    32,    27,   557,
      14,  -167,    44,   -31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      66,   174,     1,    41,   213,     3,   125,   126,   214,    86,
     201,   202,     4,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    19,
     139,   208,   134,     5,   125,   126,   139,   179,   109,   205,
      19,   155,   156,   157,   158,   208,   159,   139,   206,   166,
     110,    38,   107,    28,   186,   208,   115,   139,   111,   134,
      33,    29,    27,   155,   156,   157,   158,   205,   159,    18,
     112,   160,   161,     6,    33,   153,   222,     7,    34,    40,
      18,   107,     8,   220,   234,   236,    43,   207,   139,     9,
     166,   125,   126,   240,   181,   221,   221,   182,    39,    44,
     184,   207,   155,   156,   157,   158,   139,   159,    61,   139,
     187,   207,    63,    64,    62,    13,   162,   163,    63,    65,
     139,    83,    14,   190,   205,    84,   139,   113,   176,   108,
     116,   119,   160,   161,   139,   196,   139,   198,   162,   163,
     147,   139,   142,   134,   148,   149,   150,   177,   139,   139,
     139,   134,   166,   114,   139,   151,   166,   152,   154,    45,
     167,   168,   229,   230,   155,   156,   157,   158,   169,   159,
     170,   178,   171,   175,   189,     6,   120,   162,   163,     7,
     183,   121,   191,   122,     8,   200,   227,   194,   123,   124,
     212,     9,    10,    11,    12,    46,   216,   125,   126,    47,
      48,    49,    50,    51,   217,    52,    53,   228,   218,   235,
      25,    54,    85,    10,    11,    12,    26,    13,   127,   128,
     129,    10,    11,    12,    14,   130,    21,    36,     6,   120,
     131,   172,     7,    60,   121,    63,   122,     8,   118,   162,
     163,   123,   124,   223,     9,   143,    45,    32,   232,   144,
     125,   126,     6,   120,   241,    35,     7,   226,   121,     0,
     122,     8,     0,     0,     0,   123,   124,     0,     9,     0,
      13,   127,   128,   129,   125,   126,     0,    14,   130,     0,
       0,     0,    46,   131,     0,     0,    47,    48,    49,    50,
      51,     0,    52,    53,    13,   127,   128,   129,    54,   132,
       0,    14,   130,     0,     6,   120,     0,   131,     7,     0,
     121,     0,   122,     8,     0,     0,     0,   123,   124,     0,
       9,     0,    45,   165,     0,     0,   125,   126,     6,   120,
       0,     0,     7,     0,   121,     0,   122,     8,     0,     0,
       0,   123,   124,     0,     9,     0,    13,   127,   128,   129,
     125,   126,     0,    14,   130,     0,     0,     0,    46,   131,
       0,     0,    47,    48,    49,    50,   185,     0,    52,    53,
      13,   127,   128,   129,    54,   173,    67,    14,   130,    10,
      11,    12,     0,   131,     0,    68,    69,    70,    71,    72,
      73,     0,     0,     0,     0,     0,     0,    67,     0,   188,
       0,     0,     0,     0,    74,     0,    68,    69,    70,    71,
      72,    73,     0,    42,     0,    75,    76,    77,    78,    79,
      80,     0,     0,    81,    82,    74,     6,     0,     0,     0,
       7,     0,   197,     0,     0,     8,    75,    76,    77,    78,
      79,    80,     9,     0,    81,    82,     0,     0,     6,   120,
       0,   213,     7,   211,   121,   214,   122,     8,     0,     0,
       0,   123,   124,     0,     9,     0,     0,     0,    13,     0,
     125,   126,     6,   120,     0,    37,     7,     0,   121,     0,
     122,     8,     0,     0,     0,   123,   124,     0,     9,     0,
      13,   127,   128,   129,   125,   126,     6,    14,   130,     0,
       7,     0,     6,   131,     0,     8,     7,     0,     0,     0,
       0,     8,     9,     0,    13,   127,   128,   129,     9,     0,
       0,    14,   130,     0,     0,     0,     0,   131,     0,     0,
       0,     0,     0,    10,    11,    12,     0,     0,    13,     0,
       0,     0,     0,    67,    13,    14,     0,     0,     0,     0,
       0,    14,    68,    69,    70,    71,    72,    73,     0,     0,
       0,     0,     0,     0,    67,     0,     0,     0,     0,     0,
       0,    74,     0,    68,    69,    70,    71,    72,    73,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    67,    88,
      81,    82,    74,     0,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    75,    76,    77,    78,    79,    80,    67,
     192,    81,    82,     0,     0,     0,    74,     0,    68,    69,
      70,    71,    72,    73,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    67,   193,    81,    82,    74,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    75,    76,
      77,    78,    79,    80,    67,   195,    81,    82,     0,     0,
       0,    74,     0,    68,    69,    70,    71,    72,    73,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    67,   204,
      81,    82,    74,     0,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    75,    76,    77,    78,    79,    80,    67,
     237,    81,    82,     0,     0,     0,    74,     0,    68,    69,
      70,    71,    72,    73,    45,     0,     0,    75,    76,    77,
      78,    79,    80,    67,   238,    81,    82,    74,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    75,    76,
      77,    78,    79,    80,     0,     0,    81,    82,     0,   199,
      46,    74,   203,     0,    47,    48,    49,    50,   225,     0,
      52,    53,     0,   219,    77,    78,    79,    80,     0,   224,
      81,    82,     0,     0,     0,     0,     0,   231,     0,   233,
      68,    69,    70,    71,    72,    73,     0,     0,     0,     0,
       0,   239,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    82
};

static const yytype_int16 yycheck[] =
{
      54,   143,    17,    34,    15,    67,    34,    35,    19,    63,
      47,    48,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,     5,
     116,   197,   116,    82,    34,    35,   122,   147,    76,    67,
      16,     4,     5,     6,     7,   211,     9,   133,    76,   133,
      88,    27,    83,    86,   164,   221,   110,   143,    76,   143,
      22,    67,    53,     4,     5,     6,     7,    67,     9,     5,
      88,    34,    35,    12,    36,   129,    76,    16,    53,    88,
      16,   112,    21,    76,    76,   227,    31,   197,   174,    28,
     174,    34,    35,   235,   148,    88,    88,   151,    79,    86,
     154,   211,     4,     5,     6,     7,   192,     9,    67,   195,
     164,   221,    75,    63,    75,    54,    79,    80,    75,    63,
     206,    75,    61,   177,    67,    54,   212,    67,    67,    84,
      82,     3,    34,    35,   220,   189,   222,   191,    79,    80,
      75,   227,    76,   227,    75,    67,    67,    86,   234,   235,
     236,   235,   236,    85,   240,    75,   240,    87,    75,    23,
      86,    86,   216,   217,     4,     5,     6,     7,    86,     9,
      86,   147,    86,    62,    75,    12,    13,    79,    80,    16,
      46,    18,    86,    20,    21,    82,    89,    87,    25,    26,
      22,    28,    49,    50,    51,    59,    75,    34,    35,    63,
      64,    65,    66,    67,    75,    69,    70,    83,    86,    89,
      16,    75,    76,    49,    50,    51,    16,    54,    55,    56,
      57,    49,    50,    51,    61,    62,    83,    25,    12,    13,
      67,   142,    16,    40,    18,    75,    20,    21,   112,    79,
      80,    25,    26,   211,    28,    82,    23,    83,   221,    86,
      34,    35,    12,    13,   240,    83,    16,   213,    18,    -1,
      20,    21,    -1,    -1,    -1,    25,    26,    -1,    28,    -1,
      54,    55,    56,    57,    34,    35,    -1,    61,    62,    -1,
      -1,    -1,    59,    67,    -1,    -1,    63,    64,    65,    66,
      67,    -1,    69,    70,    54,    55,    56,    57,    75,    83,
      -1,    61,    62,    -1,    12,    13,    -1,    67,    16,    -1,
      18,    -1,    20,    21,    -1,    -1,    -1,    25,    26,    -1,
      28,    -1,    23,    83,    -1,    -1,    34,    35,    12,    13,
      -1,    -1,    16,    -1,    18,    -1,    20,    21,    -1,    -1,
      -1,    25,    26,    -1,    28,    -1,    54,    55,    56,    57,
      34,    35,    -1,    61,    62,    -1,    -1,    -1,    59,    67,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    69,    70,
      54,    55,    56,    57,    75,    83,    30,    61,    62,    49,
      50,    51,    -1,    67,    -1,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    83,
      -1,    -1,    -1,    -1,    58,    -1,    39,    40,    41,    42,
      43,    44,    -1,    83,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    77,    78,    58,    12,    -1,    -1,    -1,
      16,    -1,    86,    -1,    -1,    21,    69,    70,    71,    72,
      73,    74,    28,    -1,    77,    78,    -1,    -1,    12,    13,
      -1,    15,    16,    86,    18,    19,    20,    21,    -1,    -1,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    54,    -1,
      34,    35,    12,    13,    -1,    61,    16,    -1,    18,    -1,
      20,    21,    -1,    -1,    -1,    25,    26,    -1,    28,    -1,
      54,    55,    56,    57,    34,    35,    12,    61,    62,    -1,
      16,    -1,    12,    67,    -1,    21,    16,    -1,    -1,    -1,
      -1,    21,    28,    -1,    54,    55,    56,    57,    28,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    30,    54,    61,    -1,    -1,    -1,    -1,
      -1,    61,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    30,    76,
      77,    78,    58,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    69,    70,    71,    72,    73,    74,    30,
      76,    77,    78,    -1,    -1,    -1,    58,    -1,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    30,    76,    77,    78,    58,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    69,    70,
      71,    72,    73,    74,    30,    76,    77,    78,    -1,    -1,
      -1,    58,    -1,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    30,    76,
      77,    78,    58,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    69,    70,    71,    72,    73,    74,    30,
      76,    77,    78,    -1,    -1,    -1,    58,    -1,    39,    40,
      41,    42,    43,    44,    23,    -1,    -1,    69,    70,    71,
      72,    73,    74,    30,    76,    77,    78,    58,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    69,    70,
      71,    72,    73,    74,    -1,    -1,    77,    78,    -1,   192,
      59,    58,   195,    -1,    63,    64,    65,    66,    67,    -1,
      69,    70,    -1,   206,    71,    72,    73,    74,    -1,   212,
      77,    78,    -1,    -1,    -1,    -1,    -1,   220,    -1,   222,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    91,    67,     0,    82,    12,    16,    21,    28,
      49,    50,    51,    54,    61,    92,    93,    94,    97,   101,
     123,    83,    95,    96,    97,    92,    94,    53,    86,    67,
     110,   111,    83,    96,    53,    83,    95,    61,   101,    79,
      88,   123,    83,    31,    86,    23,    59,    63,    64,    65,
      66,    67,    69,    70,    75,   105,   106,   107,   108,   122,
     111,    67,    75,    75,    63,    63,   105,    30,    39,    40,
      41,    42,    43,    44,    58,    69,    70,    71,    72,    73,
      74,    77,    78,    75,    54,    76,   105,   109,    76,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   112,   113,   123,    84,    76,
      88,    76,    88,    67,    85,   105,    82,    98,   113,     3,
      13,    18,    20,    25,    26,    34,    35,    55,    56,    57,
      62,    67,    83,    99,   100,   101,   102,   103,   104,   106,
     114,   115,    76,    82,    86,   100,   119,    75,    75,    67,
      67,    75,    87,   105,    75,     4,     5,     6,     7,     9,
      34,    35,    79,    80,   121,    83,   100,    86,    86,    86,
      86,    86,    98,    83,    99,    62,    67,    86,   101,   102,
     116,   105,   105,    46,   105,    67,   102,   105,    83,    75,
     105,    86,    76,    76,    87,    76,   105,    86,   105,   119,
      82,    47,    48,   119,    76,    67,    76,   102,   103,   117,
     118,    86,    22,    15,    19,   120,    75,    75,    86,   119,
      76,    88,    76,   117,   119,    67,   122,    89,    83,   105,
     105,   119,   118,   119,    76,    89,    99,    76,    76,   119,
      99,   120
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
#line 128 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (6)].string),(yyvsp[(4) - (6)].m),(yyvsp[(5) - (6)].func_list),NULL); myprogram = (yyval.prog); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 129 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].m),NULL,NULL); myprogram = (yyval.prog); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 130 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (6)].string),(yyvsp[(5) - (6)].m),NULL,(yyvsp[(4) - (6)].glob)); myprogram = (yyval.prog); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 131 "comp.y"
    { (yyval.prog) = insert_program((yyvsp[(2) - (7)].string),(yyvsp[(5) - (7)].m),(yyvsp[(6) - (7)].func_list),(yyvsp[(4) - (7)].glob)); myprogram = (yyval.prog); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 134 "comp.y"
    { (yyval.m) = insert_main((yyvsp[(11) - (11)].cod));}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 138 "comp.y"
    { (yyval.glob) = insert_global_list(NULL,(yyvsp[(1) - (1)].dec));}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 139 "comp.y"
    { (yyval.glob) = insert_global_list((yyvsp[(1) - (2)].glob),(yyvsp[(2) - (2)].dec));}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 143 "comp.y"
    { (yyval.dec) = insert_global_declaration((yyvsp[(1) - (4)].st),(yyvsp[(3) - (4)].declar),line);}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 144 "comp.y"
    { (yyval.dec) = insert_global_declaration(is_public,(yyvsp[(1) - (2)].declar),line);}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 148 "comp.y"
    { (yyval.func_list) = insert_function_list(NULL,(yyvsp[(1) - (1)].func));}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 149 "comp.y"
    { (yyval.func_list) = insert_function_list((yyvsp[(1) - (2)].func_list),(yyvsp[(2) - (2)].func));}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 153 "comp.y"
    { (yyval.func) = insert_function((yyvsp[(1) - (8)].st), (yyvsp[(3) - (8)].uvt), (yyvsp[(4) - (8)].string), (yyvsp[(6) - (8)].arg_list), (yyvsp[(8) - (8)].cod),line);}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 157 "comp.y"
    {(yyval.st) = is_private;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 158 "comp.y"
    {(yyval.st) = is_protected;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 159 "comp.y"
    {(yyval.st) = is_public;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 162 "comp.y"
    { (yyval.cod) = insert_code(NULL);}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 163 "comp.y"
    { (yyval.cod) = insert_code((yyvsp[(2) - (3)].oper_list));}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 167 "comp.y"
    {(yyval.oper_list) = insert_operation_list(NULL,(yyvsp[(1) - (1)].oper));}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 168 "comp.y"
    {(yyval.oper_list) = insert_operation_list((yyvsp[(1) - (2)].oper_list),(yyvsp[(2) - (2)].oper));}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 172 "comp.y"
    { (yyval.oper) = insert_operation_dec((yyvsp[(1) - (2)].declar));}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 173 "comp.y"
    { (yyval.oper) = insert_operation_assign((yyvsp[(1) - (2)].assign));}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 174 "comp.y"
    { (yyval.oper) = insert_operation_unary((yyvsp[(1) - (2)].un)); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 175 "comp.y"
    { (yyval.oper) = insert_operation_if((yyvsp[(1) - (1)].cond));}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 176 "comp.y"
    { (yyval.oper) = insert_operation_cycle((yyvsp[(1) - (1)].cycle));}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 177 "comp.y"
    { (yyval.oper) = insert_operation_control((yyvsp[(1) - (2)].cont));}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 178 "comp.y"
    { (yyval.oper) = insert_operation_function((yyvsp[(1) - (2)].call));}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 182 "comp.y"
    { (yyval.declar) = insert_declaration((yyvsp[(1) - (2)].uvt),(yyvsp[(2) - (2)].var_l),line); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 185 "comp.y"
    { (yyval.assign) = insert_assignment((yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].at),(yyvsp[(3) - (3)].exp),line);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 186 "comp.y"
    { (yyval.assign) = insert_assignment((yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].at),(yyvsp[(3) - (3)].assign)->expression,line);}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 190 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(1) - (2)].string), is_after_plus,line);}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 191 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(2) - (2)].string), is_before_plus,line);}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 192 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(1) - (2)].string), is_after_minus,line);}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 193 "comp.y"
    { (yyval.un) = insert_unary((yyvsp[(2) - (2)].string), is_before_minus,line);}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 197 "comp.y"
    { (yyval.cont) = insert_control(is_break,NULL,line);}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 198 "comp.y"
    { (yyval.cont) = insert_control(is_continue,NULL,line);}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 199 "comp.y"
    { (yyval.cont) = insert_control(is_return,NULL,line);}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 200 "comp.y"
    { (yyval.cont) = insert_control(is_return_exp,(yyvsp[(2) - (2)].exp),line);}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 201 "comp.y"
    { (yyval.cont) = insert_control(is_println,(yyvsp[(7) - (8)].exp),line);}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 202 "comp.y"
    { (yyval.cont) = insert_control(is_print,(yyvsp[(7) - (8)].exp),line);}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 207 "comp.y"
    { (yyval.exp) = insert_expression((yyvsp[(2) - (3)].exp),line);}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 208 "comp.y"
    { (yyval.exp) = insert_expression_value((yyvsp[(1) - (1)].val),line);}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 209 "comp.y"
    { (yyval.exp) = insert_expression_func((yyvsp[(1) - (1)].call),line);}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 210 "comp.y"
    { (yyval.exp) = insert_expression_infix((yyvsp[(1) - (1)].infix),line);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 211 "comp.y"
    { (yyval.exp) = insert_expression_if((yyvsp[(1) - (1)].is_if),line);}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 215 "comp.y"
    { (yyval.call) = insert_function_call((yyvsp[(1) - (3)].string),NULL,line);}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 216 "comp.y"
    { (yyval.call) = insert_function_call((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].param),line);}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 220 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_plus, (yyvsp[(3) - (3)].exp));}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 221 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_minus, (yyvsp[(3) - (3)].exp));}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 222 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_mult, (yyvsp[(3) - (3)].exp));}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 223 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_div, (yyvsp[(3) - (3)].exp));}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 224 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_percent, (yyvsp[(3) - (3)].exp));}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 225 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_and, (yyvsp[(3) - (3)].exp));}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 226 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_lshift, (yyvsp[(3) - (3)].exp));}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 227 "comp.y"
    { (yyval.infix) = insert_infix((yyvsp[(1) - (3)].exp), is_rshift, (yyvsp[(3) - (3)].exp));}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 231 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_BIGGER, (yyvsp[(3) - (3)].exp));}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 232 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LOWER, (yyvsp[(3) - (3)].exp));}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 233 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_EQ, (yyvsp[(3) - (3)].exp));}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 234 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LE, (yyvsp[(3) - (3)].exp));}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 235 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_GE, (yyvsp[(3) - (3)].exp));}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 236 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_NE, (yyvsp[(3) - (3)].exp));}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 237 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LOR, (yyvsp[(3) - (3)].exp));}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 238 "comp.y"
    { (yyval.is_if) = insert_if((yyvsp[(1) - (3)].exp), is_OP_LAND, (yyvsp[(3) - (3)].exp));}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 242 "comp.y"
    { (yyval.param) = insert_parameter_list(NULL, (yyvsp[(1) - (1)].exp));}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 243 "comp.y"
    { (yyval.param) = insert_parameter_list((yyvsp[(1) - (3)].param), (yyvsp[(3) - (3)].exp));}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 247 "comp.y"
    { (yyval.var_l) = insert_variable_list(NULL, (yyvsp[(1) - (1)].var));}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 248 "comp.y"
    { (yyval.var_l) = insert_variable_list((yyvsp[(1) - (3)].var_l), (yyvsp[(3) - (3)].var));}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 252 "comp.y"
    { (yyval.var) = insert_variable(is_id, (yyvsp[(1) - (1)].string), NULL,line);}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 253 "comp.y"
    { (yyval.var) = insert_variable(is_id, (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].exp),line);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 258 "comp.y"
    { (yyval.arg_list) = insert_argument_list(NULL, (yyvsp[(1) - (1)].arg));}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 259 "comp.y"
    { (yyval.arg_list) = insert_argument_list((yyvsp[(1) - (3)].arg_list),(yyvsp[(3) - (3)].arg));}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 263 "comp.y"
    { (yyval.arg) = insert_argument((yyvsp[(1) - (2)].uvt), (yyvsp[(2) - (2)].string));}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 267 "comp.y"
    { (yyval.cycle) = insert_for((yyvsp[(3) - (9)].ini),(yyvsp[(5) - (9)].exp),(yyvsp[(7) - (9)].inc_list),(yyvsp[(9) - (9)].cond_code),line);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 268 "comp.y"
    { (yyval.cycle) = insert_for(NULL,(yyvsp[(4) - (8)].exp),(yyvsp[(6) - (8)].inc_list),(yyvsp[(8) - (8)].cond_code),line);}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 269 "comp.y"
    { (yyval.cycle) = insert_for((yyvsp[(3) - (8)].ini),(yyvsp[(5) - (8)].exp),NULL,(yyvsp[(8) - (8)].cond_code),line);}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 270 "comp.y"
    { (yyval.cycle) = insert_for(NULL,(yyvsp[(4) - (7)].exp),NULL,(yyvsp[(7) - (7)].cond_code),line);}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 271 "comp.y"
    { (yyval.cycle) = insert_while((yyvsp[(3) - (5)].exp),(yyvsp[(5) - (5)].cond_code),line);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 272 "comp.y"
    { (yyval.cycle) = insert_do_while((yyvsp[(2) - (7)].cond_code),(yyvsp[(5) - (7)].exp),line);}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 275 "comp.y"
    { (yyval.cond) = insert_if_statement((yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].cond_code),line); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 276 "comp.y"
    { (yyval.cond) = insert_if_else_statement((yyvsp[(3) - (7)].exp),(yyvsp[(5) - (7)].cond_code),(yyvsp[(7) - (7)].cond_code),line);}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 277 "comp.y"
    { (yyval.cond) = insert_switch_statement((yyvsp[(3) - (7)].exp),(yyvsp[(6) - (7)].sw),line);}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 281 "comp.y"
    { (yyval.ini) = insert_for_assign((yyvsp[(1) - (1)].assign),line);}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 282 "comp.y"
    { (yyval.ini) = insert_for_declaration((yyvsp[(1) - (1)].declar),line);}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 286 "comp.y"
    { (yyval.inc_list) = insert_increase_list(NULL,(yyvsp[(1) - (1)].inc));}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 287 "comp.y"
    { (yyval.inc_list) = insert_increase_list((yyvsp[(1) - (3)].inc_list),(yyvsp[(3) - (3)].inc));}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 291 "comp.y"
    { (yyval.inc) = insert_assign_inc((yyvsp[(1) - (1)].assign));}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 292 "comp.y"
    { (yyval.inc) = insert_unary_inc((yyvsp[(1) - (1)].un));}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 297 "comp.y"
    { (yyval.cond_code) = insert_condition_code((yyvsp[(2) - (3)].oper_list), NULL);}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 298 "comp.y"
    { (yyval.cond_code) = insert_condition_code(NULL,(yyvsp[(1) - (1)].oper));}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 299 "comp.y"
    { (yyval.cond_code) = insert_condition_code(NULL,NULL);}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 300 "comp.y"
    { (yyval.cond_code) = insert_condition_code(NULL, NULL);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 305 "comp.y"
    { (yyval.sw) = insert_switch_case(is_NORMAL,(yyvsp[(2) - (5)].val),(yyvsp[(4) - (5)].oper_list),(yyvsp[(5) - (5)].sw),line);}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 306 "comp.y"
    { (yyval.sw) = insert_switch_case(is_NORMAL,(yyvsp[(2) - (4)].val),(yyvsp[(4) - (4)].oper_list),NULL,line);}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 307 "comp.y"
    { (yyval.sw) = insert_switch_case(is_DEFAULT,NULL,(yyvsp[(3) - (3)].oper_list),NULL,line);}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 311 "comp.y"
    { (yyval.at) = is_ASS_EQ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 312 "comp.y"
    { (yyval.at) = is_ASS_ADD;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 313 "comp.y"
    { (yyval.at) = is_ASS_SUB;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 314 "comp.y"
    { (yyval.at) = is_ASS_MUL;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 315 "comp.y"
    { (yyval.at) = is_ASS_DIV;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 316 "comp.y"
    { (yyval.at) = is_ASS_PERC;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 317 "comp.y"
    { (yyval.at) = is_ASS_AND;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 321 "comp.y"
    { (yyval.val) = insert_string(is_ident, (yyvsp[(1) - (1)].string));}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 322 "comp.y"
    { (yyval.val) = insert_string(is_string, (yyvsp[(1) - (1)].string));}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 323 "comp.y"
    { (yyval.val) = insert_int(is_int, (yyvsp[(1) - (1)].val_i));}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 324 "comp.y"
    { (yyval.val) = insert_int(is_int, (yyvsp[(2) - (2)].val_i));}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 325 "comp.y"
    { (yyval.val) = insert_int(is_int, (yyvsp[(2) - (2)].val_i));}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 326 "comp.y"
    { (yyval.val) = insert_double(is_double, (yyvsp[(1) - (1)].doubleval));}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 327 "comp.y"
    { (yyval.val) = insert_char(is_char, (yyvsp[(1) - (1)].chr));}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 328 "comp.y"
    { (yyval.val) = insert_boolean(is_boolean, 1);}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 329 "comp.y"
    { (yyval.val) = insert_boolean(is_boolean, 0);}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 333 "comp.y"
    {(yyval.uvt) = is_char;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 334 "comp.y"
    {(yyval.uvt) = is_int;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 335 "comp.y"
    {(yyval.uvt) = is_string;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 336 "comp.y"
    {(yyval.uvt) = is_boolean;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 337 "comp.y"
    {(yyval.uvt) = is_double;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 338 "comp.y"
    {(yyval.uvt) = is_void;}
    break;



/* Line 1455 of yacc.c  */
#line 2663 "y.tab.c"
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
#line 342 "comp.y"


int yyerror (char *s)
{
	printf ("%s\n", s);
}

int main(){
	yyparse();
	ambient = semantic_analysis(myprogram,&errors);
	/*show_program(myprogram);*/
        if(errors == 1)
            printf("You have %d error, noob!\n",errors);
        else if(errors > 1)
            printf("You have %d errors, noob!\n",errors);
        else
            printf("Compilation finished without errors, congratulations Master!\n");
	printf("Program has %d lines\n",line); 
	return 0;
}

