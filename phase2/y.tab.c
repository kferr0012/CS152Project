/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "mini_1.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
extern FILE * yyin;
extern int lineNum;
void yyerror(const char * msg);
extern char* yytext;

#line 75 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    SEMICOLON = 259,
    IDENT = 260,
    NUMBER = 261,
    BEGIN_PARAMS = 262,
    END_PARAMS = 263,
    BEGIN_LOCALS = 264,
    END_LOCALS = 265,
    BEGIN_BODY = 266,
    END_BODY = 267,
    READ = 268,
    BEGINLOOP = 269,
    ENDLOOP = 270,
    WHILE = 271,
    AND = 272,
    OR = 273,
    OF = 274,
    IF = 275,
    FALSE = 276,
    TRUE = 277,
    ARRAY = 278,
    ENDIF = 279,
    THEN = 280,
    ELSE = 281,
    CONTINUE = 282,
    WRITE = 283,
    COLON = 284,
    COMMA = 285,
    DO = 286,
    GTE = 287,
    GT = 288,
    LT = 289,
    LTE = 290,
    ASSIGN = 291,
    FOR = 292,
    L_SQUARE_BRACKET = 293,
    R_SQUARE_BRACKET = 294,
    MOD = 295,
    EQ = 296,
    SUB = 297,
    MULT = 298,
    L_PAREN = 299,
    R_PAREN = 300,
    ADD = 301,
    DIV = 302,
    INTEGER = 303,
    NEQ = 304,
    NOT = 305,
    RETURN = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "mini_1.y" /* yacc.c:355  */

	char * cVal;
	int iVal;
	double dVal;

#line 173 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 190 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   142

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    40,    42,    46,    48,    51,    54,    59,
      62,    65,    68,    72,    74,    78,    80,    83,    86,    89,
      92,    95,    98,   101,   104,   107,   110,   114,   116,   119,
     122,   125,   129,   131,   134,   138,   143,   146,   150,   152,
     155,   159,   161,   164,   167,   170,   173,   176,   179,   182,
     185,   188,   191,   194,   197,   200,   203,   207,   209,   212,
     215,   218,   222,   224,   227,   230,   233,   236,   239,   242,
     245,   249,   251,   255,   257,   260,   264,   266,   270
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "SEMICOLON", "IDENT",
  "NUMBER", "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS",
  "BEGIN_BODY", "END_BODY", "READ", "BEGINLOOP", "ENDLOOP", "WHILE", "AND",
  "OR", "OF", "IF", "FALSE", "TRUE", "ARRAY", "ENDIF", "THEN", "ELSE",
  "CONTINUE", "WRITE", "COLON", "COMMA", "DO", "GTE", "GT", "LT", "LTE",
  "ASSIGN", "FOR", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "MOD", "EQ",
  "SUB", "MULT", "L_PAREN", "R_PAREN", "ADD", "DIV", "INTEGER", "NEQ",
  "NOT", "RETURN", "$accept", "program", "decl_loop", "stmt_loop",
  "function", "declaration", "declaration_2", "declaration_3",
  "declaration_4", "statement", "statement_1", "statement_2",
  "statement_21", "statement_3", "statement_4", "statement_5",
  "statement_51", "statement_6", "statement_61", "bool_exp", "bool_exp2",
  "rel_and_exp", "rel_and_exp2", "relation_exp", "relation_exp_s", "comp",
  "expression", "expression_2", "mult_expr", "mult_expr_2", "term",
  "term_2", "term_3", "term_31", "term_32", "var", "var_2", "var_3", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -69

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-69)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       0,    16,    31,     0,    30,   -69,   -69,    33,    42,   -19,
      53,    62,    44,    58,   -69,    60,    42,    34,    20,   -19,
      42,   -69,    68,   -69,   -69,    66,    38,    71,    50,    22,
      81,    70,    52,    89,    49,    49,   -69,    89,    82,     1,
      85,    98,   -69,   -69,   -69,   -69,   -69,   -69,    74,    67,
     -69,     1,   -69,    83,    -8,   -69,   -69,   -69,     7,    49,
      59,    97,    99,   101,   -69,    51,   -23,   -14,   -69,   -69,
     -69,    90,    86,    22,     1,   -69,   -69,    22,     1,   -69,
      80,    89,   -69,     1,   -69,    75,   -17,   -69,    22,    49,
     -69,    49,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     1,
       1,     1,   -69,     1,     1,     1,   -69,    22,    89,   -69,
     106,    77,   -69,   -69,    87,    83,    93,    79,   -69,   -69,
     111,    99,   101,   -69,   -23,   -23,   -69,   -69,   -69,   102,
      86,   113,     1,   -69,   -69,     1,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,    22,   103,   -69,    49,    91,   -69,   -69,
     -69,   -69,   -69
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     3,     0,     1,     2,     0,     5,     0,
       0,     0,    13,     0,     9,     0,     5,     0,     0,     0,
       5,     4,     0,    11,    10,     0,     0,     0,    15,     0,
       0,     0,    76,     0,     0,     0,    22,     0,     0,     0,
       0,     0,    16,    17,    18,    19,    20,    21,     0,     0,
      12,     0,    74,    32,    76,    67,    46,    45,     0,     0,
       0,     0,    38,    41,    42,     0,    57,    62,    64,    65,
      66,     0,    35,     0,     0,    23,     8,     7,     0,    14,
       0,     0,    30,    71,    63,     0,     0,    43,     0,     0,
      36,     0,    39,    53,    51,    50,    52,    48,    49,     0,
       0,     0,    54,     0,     0,     0,    58,     0,     0,    33,
       0,     0,     6,    24,    78,    32,    73,     0,    47,    68,
       0,    38,    41,    44,    57,    57,    61,    59,    60,    27,
      35,     0,     0,    75,    31,    71,    70,    69,    28,    37,
      40,    56,    55,     0,     0,    34,     0,     0,    72,    26,
      25,    29,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   128,    40,   -68,   -69,   -69,   114,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,    17,   -69,     5,   -34,
      13,    47,    15,    48,    78,   -69,   -37,   -67,     4,   -69,
     -69,    84,   -69,     6,   -69,   -29,   -69,   -69
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    10,    40,     3,    11,    14,    18,    31,    41,
      42,    43,   144,    44,    45,    46,    82,    47,   109,    61,
      90,    62,    92,    63,    64,    99,    65,   102,    66,   106,
      67,    68,    69,   117,   136,    70,    52,   133
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      48,    71,    75,     1,    53,   110,    54,    55,    72,   112,
      12,    13,    32,    55,    80,    93,    94,    95,    96,   100,
     120,     4,    86,   101,    97,    85,   103,    32,   119,   104,
      51,     5,    98,   105,     7,    33,    83,   111,    34,   129,
       8,   113,    35,    58,    48,    74,   116,     9,    48,    36,
      37,    74,   115,    38,    54,    55,    21,   141,   142,    48,
      25,    15,   123,    19,    54,    55,    16,    17,    23,    20,
      56,    57,    22,    39,    26,   149,    27,    28,    48,   130,
      56,    57,    29,    93,    94,    95,    96,    49,    30,    50,
      51,    58,    97,    59,    32,   147,    73,    76,   116,    60,
      98,    58,    77,    59,   124,   125,    79,   126,   127,   128,
      78,    88,   151,    81,    48,   107,   108,    89,    91,   114,
     118,   131,   119,   135,   137,   132,   138,   150,   143,   146,
     152,     6,   134,    24,   139,   145,   121,   140,    87,   122,
       0,   148,    84
};

static const yytype_int16 yycheck[] =
{
      29,    35,    39,     3,    33,    73,     5,     6,    37,    77,
      29,    30,     5,     6,    51,    32,    33,    34,    35,    42,
      88,     5,    59,    46,    41,    59,    40,     5,    45,    43,
      38,     0,    49,    47,     4,    13,    44,    74,    16,   107,
       7,    78,    20,    42,    73,    44,    83,     5,    77,    27,
      28,    44,    81,    31,     5,     6,    16,   124,   125,    88,
      20,     8,    99,     5,     5,     6,     4,    23,    48,     9,
      21,    22,    38,    51,     6,   143,    10,    39,   107,   108,
      21,    22,    11,    32,    33,    34,    35,     6,    38,    19,
      38,    42,    41,    44,     5,   132,    14,    12,   135,    50,
      49,    42,     4,    44,   100,   101,    39,   103,   104,   105,
      36,    14,   146,    30,   143,    25,    30,    18,    17,    39,
      45,    15,    45,    30,    45,    38,    15,    24,    26,    16,
      39,     3,   115,    19,   121,   130,    89,   122,    60,    91,
      -1,   135,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    56,     5,     0,    53,     4,     7,     5,
      54,    57,    29,    30,    58,     8,     4,    23,    59,     5,
       9,    54,    38,    48,    58,    54,     6,    10,    39,    11,
      38,    60,     5,    13,    16,    20,    27,    28,    31,    51,
      55,    61,    62,    63,    65,    66,    67,    69,    87,     6,
      19,    38,    88,    87,     5,     6,    21,    22,    42,    44,
      50,    71,    73,    75,    76,    78,    80,    82,    83,    84,
      87,    71,    87,    14,    44,    78,    12,     4,    36,    39,
      78,    30,    68,    44,    83,    71,    78,    76,    14,    18,
      72,    17,    74,    32,    33,    34,    35,    41,    49,    77,
      42,    46,    79,    40,    43,    47,    81,    25,    30,    70,
      55,    78,    55,    78,    39,    87,    78,    85,    45,    45,
      55,    73,    75,    78,    80,    80,    80,    80,    80,    55,
      87,    15,    38,    89,    68,    30,    86,    45,    15,    72,
      74,    79,    79,    26,    64,    70,    16,    78,    85,    55,
      24,    71,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    55,    55,    56,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    63,    64,    64,    65,    66,
      67,    68,    68,    69,    70,    70,    71,    72,    72,    73,
      74,    74,    75,    75,    76,    76,    76,    76,    77,    77,
      77,    77,    77,    77,    78,    79,    79,    79,    80,    81,
      81,    81,    81,    82,    82,    82,    83,    83,    83,    84,
      85,    85,    86,    86,    87,    88,    88,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     3,     0,     3,     2,    12,     2,
       3,     3,     6,     0,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     6,     2,     0,     5,     6,
       3,     3,     0,     3,     3,     0,     2,     3,     0,     2,
       3,     0,     1,     2,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     2,     3,     3,     0,     2,     2,
       2,     2,     0,     2,     1,     1,     1,     1,     3,     4,
       2,     0,     2,     0,     2,     4,     0,     3,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 37 "mini_1.y" /* yacc.c:1646  */
    {printf("program->function program\n");}
#line 1378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 40 "mini_1.y" /* yacc.c:1646  */
    {printf("program->epsilon\n");}
#line 1384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 43 "mini_1.y" /* yacc.c:1646  */
    {printf("decl->declaration SEMICOLON decl_loop\n");}
#line 1390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 46 "mini_1.y" /* yacc.c:1646  */
    {printf("decl_loop->epsilon\n");}
#line 1396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "mini_1.y" /* yacc.c:1646  */
    {printf("stmt_loop->statement SEMICOLON stmt_loop\n");}
#line 1402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 52 "mini_1.y" /* yacc.c:1646  */
    {printf("stmt_loop->statement SEMICOLON epsilon\n");}
#line 1408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "mini_1.y" /* yacc.c:1646  */
    {printf("decl_loop->FUNCTION IDENT SEMICOLON BEGIN_PARAMS decl_loop END_PARAMS BEGIN_LOCALS decl_loop END_LOCALS BEGIN_BODY stmt_loop END_BODY\n");}
#line 1414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 60 "mini_1.y" /* yacc.c:1646  */
    {printf("declaration->IDENT declaration_2\n");}
#line 1420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "mini_1.y" /* yacc.c:1646  */
    {printf("declaration_2->COMMA IDENT declaration_2\n");}
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "mini_1.y" /* yacc.c:1646  */
    {printf("declaration_2->COLON declaration_3 INTEGER\n");}
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 69 "mini_1.y" /* yacc.c:1646  */
    {printf("declaration_3->ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET declaration_4 OF\n");}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 72 "mini_1.y" /* yacc.c:1646  */
    {printf("declaration_3->epsilon\n");}
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 75 "mini_1.y" /* yacc.c:1646  */
    {printf("declaration_4->L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET\n");}
#line 1450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 78 "mini_1.y" /* yacc.c:1646  */
    {printf("declaration_4->epsilon\n");}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 81 "mini_1.y" /* yacc.c:1646  */
    {printf("statement->statement_1\n");}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 84 "mini_1.y" /* yacc.c:1646  */
    {printf("statement->statement_2\n");}
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 87 "mini_1.y" /* yacc.c:1646  */
    {printf("statement->statement_3\n");}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 90 "mini_1.y" /* yacc.c:1646  */
    {printf("statement->statement_4\n");}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 93 "mini_1.y" /* yacc.c:1646  */
    {printf("statement->statement_5\n");}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 96 "mini_1.y" /* yacc.c:1646  */
    {printf("statement->statement_6\n");}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 99 "mini_1.y" /* yacc.c:1646  */
    {printf("statement->CONTINUE\n");}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 102 "mini_1.y" /* yacc.c:1646  */
    {printf("statement->RETURN expression\n");}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 105 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_1->var ASSIGN expression\n");}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 108 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_2->IF bool_exp THEN stmt_loop statement_21 ENDIF\n");}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 111 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_21->ELSE stmt_loop\n");}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 114 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_21->epsilon\n");}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 117 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_3->WHILE bool_exp BEGINLOOP stmt_loop ENDLOOP\n");}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 120 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_4->DO BEGINLOOP stmt_loop ENDLOOP WHILE bool_exp\n");}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 123 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_5->READ var statement_51\n");}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 126 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_51->COMMA var statement_51\n");}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 129 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_51->epsilon\n");}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 132 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_6->WRITE var statement_61\n");}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_61->COMMA var statement_61\n");}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "mini_1.y" /* yacc.c:1646  */
    {printf("statement_61->epsilon\n");}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 144 "mini_1.y" /* yacc.c:1646  */
    {printf("bool_exp->rel_and_exp bool_exp2\n");}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 147 "mini_1.y" /* yacc.c:1646  */
    {printf("bool_exp2->OR rel_and_exp bool_exp2\n");}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 150 "mini_1.y" /* yacc.c:1646  */
    {printf("bool_exp2->epsilon\n");}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 153 "mini_1.y" /* yacc.c:1646  */
    {printf("rel_and_exp->relation_exp rel_and_exp2\n");}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 156 "mini_1.y" /* yacc.c:1646  */
    {printf("rel_and_exp2->AND relation_exp rel_and_exp2\n");}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 159 "mini_1.y" /* yacc.c:1646  */
    {printf("rel_and_exp2->epsilon\n");}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 162 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp->relation_exp_s\n");}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 165 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp->NOT relation_exp_s\n");}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 168 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp_s->expression comp expression\n");}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 171 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp_s->TRUE\n");}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 174 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp_s->FALSE\n");}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 177 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp_s->L_PAREN bool_exp R_PAREN\n");}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 180 "mini_1.y" /* yacc.c:1646  */
    {printf("comp->EQ\n");}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 183 "mini_1.y" /* yacc.c:1646  */
    {printf("comp->NEQ\n");}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 186 "mini_1.y" /* yacc.c:1646  */
    {printf("comp->LT\n");}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 189 "mini_1.y" /* yacc.c:1646  */
    {printf("comp->GT\n");}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 192 "mini_1.y" /* yacc.c:1646  */
    {printf("comp->LTE\n");}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 195 "mini_1.y" /* yacc.c:1646  */
    {printf("comp->GTE\n");}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 198 "mini_1.y" /* yacc.c:1646  */
    {printf("expression->mult_expr expression_2\n");}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 201 "mini_1.y" /* yacc.c:1646  */
    {printf("expression_2->ADD mult_expr expression_2\n");}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 204 "mini_1.y" /* yacc.c:1646  */
    {printf("expression_2->SUB mult_expr expression_2\n");}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 207 "mini_1.y" /* yacc.c:1646  */
    {printf("expression_2->epsilon\n");}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 210 "mini_1.y" /* yacc.c:1646  */
    {printf("mult_expr->term mult_expr_2\n");}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 213 "mini_1.y" /* yacc.c:1646  */
    {printf("mult_expr_2->MULT mult_expr\n");}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 216 "mini_1.y" /* yacc.c:1646  */
    {printf("mult_expr_2->DIV mult_expr\n");}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 219 "mini_1.y" /* yacc.c:1646  */
    {printf("mult_expr_2->MOD mult_expr\n");}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 222 "mini_1.y" /* yacc.c:1646  */
    {printf("mult_expr_2->epsilon\n");}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 225 "mini_1.y" /* yacc.c:1646  */
    {printf("term->SUB term_2\n");}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 228 "mini_1.y" /* yacc.c:1646  */
    {printf("term->term_2\n");}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 231 "mini_1.y" /* yacc.c:1646  */
    {printf("term->term_3\n");}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 234 "mini_1.y" /* yacc.c:1646  */
    {printf("term_2->var\n");}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 237 "mini_1.y" /* yacc.c:1646  */
    {printf("term_2->NUMBER\n");}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 240 "mini_1.y" /* yacc.c:1646  */
    {printf("term_2->L_PAREN expression R_PAREN\n");}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 243 "mini_1.y" /* yacc.c:1646  */
    {printf("term_3->IDENT L_PAREN term_31 R_PAREN\n");}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 246 "mini_1.y" /* yacc.c:1646  */
    {printf("term_31->expression term_32\n");}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 249 "mini_1.y" /* yacc.c:1646  */
    {printf("term_31->epsilon\n");}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 252 "mini_1.y" /* yacc.c:1646  */
    {printf("term_32->COMMA term_31\n");}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 255 "mini_1.y" /* yacc.c:1646  */
    {printf("term_32->epsilon\n");}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 258 "mini_1.y" /* yacc.c:1646  */
    {printf("var->IDENT var_2\n");}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 261 "mini_1.y" /* yacc.c:1646  */
    {printf("var_2->L_SQUARE_BRACKET expression R_SQUARE_BRACKET var_3\n");}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 264 "mini_1.y" /* yacc.c:1646  */
    {printf("var_2->epsilon\n");}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 267 "mini_1.y" /* yacc.c:1646  */
    {printf("L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 270 "mini_1.y" /* yacc.c:1646  */
    {printf("var_3->epsilon\n");}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1838 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 276 "mini_1.y" /* yacc.c:1906  */


void yyerror(const char * msg){
	printf("Error found: %s at \"%s\" on line%d\n", msg, yytext, lineNum);
	exit(1);
}


int main(int argc, char ** argv)
{
	if(argc >= 2)
	{
		yyin = fopen(argv[1],"r");
		if(yyin == NULL)
		{
			yyin = stdin;
		}
	}
	else
	{
		yyin = stdin;
	}

	yyparse(); //calls yylex()

	return 1;
}
	
