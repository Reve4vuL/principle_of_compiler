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
#line 1 "parser.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include<string>
int yylex(void);
void yyerror(const char *);

#line 74 "y.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    C_int = 259,
    C_float = 260,
    ADDASSIGN = 261,
    SUBASSIGN = 262,
    MULASSIGN = 263,
    DIVASSIGN = 264,
    INT = 265,
    FLOAT = 266,
    IF = 267,
    ELSE = 268,
    FOR = 269,
    WHILE = 270,
    CASE = 271,
    DO = 272,
    CONTINUE = 273,
    BREAK = 274,
    RETURN = 275,
    SWITCH = 276,
    OR = 277,
    AND = 278,
    EQ = 279,
    NE = 280,
    BT = 281,
    LT = 282,
    INC = 283,
    DEC = 284
  };
#endif
/* Tokens.  */
#define ID 258
#define C_int 259
#define C_float 260
#define ADDASSIGN 261
#define SUBASSIGN 262
#define MULASSIGN 263
#define DIVASSIGN 264
#define INT 265
#define FLOAT 266
#define IF 267
#define ELSE 268
#define FOR 269
#define WHILE 270
#define CASE 271
#define DO 272
#define CONTINUE 273
#define BREAK 274
#define RETURN 275
#define SWITCH 276
#define OR 277
#define AND 278
#define EQ 279
#define NE 280
#define BT 281
#define LT 282
#define INC 283
#define DEC 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 183 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   638

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  253

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,     2,     2,    49,    50,     2,
      39,    40,    26,    25,    29,    27,    38,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,    30,
      36,    24,    35,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    31,     2,    32,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    43,
      44,    45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    22,    22,    25,    28,    31,    37,    40,    43,    46,
      49,    52,    55,    61,    64,    70,    73,    76,    79,    85,
      88,    91,    94,   100,   103,   109,   112,   115,   118,   124,
     127,   130,   137,   140,   143,   146,   149,   155,   158,   161,
     167,   170,   177,   180,   186,   189,   195,   198,   204,   207,
     213,   216,   219,   222,   225,   231,   234,   240,   246,   249,
     255,   258,   264,   267,   273,   276,   283,   286,   293,   296,
     304,   307,   313,   316,   319,   322,   325,   328,   331,   337,
     340,   349,   355,   358,   364,   367,   370,   376,   379,   385,
     388,   394,   397,   400,   406,   409,   412,   415,   418,   421,
     424,   427,   430,   436,   439,   442,   448,   451,   457,   460,
     463,   466,   469,   472,   478,   481,   487,   490,   493,   496,
     502,   505,   511,   514,   520,   523,   529,   532,   535,   541,
     544,   547,   550,   556,   559,   562,   565,   571,   574,   580,
     583,   589,   592,   595,   598
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "C_int", "C_float", "ADDASSIGN",
  "SUBASSIGN", "MULASSIGN", "DIVASSIGN", "INT", "FLOAT", "IF", "ELSE",
  "FOR", "WHILE", "CASE", "DO", "CONTINUE", "BREAK", "RETURN", "SWITCH",
  "OR", "AND", "'='", "'+'", "'*'", "'-'", "'/'", "','", "';'", "'['",
  "']'", "'{'", "'}'", "'>'", "'<'", "'!'", "'.'", "'('", "')'", "'?'",
  "':'", "EQ", "NE", "BT", "LT", "INC", "DEC", "'%'", "'&'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "and_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "type_specifier", "specifier_qualifier_list", "declarator",
  "direct_declarator", "pointer", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    61,    43,    42,    45,    47,    44,
      59,    91,    93,   123,   125,    62,    60,    33,    46,    40,
      41,    63,    58,   279,   280,   281,   282,   283,   284,    37,
      38
};
# endif

#define YYPACT_NINF -118

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-118)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      52,  -118,  -118,  -118,   -16,   104,  -118,    72,   229,   128,
     135,    31,    33,  -118,  -118,  -118,    28,  -118,   213,  -118,
     139,  -118,   211,  -118,    72,  -118,   128,   411,    37,   135,
    -118,  -118,  -118,   104,  -118,   448,  -118,   128,     9,  -118,
    -118,    32,    57,    61,   575,   361,   121,   134,   463,   105,
    -118,  -118,  -118,  -118,  -118,  -118,   392,   590,   590,  -118,
     154,   189,   575,  -118,     3,    76,   172,   208,   119,   156,
      64,  -118,  -118,   227,  -118,  -118,  -118,   250,   287,  -118,
    -118,  -118,  -118,   165,  -118,  -118,  -118,  -118,  -118,  -118,
     159,  -118,  -118,    27,   179,   204,  -118,   107,  -118,   448,
    -118,  -118,  -118,   361,   575,   479,   575,   205,   234,  -118,
    -118,  -118,   243,   575,   117,   229,   114,   223,   575,  -118,
    -118,   575,   271,   494,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,   575,  -118,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,  -118,
    -118,   324,  -118,  -118,  -118,   519,    54,  -118,    43,  -118,
     137,  -118,   229,   282,  -118,  -118,    20,  -118,   125,   479,
     141,   361,   247,  -118,   142,  -118,  -118,   579,   173,  -118,
     575,   -15,  -118,  -118,   170,  -118,  -118,  -118,  -118,  -118,
       3,     3,    76,    76,    76,    76,   172,   172,   208,   119,
     156,    70,  -118,  -118,  -118,   256,  -118,   260,   269,   137,
     544,    16,  -118,  -118,   408,  -118,   361,   559,   361,  -118,
     575,   361,  -118,  -118,   575,  -118,   575,  -118,  -118,  -118,
    -118,   278,  -118,   275,  -118,  -118,   298,   361,   180,  -118,
     206,  -118,  -118,  -118,  -118,  -118,   361,  -118,   361,   286,
    -118,  -118,  -118
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    72,    66,    67,    79,     0,   140,     0,    60,     0,
      71,     0,     0,   137,   139,    80,     0,    58,     0,    62,
      64,    61,     0,   120,     0,   144,     0,     0,     0,    70,
       1,   138,    73,     0,    59,     0,   142,     0,     2,     3,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    19,    21,   124,   116,    22,     0,     0,     0,     6,
      15,    23,     0,    25,    29,    32,    37,    40,    42,    44,
      46,    48,    55,     0,   122,   108,   109,     0,     0,   110,
     111,   112,   113,    64,   121,   143,     2,    75,    23,    57,
       0,    87,    78,    86,     0,    81,    82,     0,    63,     0,
     103,    65,   141,     0,     0,     0,     0,     0,     0,   133,
     134,   135,     0,     0,     0,    69,    89,     0,     0,    16,
      17,     0,     0,     0,    11,    12,    54,    53,    51,    52,
      50,     0,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     118,     0,   117,   123,    74,     0,     0,    84,    91,    85,
      92,    76,     0,     0,    77,   106,     0,   114,     0,     0,
       0,     0,     0,   136,     0,     5,    68,     0,    91,    90,
       0,     0,    10,     8,     0,    13,    49,    26,    27,    28,
      30,    31,    34,    33,    35,    36,    38,    39,    41,    43,
      45,     0,    56,   119,    95,     0,    99,     0,     0,    93,
       0,     0,    83,    88,     0,   104,     0,     0,     0,   115,
       0,     0,    24,     7,     0,     9,     0,    96,   100,    94,
      97,     0,   101,     0,   105,   107,   126,     0,     0,   129,
       0,   128,    14,    47,    98,   102,     0,   131,     0,     0,
     127,   132,   130
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,  -118,  -118,   -20,  -118,   -46,   145,   155,   136,
     174,   177,   184,  -118,   -26,    10,  -118,   -37,   -23,    13,
       0,  -118,   290,   -36,   210,    -1,    -6,    11,   -25,  -118,
     157,  -118,  -118,   -10,  -117,   -77,  -118,   -43,  -118,   122,
      75,   254,   -96,  -118,  -118,  -118,  -118,   320,  -118
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,    60,   184,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,   131,    73,    90,    23,
      24,    18,    19,     8,   116,     9,    10,    11,   207,    95,
      96,    97,   117,   208,   160,   101,   166,    74,    75,    76,
      26,    78,    79,    80,    81,    82,    12,    13,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       7,    89,   108,    94,    16,    29,    20,    88,    21,   169,
       4,   112,     7,     6,   148,    15,   132,   223,    89,   114,
     115,   107,   165,    83,    88,     6,     2,     3,    93,   133,
       1,   134,    83,    30,     1,   153,     1,   119,   120,    84,
      91,   209,    88,     2,     3,   100,     1,     2,     3,   214,
      84,   103,   135,     4,   215,     1,   232,     1,   155,     4,
     167,   209,     2,     3,     2,     3,   156,   168,    32,   170,
       5,   104,     5,   217,   155,     1,   174,    92,     4,   115,
       4,   114,   156,   159,   181,   155,   146,   187,   188,   189,
      84,     5,   157,   156,   206,    37,   105,    77,     4,   148,
     106,   136,    17,   137,   158,   147,   179,     1,   153,   100,
     201,     5,   226,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,   178,   219,    89,
       4,    25,   205,   185,   222,    88,   163,   235,     2,     3,
       4,   186,    36,     5,   113,   155,   148,   164,    85,     2,
       3,   109,    29,   177,   148,    16,    93,   175,   202,   102,
      88,    22,    93,    35,   110,   216,    27,   158,   210,   144,
     148,   148,    22,   236,    28,   239,   211,    93,   241,   145,
     238,   218,   221,   240,    89,   121,   233,   231,   178,    35,
      88,   154,   122,   123,   247,   126,   127,   128,   129,   224,
     243,   124,   125,   250,   155,   251,    88,   138,   139,   148,
     225,    93,   177,   130,    38,    39,    40,   140,   141,   161,
     248,     2,     3,    41,   100,    42,    43,    44,    45,    46,
      47,    48,    49,   162,   242,   148,    50,    51,    52,     2,
       3,    53,    33,    34,    22,    54,   249,   171,    55,   172,
      56,   142,   143,    38,    39,    40,   148,   149,    57,    58,
       2,     3,    41,   180,    42,    43,    44,    45,    46,    47,
      48,    49,   148,   173,   182,    50,    51,    52,   196,   197,
      53,   190,   191,    22,   150,   213,   220,    55,   227,    56,
      38,    39,    40,   192,   193,   194,   195,    57,    58,    41,
     228,    42,    43,    44,    45,    46,    47,    48,    49,   229,
     244,   246,    50,    51,    52,   245,   252,    53,   198,   212,
      22,   152,   199,    98,    55,   176,    56,    38,    39,    40,
     200,   151,    31,     0,    57,    58,    41,     0,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,    50,
      51,    52,     0,     0,    53,     0,     0,    22,   203,     0,
       0,    55,     0,    56,    38,    39,    40,     0,     0,     0,
       0,    57,    58,    41,     0,    42,    43,    44,    45,    46,
      47,    48,    49,     0,     0,     0,    50,    51,    52,     0,
       0,    53,     0,     0,    22,    86,    39,    40,    55,     0,
      56,     0,     2,     3,     0,     0,     0,     0,    57,    58,
       0,    86,    39,    40,    86,    39,    40,    50,    51,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,     0,    50,    51,    52,    50,    51,    52,    57,
      58,    99,   234,    87,     0,    55,     0,    56,    55,     0,
      56,    86,    39,    40,     0,    57,    58,     0,    57,    58,
       0,     0,     0,     0,     0,     0,    86,    39,    40,     0,
       0,     0,     0,    50,    51,    52,     0,     0,     0,     0,
       0,    99,    86,    39,    40,    55,     0,    56,    50,    51,
      52,     0,     0,   111,     0,    57,    58,    86,    39,    40,
      55,     0,    56,     0,    50,    51,    52,     0,     0,    53,
      57,    58,     0,     0,     0,     0,    55,     0,    56,    50,
      51,    52,    86,    39,    40,     0,    57,    58,     0,     0,
       0,    55,     0,    56,   183,     0,     0,     0,     0,     0,
       0,    57,    58,     0,    50,    51,    52,    86,    39,    40,
       0,   204,     0,     0,     0,     0,    55,     0,    56,     0,
       0,     0,    86,    39,    40,     0,    57,    58,     0,    50,
      51,    52,     0,     0,     0,     0,   230,     0,    86,    39,
      40,    55,     0,    56,    50,    51,    52,     0,     0,     2,
       3,    57,    58,    86,    39,    40,    55,     0,    56,   237,
      50,    51,    52,     0,     0,     4,    57,    58,     0,     0,
     155,     0,    55,     0,    56,    50,    51,    52,   177,   206,
       0,     0,    57,    58,     0,     0,     0,    55,     0,   118,
       0,     0,     0,     0,     0,     0,     0,    57,    58
};

static const yytype_int16 yycheck[] =
{
       0,    27,    45,    28,     5,    11,     7,    27,     8,   105,
      26,    48,    12,     0,    29,     4,    62,    32,    44,    56,
      56,    44,    99,    24,    44,    12,    10,    11,    28,    26,
       3,    28,    33,     0,     3,    78,     3,    57,    58,    26,
       3,   158,    62,    10,    11,    35,     3,    10,    11,    29,
      37,    42,    49,    26,    34,     3,    40,     3,    31,    26,
     103,   178,    10,    11,    10,    11,    39,   104,    40,   106,
      39,    39,    39,   169,    31,     3,   113,    40,    26,   115,
      26,   118,    39,    93,   121,    31,    22,   133,   134,   135,
      77,    39,    93,    39,    40,    20,    39,    22,    26,    29,
      39,    25,    30,    27,    93,    41,   116,     3,   151,    99,
     147,    39,    42,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   116,   171,   155,
      26,     9,   155,   123,   180,   155,    29,   214,    10,    11,
      26,   131,    20,    39,    39,    31,    29,    40,    26,    10,
      11,    30,   158,    39,    29,   156,   156,    40,   148,    37,
     180,    33,   162,    24,    30,    40,    31,   156,    31,    50,
      29,    29,    33,   216,    39,   218,    39,   177,   221,    23,
     217,    40,    40,   220,   210,    31,   211,   210,   177,    24,
     210,    32,    38,    39,   237,     6,     7,     8,     9,    29,
     226,    47,    48,   246,    31,   248,   226,    35,    36,    29,
      40,   211,    39,    24,     3,     4,     5,    45,    46,    40,
      40,    10,    11,    12,   214,    14,    15,    16,    17,    18,
      19,    20,    21,    29,   224,    29,    25,    26,    27,    10,
      11,    30,    29,    30,    33,    34,    40,    42,    37,    15,
      39,    43,    44,     3,     4,     5,    29,    30,    47,    48,
      10,    11,    12,    40,    14,    15,    16,    17,    18,    19,
      20,    21,    29,    30,     3,    25,    26,    27,   142,   143,
      30,   136,   137,    33,    34,     3,    39,    37,    32,    39,
       3,     4,     5,   138,   139,   140,   141,    47,    48,    12,
      40,    14,    15,    16,    17,    18,    19,    20,    21,    40,
      32,    13,    25,    26,    27,    40,    30,    30,   144,   162,
      33,    34,   145,    33,    37,   115,    39,     3,     4,     5,
     146,    77,    12,    -1,    47,    48,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    25,
      26,    27,    -1,    -1,    30,    -1,    -1,    33,    34,    -1,
      -1,    37,    -1,    39,     3,     4,     5,    -1,    -1,    -1,
      -1,    47,    48,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    25,    26,    27,    -1,
      -1,    30,    -1,    -1,    33,     3,     4,     5,    37,    -1,
      39,    -1,    10,    11,    -1,    -1,    -1,    -1,    47,    48,
      -1,     3,     4,     5,     3,     4,     5,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    -1,    25,    26,    27,    25,    26,    27,    47,
      48,    33,    34,    32,    -1,    37,    -1,    39,    37,    -1,
      39,     3,     4,     5,    -1,    47,    48,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,     3,     4,     5,    37,    -1,    39,    25,    26,
      27,    -1,    -1,    30,    -1,    47,    48,     3,     4,     5,
      37,    -1,    39,    -1,    25,    26,    27,    -1,    -1,    30,
      47,    48,    -1,    -1,    -1,    -1,    37,    -1,    39,    25,
      26,    27,     3,     4,     5,    -1,    47,    48,    -1,    -1,
      -1,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    25,    26,    27,     3,     4,     5,
      -1,    32,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      -1,    -1,     3,     4,     5,    -1,    47,    48,    -1,    25,
      26,    27,    -1,    -1,    -1,    -1,    32,    -1,     3,     4,
       5,    37,    -1,    39,    25,    26,    27,    -1,    -1,    10,
      11,    47,    48,     3,     4,     5,    37,    -1,    39,    40,
      25,    26,    27,    -1,    -1,    26,    47,    48,    -1,    -1,
      31,    -1,    37,    -1,    39,    25,    26,    27,    39,    40,
      -1,    -1,    47,    48,    -1,    -1,    -1,    37,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    10,    11,    26,    39,    70,    71,    74,    76,
      77,    78,    97,    98,    99,    78,    76,    30,    72,    73,
      76,    71,    33,    70,    71,    90,    91,    31,    39,    77,
       0,    98,    40,    29,    30,    24,    90,    91,     3,     4,
       5,    12,    14,    15,    16,    17,    18,    19,    20,    21,
      25,    26,    27,    30,    34,    37,    39,    47,    48,    52,
      53,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    68,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    76,    70,    90,     3,    32,    55,    65,
      69,     3,    40,    71,    79,    80,    81,    82,    73,    33,
      66,    86,    90,    42,    39,    39,    39,    69,    88,    30,
      30,    30,    68,    39,    68,    74,    75,    83,    39,    55,
      55,    31,    38,    39,    47,    48,     6,     7,     8,     9,
      24,    67,    57,    26,    28,    49,    25,    27,    35,    36,
      45,    46,    43,    44,    50,    23,    22,    41,    29,    30,
      34,    92,    34,    88,    32,    31,    39,    76,    78,    84,
      85,    40,    29,    29,    40,    86,    87,    88,    68,    93,
      68,    42,    15,    30,    68,    40,    75,    39,    78,    84,
      40,    68,     3,    40,    54,    66,    66,    57,    57,    57,
      58,    58,    59,    59,    59,    59,    60,    60,    61,    62,
      63,    68,    66,    34,    32,    69,    40,    79,    84,    85,
      31,    39,    81,     3,    29,    34,    40,    93,    40,    88,
      39,    40,    57,    32,    29,    40,    42,    32,    40,    40,
      32,    69,    40,    79,    34,    86,    88,    40,    68,    88,
      68,    88,    66,    65,    32,    40,    13,    88,    40,    40,
      88,    88,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    54,    54,    55,    55,    55,    55,    56,
      56,    56,    56,    57,    57,    58,    58,    58,    58,    59,
      59,    59,    60,    60,    60,    60,    60,    61,    61,    61,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    67,    67,    67,    68,    68,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    77,    78,
      78,    79,    80,    80,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    94,    94,    95,
      95,    95,    95,    96,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     2,     2,     1,     3,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     3,     1,     3,     1,     1,     2,     1,
       2,     1,     1,     3,     4,     3,     4,     4,     3,     1,
       2,     1,     1,     3,     2,     2,     1,     1,     3,     1,
       2,     1,     1,     2,     3,     2,     3,     3,     4,     2,
       3,     3,     4,     1,     3,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     4,     2,     3,     3,     4,
       1,     2,     1,     2,     1,     2,     5,     7,     5,     5,
       7,     6,     7,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     3,     3,     2
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
#line 22 "parser.y" /* yacc.c:1646  */
    {
	printf("\tprimary_expression->ID\n");
}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 25 "parser.y" /* yacc.c:1646  */
    {
	printf("\tprimary_expression->C_int\n");
}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 28 "parser.y" /* yacc.c:1646  */
    {
	printf("\tprimary_expression->C_float\n");
}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 31 "parser.y" /* yacc.c:1646  */
    {
	printf("\tprimary_expression->'(' expression ')'\n");
}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 37 "parser.y" /* yacc.c:1646  */
    {
	printf("\tpostfix_expression->primary_expression\n");
}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 40 "parser.y" /* yacc.c:1646  */
    {
	printf("\tpostfix_expression->postfix_expression '[' expression ']'\n");
}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 43 "parser.y" /* yacc.c:1646  */
    {
	printf("\tpostfix_expression->postfix_expression '(' ')'\n");
}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "parser.y" /* yacc.c:1646  */
    {
	printf("\tpostfix_expression->postfix_expression '(' argument_expression_list ')'\n");
}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 49 "parser.y" /* yacc.c:1646  */
    {
	printf("\tpostfix_expression->postfix_expression '.' ID\n");
}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "parser.y" /* yacc.c:1646  */
    {
	printf("\tpostfix_expression->postfix_expression INC\n");
}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 55 "parser.y" /* yacc.c:1646  */
    {
	printf("\tpostfix_expression->postfix_expression DEC\n");
}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "parser.y" /* yacc.c:1646  */
    {
	printf("\targument_expression_list->assignment_expression\n");
}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 64 "parser.y" /* yacc.c:1646  */
    {
	printf("\targument_expression_list->argument_expression_list ',' assignment_expression\n");
}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 70 "parser.y" /* yacc.c:1646  */
    {
	printf("\tunary_expression->postfix_expression\n");
}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 73 "parser.y" /* yacc.c:1646  */
    {
	printf("\tunary_expression->INC unary_expression\n");
}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 76 "parser.y" /* yacc.c:1646  */
    {
	printf("\tunary_expression->DEC unary_expression\n");
}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 79 "parser.y" /* yacc.c:1646  */
    {
	printf("\tunary_expression->unary_operator cast_expression\n");
}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 85 "parser.y" /* yacc.c:1646  */
    {
	printf("\tunary_operator->'*'\n");
}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 88 "parser.y" /* yacc.c:1646  */
    {
	printf("\tunary_operator->'+'\n");
}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 91 "parser.y" /* yacc.c:1646  */
    {
	printf("\tunary_operator->'-'\n");
}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "parser.y" /* yacc.c:1646  */
    {
	printf("\tunary_operator->'|'\n");
}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 100 "parser.y" /* yacc.c:1646  */
    {
	printf("\tcast_expression->unary_expression\n");
}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 103 "parser.y" /* yacc.c:1646  */
    {
	printf("\tcast_expression->'(' type_name ')' cast_expression\n");
}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "parser.y" /* yacc.c:1646  */
    {
	printf("\tmultiplicative_expression->cast_expression\n");
}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 112 "parser.y" /* yacc.c:1646  */
    {
	printf("\tmultiplicative_expression->multiplicative_expression '*' cast_expression\n");
}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "parser.y" /* yacc.c:1646  */
    {
	printf("\tmultiplicative_expression->multiplicative_expression '*' cast_expression\n");
}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 118 "parser.y" /* yacc.c:1646  */
    {
	printf("\tmultiplicative_expression->multiplicative_expression '*' cast_expression\n");
}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 124 "parser.y" /* yacc.c:1646  */
    {
	printf("\tadditive_expression->multiplicative_expression\n");
}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 127 "parser.y" /* yacc.c:1646  */
    {
	printf("\tadditive_expression->additive_expression '+' multiplicative_expression\n");
}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 130 "parser.y" /* yacc.c:1646  */
    {
	printf("\tadditive_expression->additive_expression '+' multiplicative_expression\n");
}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 137 "parser.y" /* yacc.c:1646  */
    {
	printf("\trelational_expression->additive_expression\n");
}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 140 "parser.y" /* yacc.c:1646  */
    {
	printf("\trelational_expression->relational_expression '<' additive_expression\n");
}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 143 "parser.y" /* yacc.c:1646  */
    {
	printf("\trelational_expression->relational_expression '>' additive_expression\n");
}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 146 "parser.y" /* yacc.c:1646  */
    {
	printf("\trelational_expression->relational_expression BT additive_expression\n");
}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 149 "parser.y" /* yacc.c:1646  */
    {
	printf("\trelational_expression->relational_expression LT additive_expression\n");
}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 155 "parser.y" /* yacc.c:1646  */
    {
	printf("\tequality_expression->relational_expression\n");
}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 158 "parser.y" /* yacc.c:1646  */
    {
	printf("\tequality_expression->equality_expression EQ relational_expression\n");
}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 161 "parser.y" /* yacc.c:1646  */
    {
	printf("\tequality_expression->equality_expression NE relational_expression\n");
}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 167 "parser.y" /* yacc.c:1646  */
    {
	printf("\tand_expression->equality_expression\n");
}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 170 "parser.y" /* yacc.c:1646  */
    {
	printf("\tand_expression->and_expression '&' equality_expression\n");
}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 177 "parser.y" /* yacc.c:1646  */
    {
	printf("\tlogical_and_expression->and_expression\n");
}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 180 "parser.y" /* yacc.c:1646  */
    {
	printf("\tlogical_and_expression->logical_and_expression AND and_expression\n");
}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 186 "parser.y" /* yacc.c:1646  */
    {
	printf("\tlogical_or_expression->logical_and_expression\n");
}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 189 "parser.y" /* yacc.c:1646  */
    {
	printf("\tlogical_or_expression->logical_or_expression OR logical_and_expression\n");
}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 195 "parser.y" /* yacc.c:1646  */
    {
	printf("\tconditional_expression->logical_or_expression\n");
}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 198 "parser.y" /* yacc.c:1646  */
    {
	printf("\tconditional_expression->logical_or_expression '?' expression ':' conditional_expression\n");
}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 204 "parser.y" /* yacc.c:1646  */
    {
	printf("\tassignment_expression->conditional_expression\n");
}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 207 "parser.y" /* yacc.c:1646  */
    {
	printf("\tassignment_expression->unary_expression assignment_operator assignment_expression\n");
}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 213 "parser.y" /* yacc.c:1646  */
    {
	printf("\tassignment_operator->'='\n");
}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 216 "parser.y" /* yacc.c:1646  */
    {
	printf("\tassignment_operator->MULASSIGN\n");
}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 219 "parser.y" /* yacc.c:1646  */
    {
	printf("\tassignment_operator->DIVASSIGN\n");
}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 222 "parser.y" /* yacc.c:1646  */
    {
	printf("\tassignment_operator->SUBASSIGN\n");
}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 225 "parser.y" /* yacc.c:1646  */
    {
	printf("\tassignment_operator->ADDASSIGN\n");
}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 231 "parser.y" /* yacc.c:1646  */
    {
	printf("\texpression->assignment_expression\n");
}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 234 "parser.y" /* yacc.c:1646  */
    {
	printf("\texpression->expression ',' assignment_expression\n");
}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 240 "parser.y" /* yacc.c:1646  */
    {
	printf("\tconstant_expression->conditional_expression\n");
}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 246 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdeclaration->declaration_specifiers ';'\n");
}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 249 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdeclaration->declaration_specifiers init_declarator_list ';'\n");
}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 255 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdeclaration_specifiers->type_specifier\n");
}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 258 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdeclaration_specifiers->type_specifier declaration_specifiers\n");
}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 264 "parser.y" /* yacc.c:1646  */
    {
	printf("\tinit_declarator_list->init_declarator\n");
}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 267 "parser.y" /* yacc.c:1646  */
    {
	printf("\tinit_declarator_list->init_declarator_list ',' init_declarator\n");
}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 273 "parser.y" /* yacc.c:1646  */
    {
	printf("\tinit_declarator->declarator\n");
}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 276 "parser.y" /* yacc.c:1646  */
    {
	printf("\tinit_declarator->declarator '=' initializer\n");
}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 283 "parser.y" /* yacc.c:1646  */
    {
	printf("\ttype_specifier->INT\n");
}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 286 "parser.y" /* yacc.c:1646  */
    {
	printf("\ttype_specifier->FLOAT\n");
}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 293 "parser.y" /* yacc.c:1646  */
    {
	printf("\tspecifier_qualifier_list->type_specifier specifier_qualifier_list\n");
}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 296 "parser.y" /* yacc.c:1646  */
    {
	printf("\tspecifier_qualifier_list->type_specifier\n");
}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 304 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdeclarator->pointer direct_declarator\n");
}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 307 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdeclarator->direct_declarator\n");
}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 313 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_declarator->ID\n");
}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 316 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_declarator->'(' declarator ')'\n");
}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 319 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_declarator->direct_declarator '[' constant_expression ']'\n");
}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 322 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_declarator->direct_declarator '[' ']'\n");
}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 325 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_declarator->direct_declarator '(' parameter_type_list ')\n");
}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 328 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_declarator->direct_declarator '(' identifier_list ')'\n");
}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 331 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_declarator->direct_declarator '(' ')'\n");
}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 337 "parser.y" /* yacc.c:1646  */
    {
	printf("\tpointer->'*'\n");
}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 340 "parser.y" /* yacc.c:1646  */
    {
	printf("\tpointer->'*' pointer\n");
}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 349 "parser.y" /* yacc.c:1646  */
    {
	printf("\tparameter_type_list->parameter_list\n");
}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 355 "parser.y" /* yacc.c:1646  */
    {
	printf("\tparameter_list->parameter_declaration\n");
}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 358 "parser.y" /* yacc.c:1646  */
    {
	printf("\tparameter_type_list->parameter_list ',' parameter_declaration\n");
}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 364 "parser.y" /* yacc.c:1646  */
    {
	printf("\tparameter_declaration->declaration_specifiers declarator\n");
}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 367 "parser.y" /* yacc.c:1646  */
    {
	printf("\tparameter_declaration->declaration_specifiers abstract_declarator\n");
}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 370 "parser.y" /* yacc.c:1646  */
    {
	printf("\tparameter_declaration->declaration_specifiers\n");
}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 376 "parser.y" /* yacc.c:1646  */
    {
	printf("\tidentifier_list->ID\n");
}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 379 "parser.y" /* yacc.c:1646  */
    {
	printf("\tidentifier_list->identifier_list ',' ID\n");
}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 385 "parser.y" /* yacc.c:1646  */
    {
	printf("\ttype_name->specifier_qualifier_list\n");
}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 388 "parser.y" /* yacc.c:1646  */
    {
	printf("\ttype_name->specifier_qualifier_list abstract_declarator\n");
}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 394 "parser.y" /* yacc.c:1646  */
    {
	printf("\tabstract_declarator->pointer\n");
}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 397 "parser.y" /* yacc.c:1646  */
    {
	printf("\tabstract_declarator->direct_abstract_declarator\n");
}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 400 "parser.y" /* yacc.c:1646  */
    {
	printf("\tabstract_declarator->pointer direct_abstract_declarator\n");
}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 406 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_abstract_declarator->'(' abstract_declarator ')'\n");
}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 409 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_abstract_declarator->'[' ']'\n");
}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 412 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_abstract_declarator->'[' constant_expression ']'\n");
}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 415 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_abstract_declarator->direct_abstract_declarator '[' ']'\n");
}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 418 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_abstract_declarator->direct_abstract_declarator '[' constant_expression ']'\n");
}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 421 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_abstract_declarator->'(' ')'\n");
}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 424 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_abstract_declarator->'(' parameter_type_list ')'\n");
}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 427 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_abstract_declarator->direct_abstract_declarator '(' ')'\n");
}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 430 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdirect_abstract_declarator->direct_abstract_declarator '(' parameter_type_list ')'\n");
}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 436 "parser.y" /* yacc.c:1646  */
    {
	printf("\tinitializer->assignment_expression\n");
}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 439 "parser.y" /* yacc.c:1646  */
    {
	printf("\tinitializer->'{' initializer_list '}'\n");
}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 442 "parser.y" /* yacc.c:1646  */
    {
	printf("\tinitializer->'{' initializer_list ',' '}'\n");
}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 448 "parser.y" /* yacc.c:1646  */
    {
	printf("\tinitializer_list->initializer\n");
}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 451 "parser.y" /* yacc.c:1646  */
    {
	printf("\tinitializer_list->initializer_list ',' initializer\n");
}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 457 "parser.y" /* yacc.c:1646  */
    {
	printf("\tstatement->labeled_statement\n");
}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 460 "parser.y" /* yacc.c:1646  */
    {
	printf("\tstatement->compound_statement\n");
}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 463 "parser.y" /* yacc.c:1646  */
    {
	printf("\tstatement->expression_statement\n");
}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 466 "parser.y" /* yacc.c:1646  */
    {
	printf("\tstatement->selection_statement\n");
}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 469 "parser.y" /* yacc.c:1646  */
    {
	printf("\tstatement->iteration_statement\n");
}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 472 "parser.y" /* yacc.c:1646  */
    {
	printf("\tstatement->jump_statement\n");
}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 478 "parser.y" /* yacc.c:1646  */
    {
	printf("\tlabeled_statement->ID ':' statement\n");
}
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 481 "parser.y" /* yacc.c:1646  */
    {
	printf("\tlabeled_statement->CASE constant_expression ':' statement\n");
}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 487 "parser.y" /* yacc.c:1646  */
    {
	printf("\tcompound_statement->'{' '}'\n");
}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 490 "parser.y" /* yacc.c:1646  */
    {
	printf("\tcompound_statement->'{' statement_list '}'\n");
}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 493 "parser.y" /* yacc.c:1646  */
    {
	printf("\tcompound_statement->'{' declaration_list '}'\n");
}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 496 "parser.y" /* yacc.c:1646  */
    {
	printf("\tcompound_statement->'{' declaration_list statement_list '}'\n");
}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 502 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdeclaration_list->declaration\n");
}
#line 2474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 505 "parser.y" /* yacc.c:1646  */
    {
	printf("\tdeclaration_list->declaration_list declaration\n");
}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 511 "parser.y" /* yacc.c:1646  */
    {
	printf("\tstatement_list->statement\n");
}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 514 "parser.y" /* yacc.c:1646  */
    {
	printf("\tstatement_list->statement_list statement\n");
}
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 520 "parser.y" /* yacc.c:1646  */
    {
	printf("\texpression_statement->';'\n");
}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 523 "parser.y" /* yacc.c:1646  */
    {
	printf("\texpression_statement->expression ';'\n");
}
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 529 "parser.y" /* yacc.c:1646  */
    {
	printf("\tselection_statement->IF '(' expression ')' statement\n");
}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 532 "parser.y" /* yacc.c:1646  */
    {
	printf("\tselection_statement->IF '(' expression ')' statement ELSE statement\n");
}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 535 "parser.y" /* yacc.c:1646  */
    {
	printf("\tselection_statement->SWITCH '(' expression ')' statement\n");
}
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 541 "parser.y" /* yacc.c:1646  */
    {
	printf("\titeration_statement->WHILE '(' expression ')' statement\n");
}
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 544 "parser.y" /* yacc.c:1646  */
    {
	printf("\titeration_statement->DO statement WHILE '(' expression ')' ';'\n");
}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 547 "parser.y" /* yacc.c:1646  */
    {
	printf("\titeration_statement->FOR '(' expression_statement expression_statement ')' statement\n");
}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 550 "parser.y" /* yacc.c:1646  */
    {
	printf("\titeration_statement->FOR '(' expression_statement expression_statement expression ')' statement\n");
}
#line 2570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 556 "parser.y" /* yacc.c:1646  */
    {
	printf("\tjump_statement->CONTINUE ';'\n");
}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 559 "parser.y" /* yacc.c:1646  */
    {
	printf("\tjump_statement->BREAK ';'\n");
}
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 562 "parser.y" /* yacc.c:1646  */
    {
	printf("\tjump_statement->RETURN ';'\n");
}
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 565 "parser.y" /* yacc.c:1646  */
    {
	printf("\tjump_statement->RETURN expression ';'\n");
}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 571 "parser.y" /* yacc.c:1646  */
    {
	printf("\ttranslation_unit->external_declaration\n");
}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 574 "parser.y" /* yacc.c:1646  */
    {
	printf("\ttranslation_unit->translation_unit external_declaration\n");
}
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 580 "parser.y" /* yacc.c:1646  */
    {
	printf("\texternal_declaration->function_definition\n");
}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 583 "parser.y" /* yacc.c:1646  */
    {
	printf("\texternal_declaration->declaration\n");
}
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 589 "parser.y" /* yacc.c:1646  */
    {
	printf("\tfunction_definition->declaration_specifiers declarator declaration_list compound_statement\n");
}
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 592 "parser.y" /* yacc.c:1646  */
    {
	printf("\tfunction_definition->declaration_specifiers declarator compound_statement\n");
}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 595 "parser.y" /* yacc.c:1646  */
    {
	printf("\tfunction_definition->declarator declaration_list compound_statement\n");
}
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 598 "parser.y" /* yacc.c:1646  */
    {
	printf("\tfunction_definition->declarator compound_statement\n");
}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2670 "y.tab.c" /* yacc.c:1646  */
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
#line 603 "parser.y" /* yacc.c:1906  */

 void yyerror (char const *s) {
   printf("ERROR!");
 }
int main(){
	yyparse();
}
