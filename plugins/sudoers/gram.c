#include <config.h>
/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         sudoersparse
#define yylex           sudoerslex
#define yyerror         sudoerserror
#define yydebug         sudoersdebug
#define yynerrs         sudoersnerrs

#define yylval          sudoerslval
#define yychar          sudoerschar

/* Copy the first part of user declarations.  */
#line 1 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:339  */

/*
 * Copyright (c) 1996, 1998-2005, 2007-2013
 *	Todd C. Miller <Todd.Miller@courtesan.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Sponsored in part by the Defense Advanced Research Projects
 * Agency (DARPA) and Air Force Research Laboratory, Air Force
 * Materiel Command, USAF, under agreement number F39502-99-1-0512.
 */

#include <config.h>

#include <sys/types.h>
#include <stdio.h>
#ifdef STDC_HEADERS
# include <stdlib.h>
# include <stddef.h>
#else
# ifdef HAVE_STDLIB_H
#  include <stdlib.h>
# endif
#endif /* STDC_HEADERS */
#ifdef HAVE_STRING_H
# include <string.h>
#endif /* HAVE_STRING_H */
#ifdef HAVE_STRINGS_H
# include <strings.h>
#endif /* HAVE_STRINGS_H */
#ifdef HAVE_UNISTD_H
# include <unistd.h>
#endif /* HAVE_UNISTD_H */
#ifdef HAVE_INTTYPES_H
# include <inttypes.h>
#endif
#if defined(YYBISON) && defined(HAVE_ALLOCA_H) && !defined(__GNUC__)
# include <alloca.h>
#endif /* YYBISON && HAVE_ALLOCA_H && !__GNUC__ */
#include <limits.h>

#include "sudoers.h" /* XXX */
#include "parse.h"
#include "toke.h"

/*
 * We must define SIZE_MAX for yacc's skeleton.c.
 * If there is no SIZE_MAX or SIZE_T_MAX we have to assume that size_t
 * could be signed (as it is on SunOS 4.x).
 */
#ifndef SIZE_MAX
# ifdef SIZE_T_MAX
#  define SIZE_MAX	SIZE_T_MAX
# else
#  define SIZE_MAX	INT_MAX
# endif /* SIZE_T_MAX */
#endif /* SIZE_MAX */

/*
 * Globals
 */
bool sudoers_warnings = true;
bool parse_error = false;
int errorlineno = -1;
const char *errorfile = NULL;

struct defaults_list defaults = TAILQ_HEAD_INITIALIZER(defaults);
struct userspec_list userspecs = TAILQ_HEAD_INITIALIZER(userspecs);

/*
 * Local protoypes
 */
static void  add_defaults(int, struct member *, struct defaults *);
static void  add_userspec(struct member *, struct privilege *);
static struct defaults *new_default(char *, char *, int);
static struct member *new_member(char *, int);
static struct sudo_digest *new_digest(int, const char *);

#line 165 "gram.c" /* yacc.c:339  */

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
#ifndef YY_SUDOERS_Y_TAB_H_INCLUDED
# define YY_SUDOERS_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sudoersdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COMMAND = 258,
    ALIAS = 259,
    DEFVAR = 260,
    NTWKADDR = 261,
    NETGROUP = 262,
    USERGROUP = 263,
    WORD = 264,
    DIGEST = 265,
    DEFAULTS = 266,
    DEFAULTS_HOST = 267,
    DEFAULTS_USER = 268,
    DEFAULTS_RUNAS = 269,
    DEFAULTS_CMND = 270,
    NOPASSWD = 271,
    PASSWD = 272,
    NOEXEC = 273,
    EXEC = 274,
    SETENV = 275,
    NOSETENV = 276,
    LOG_INPUT = 277,
    NOLOG_INPUT = 278,
    LOG_OUTPUT = 279,
    NOLOG_OUTPUT = 280,
    FOLLOW = 281,
    NOFOLLOW = 282,
    ALL = 283,
    COMMENT = 284,
    HOSTALIAS = 285,
    CMNDALIAS = 286,
    USERALIAS = 287,
    RUNASALIAS = 288,
    ERROR = 289,
    TYPE = 290,
    ROLE = 291,
    PRIVS = 292,
    LIMITPRIVS = 293,
    MYSELF = 294,
    SHA224 = 295,
    SHA256 = 296,
    SHA384 = 297,
    SHA512 = 298
  };
#endif
/* Tokens.  */
#define COMMAND 258
#define ALIAS 259
#define DEFVAR 260
#define NTWKADDR 261
#define NETGROUP 262
#define USERGROUP 263
#define WORD 264
#define DIGEST 265
#define DEFAULTS 266
#define DEFAULTS_HOST 267
#define DEFAULTS_USER 268
#define DEFAULTS_RUNAS 269
#define DEFAULTS_CMND 270
#define NOPASSWD 271
#define PASSWD 272
#define NOEXEC 273
#define EXEC 274
#define SETENV 275
#define NOSETENV 276
#define LOG_INPUT 277
#define NOLOG_INPUT 278
#define LOG_OUTPUT 279
#define NOLOG_OUTPUT 280
#define FOLLOW 281
#define NOFOLLOW 282
#define ALL 283
#define COMMENT 284
#define HOSTALIAS 285
#define CMNDALIAS 286
#define USERALIAS 287
#define RUNASALIAS 288
#define ERROR 289
#define TYPE 290
#define ROLE 291
#define PRIVS 292
#define LIMITPRIVS 293
#define MYSELF 294
#define SHA224 295
#define SHA256 296
#define SHA384 297
#define SHA512 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 92 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:355  */

    struct cmndspec *cmndspec;
    struct defaults *defaults;
    struct member *member;
    struct runascontainer *runas;
    struct privilege *privilege;
    struct sudo_digest *digest;
    struct sudo_command command;
    struct cmndtag tag;
    struct selinux_info seinfo;
    struct solaris_privs_info privinfo;
    char *string;
    int tok;

#line 306 "gram.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE sudoerslval;

int sudoersparse (void);

#endif /* !YY_SUDOERS_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 321 "gram.c" /* yacc.c:358  */

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
#define YYFINAL  66
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,     2,     2,     2,     2,     2,
      40,    41,     2,    38,    36,    39,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    34,     2,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   184,   184,   185,   188,   189,   192,   195,   198,   201,
     204,   207,   210,   213,   216,   219,   222,   225,   230,   231,
     237,   240,   243,   246,   249,   254,   255,   261,   270,   274,
     280,   283,   286,   289,   292,   297,   298,   341,   377,   380,
     383,   386,   391,   394,   402,   406,   412,   417,   422,   426,
     430,   434,   438,   444,   448,   453,   457,   461,   465,   469,
     475,   478,   483,   488,   493,   498,   503,   510,   513,   516,
     519,   522,   525,   528,   531,   534,   537,   540,   543,   546,
     551,   554,   557,   565,   566,   569,   578,   579,   585,   586,
     589,   598,   599,   605,   606,   609,   618,   619,   622,   631,
     632,   638,   642,   648,   651,   654,   657,   660,   665,   666,
     672,   676,   682,   685,   688
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMAND", "ALIAS", "DEFVAR", "NTWKADDR",
  "NETGROUP", "USERGROUP", "WORD", "DIGEST", "DEFAULTS", "DEFAULTS_HOST",
  "DEFAULTS_USER", "DEFAULTS_RUNAS", "DEFAULTS_CMND", "NOPASSWD", "PASSWD",
  "NOEXEC", "EXEC", "SETENV", "NOSETENV", "LOG_INPUT", "NOLOG_INPUT",
  "LOG_OUTPUT", "NOLOG_OUTPUT", "FOLLOW", "NOFOLLOW", "ALL", "COMMENT",
  "HOSTALIAS", "CMNDALIAS", "USERALIAS", "RUNASALIAS", "':'", "'='", "','",
  "'!'", "'+'", "'-'", "'('", "')'", "ERROR", "TYPE", "ROLE", "PRIVS",
  "LIMITPRIVS", "MYSELF", "SHA224", "SHA256", "SHA384", "SHA512",
  "$accept", "file", "line", "entry", "defaults_list", "defaults_entry",
  "privileges", "privilege", "ophost", "host", "cmndspeclist", "cmndspec",
  "digest", "digcmnd", "opcmnd", "rolespec", "typespec", "selinux",
  "privsspec", "limitprivsspec", "solarisprivs", "runasspec", "runaslist",
  "cmndtag", "cmnd", "hostaliases", "hostalias", "hostlist", "cmndaliases",
  "cmndalias", "cmndlist", "runasaliases", "runasalias", "useraliases",
  "useralias", "userlist", "opuser", "user", "grouplist", "opgroup",
  "group", YY_NULLPTR
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
     285,   286,   287,   288,    58,    61,    44,    33,    43,    45,
      40,    41,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298
};
# endif

#define YYPACT_NINF -86

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define YYTABLE_NINF -4

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      66,     8,   -86,   -86,   -86,   -86,    34,   118,   122,   122,
       5,   -86,   -86,    26,    28,    30,    41,   140,    48,   106,
     -86,     7,   -86,   -86,   -86,    52,    56,    29,   -86,   -86,
     -86,   -86,   -86,   -86,   147,   -86,   -86,    10,    96,    96,
     -86,   -86,   -86,    54,    38,    50,    59,    68,     3,   -86,
     -86,   -86,   104,    33,    74,   -86,    65,    77,   -86,    81,
      89,   -86,    93,   108,   -86,   -86,   -86,   -86,   122,   111,
     -86,    69,   149,   158,   160,   -86,    34,   -86,   118,    29,
      29,    29,   -86,   161,   162,   163,   164,   -86,     5,    29,
     118,    26,     5,    28,   122,    30,   122,    41,   -86,   118,
     130,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   142,   -86,   143,   -86,   144,   -86,   144,   -86,   -86,
      55,   145,   -86,   117,    32,   141,   -24,   130,   150,   151,
     146,   139,   120,   -86,   -86,   -86,   148,   152,   -86,   -86,
     -86,    32,   -86,   175,   178,   -86,   -86,   155,   156,   153,
     157,   -86,   -86,    32,   152,   -86,   -86,   183,   184,   -86,
     -86,     1,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   103,   105,   106,   107,     0,     0,     0,     0,
       0,   104,     6,     0,     0,     0,     0,     0,     0,     0,
       4,     0,    99,   101,     7,    20,     0,    13,    18,    30,
      33,    32,    34,    31,     0,    86,    28,     0,     0,     0,
      82,    81,    80,     0,     0,     0,     0,     0,     0,    91,
      42,    44,     0,     0,    10,    83,     0,    11,    88,     0,
       9,    96,     0,    12,    93,   102,     1,     5,     0,     8,
      25,     0,     0,     0,     0,    21,     0,    29,     0,    16,
      14,    15,    45,     0,     0,     0,     0,    43,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
      60,    22,    23,    24,    19,    87,    38,    39,    40,    41,
      92,    85,    84,    90,    89,    98,    97,    95,    94,    26,
      62,    27,    35,    48,    66,     0,    63,    60,     0,     0,
      49,    50,    55,   112,   114,   113,     0,    65,   108,   110,
      61,     0,    36,     0,     0,    51,    52,     0,     0,    56,
      57,    67,   111,     0,    64,    47,    46,     0,     0,    58,
      59,     0,   109,    53,    54,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   176,   125,   121,   -86,    95,   123,   166,
     -86,    71,   -86,   -85,   159,    72,    75,   -86,    46,    57,
     -86,   -86,   -86,   -86,   165,   -86,   113,    -5,   -86,   116,
     119,   -86,   115,   -86,   124,    -8,   154,   193,    73,    60,
      79
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    27,    28,    69,    70,    35,    36,
     121,   122,    48,    49,    50,   130,   131,   132,   149,   150,
     151,   123,   125,   161,    51,    54,    55,    71,    57,    58,
      52,    63,    64,    60,    61,    21,    22,    23,   137,   138,
     139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    39,    37,   110,    40,    41,    40,    41,    40,    41,
     141,    29,    68,    30,    31,    25,    32,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    42,
      53,    42,    56,    42,    59,    33,   133,    24,    43,    25,
      43,   134,    43,    68,    34,    62,    78,    26,    66,    44,
      45,    46,    47,    44,    45,    46,    47,    40,    41,     2,
     135,    75,     3,     4,     5,    76,    -2,     1,    90,   136,
       2,    26,    83,     3,     4,     5,   177,     6,     7,     8,
       9,    10,    42,    11,    84,   111,   115,    72,   117,   124,
      73,    74,    17,    85,    11,    12,    13,    14,    15,    16,
      92,    25,    86,    17,   100,    78,    -3,     1,    91,    25,
       2,    93,   126,     3,     4,     5,    94,     6,     7,     8,
       9,    10,    29,    95,    30,    31,     2,    32,    96,     3,
       4,     5,    68,    26,    11,    12,    13,    14,    15,    16,
      88,    26,    97,    17,     2,    99,    33,     3,     4,     5,
      11,    29,   133,    30,    31,    34,    32,   134,   101,    17,
     128,   129,    79,    80,    81,   147,   148,   102,    11,   103,
     120,   106,   107,   108,   109,    33,   135,    89,    78,    88,
      68,   127,   140,   129,   155,   143,   144,   156,   153,   128,
     157,   158,   163,   164,   119,    67,   160,   104,   142,   148,
      77,   105,   147,   146,   112,   145,   159,    87,    82,   114,
      65,   113,   118,   162,   154,   152,     0,     0,     0,   116,
       0,     0,    98
};

static const yytype_int16 yycheck[] =
{
       8,     9,     7,    88,     3,     4,     3,     4,     3,     4,
      34,     4,    36,     6,     7,     5,     9,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       4,    28,     4,    28,     4,    28,     4,    29,    37,     5,
      37,     9,    37,    36,    37,     4,    36,    37,     0,    48,
      49,    50,    51,    48,    49,    50,    51,     3,     4,     4,
      28,     5,     7,     8,     9,    36,     0,     1,    35,    37,
       4,    37,    34,     7,     8,     9,   161,    11,    12,    13,
      14,    15,    28,    28,    34,    90,    94,    35,    96,    34,
      38,    39,    37,    34,    28,    29,    30,    31,    32,    33,
      35,     5,    34,    37,    35,    36,     0,     1,    34,     5,
       4,    34,   120,     7,     8,     9,    35,    11,    12,    13,
      14,    15,     4,    34,     6,     7,     4,     9,    35,     7,
       8,     9,    36,    37,    28,    29,    30,    31,    32,    33,
      36,    37,    34,    37,     4,    34,    28,     7,     8,     9,
      28,     4,     4,     6,     7,    37,     9,     9,     9,    37,
      43,    44,    37,    38,    39,    45,    46,     9,    28,     9,
      40,    10,    10,    10,    10,    28,    28,    52,    36,    36,
      36,    36,    41,    44,     9,    35,    35,     9,    36,    43,
      35,    35,     9,     9,    99,    19,   150,    76,   127,    46,
      34,    78,    45,   131,    91,   130,   149,    48,    43,    93,
      17,    92,    97,   153,   141,   136,    -1,    -1,    -1,    95,
      -1,    -1,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,     7,     8,     9,    11,    12,    13,    14,
      15,    28,    29,    30,    31,    32,    33,    37,    53,    54,
      55,    87,    88,    89,    29,     5,    37,    56,    57,     4,
       6,     7,     9,    28,    37,    60,    61,    79,    87,    87,
       3,     4,    28,    37,    48,    49,    50,    51,    64,    65,
      66,    76,    82,     4,    77,    78,     4,    80,    81,     4,
      85,    86,     4,    83,    84,    89,     0,    55,    36,    58,
      59,    79,    35,    38,    39,     5,    36,    61,    36,    56,
      56,    56,    76,    34,    34,    34,    34,    66,    36,    56,
      35,    34,    35,    34,    35,    34,    35,    34,    88,    34,
      35,     9,     9,     9,    57,    60,    10,    10,    10,    10,
      65,    79,    78,    82,    81,    87,    86,    87,    84,    59,
      40,    62,    63,    73,    34,    74,    87,    36,    43,    44,
      67,    68,    69,     4,     9,    28,    37,    90,    91,    92,
      41,    34,    63,    35,    35,    68,    67,    45,    46,    70,
      71,    72,    92,    36,    90,     9,     9,    35,    35,    71,
      70,    75,    91,     9,     9,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      57,    57,    57,    57,    57,    58,    58,    59,    60,    60,
      61,    61,    61,    61,    61,    62,    62,    63,    64,    64,
      64,    64,    65,    65,    66,    66,    67,    68,    69,    69,
      69,    69,    69,    70,    71,    72,    72,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    76,    77,    77,    78,    79,    79,    80,    80,
      81,    82,    82,    83,    83,    84,    85,    85,    86,    87,
      87,    88,    88,    89,    89,    89,    89,    89,    90,    90,
      91,    91,    92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     1,     3,
       1,     2,     3,     3,     3,     1,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     5,     3,     3,
       3,     3,     1,     2,     1,     2,     3,     3,     0,     1,
       1,     2,     2,     3,     3,     0,     1,     1,     2,     2,
       0,     3,     0,     1,     3,     2,     1,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     3,     3,     1,     3,     1,     3,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     1,     1,     1
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
#line 184 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    { ; }
#line 1545 "gram.c" /* yacc.c:1646  */
    break;

  case 6:
#line 192 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    ;
			}
#line 1553 "gram.c" /* yacc.c:1646  */
    break;

  case 7:
#line 195 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    yyerrok;
			}
#line 1561 "gram.c" /* yacc.c:1646  */
    break;

  case 8:
#line 198 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    add_userspec((yyvsp[-1].member), (yyvsp[0].privilege));
			}
#line 1569 "gram.c" /* yacc.c:1646  */
    break;

  case 9:
#line 201 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    ;
			}
#line 1577 "gram.c" /* yacc.c:1646  */
    break;

  case 10:
#line 204 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    ;
			}
#line 1585 "gram.c" /* yacc.c:1646  */
    break;

  case 11:
#line 207 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    ;
			}
#line 1593 "gram.c" /* yacc.c:1646  */
    break;

  case 12:
#line 210 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    ;
			}
#line 1601 "gram.c" /* yacc.c:1646  */
    break;

  case 13:
#line 213 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    add_defaults(DEFAULTS, NULL, (yyvsp[0].defaults));
			}
#line 1609 "gram.c" /* yacc.c:1646  */
    break;

  case 14:
#line 216 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    add_defaults(DEFAULTS_USER, (yyvsp[-1].member), (yyvsp[0].defaults));
			}
#line 1617 "gram.c" /* yacc.c:1646  */
    break;

  case 15:
#line 219 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    add_defaults(DEFAULTS_RUNAS, (yyvsp[-1].member), (yyvsp[0].defaults));
			}
#line 1625 "gram.c" /* yacc.c:1646  */
    break;

  case 16:
#line 222 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    add_defaults(DEFAULTS_HOST, (yyvsp[-1].member), (yyvsp[0].defaults));
			}
#line 1633 "gram.c" /* yacc.c:1646  */
    break;

  case 17:
#line 225 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    add_defaults(DEFAULTS_CMND, (yyvsp[-1].member), (yyvsp[0].defaults));
			}
#line 1641 "gram.c" /* yacc.c:1646  */
    break;

  case 19:
#line 231 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    HLTQ_CONCAT((yyvsp[-2].defaults), (yyvsp[0].defaults), entries);
			    (yyval.defaults) = (yyvsp[-2].defaults);
			}
#line 1650 "gram.c" /* yacc.c:1646  */
    break;

  case 20:
#line 237 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.defaults) = new_default((yyvsp[0].string), NULL, true);
			}
#line 1658 "gram.c" /* yacc.c:1646  */
    break;

  case 21:
#line 240 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.defaults) = new_default((yyvsp[0].string), NULL, false);
			}
#line 1666 "gram.c" /* yacc.c:1646  */
    break;

  case 22:
#line 243 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.defaults) = new_default((yyvsp[-2].string), (yyvsp[0].string), true);
			}
#line 1674 "gram.c" /* yacc.c:1646  */
    break;

  case 23:
#line 246 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.defaults) = new_default((yyvsp[-2].string), (yyvsp[0].string), '+');
			}
#line 1682 "gram.c" /* yacc.c:1646  */
    break;

  case 24:
#line 249 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.defaults) = new_default((yyvsp[-2].string), (yyvsp[0].string), '-');
			}
#line 1690 "gram.c" /* yacc.c:1646  */
    break;

  case 26:
#line 255 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    HLTQ_CONCAT((yyvsp[-2].privilege), (yyvsp[0].privilege), entries);
			    (yyval.privilege) = (yyvsp[-2].privilege);
			}
#line 1699 "gram.c" /* yacc.c:1646  */
    break;

  case 27:
#line 261 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    struct privilege *p = ecalloc(1, sizeof(*p));
			    HLTQ_TO_TAILQ(&p->hostlist, (yyvsp[-2].member), entries);
			    HLTQ_TO_TAILQ(&p->cmndlist, (yyvsp[0].cmndspec), entries);
			    HLTQ_INIT(p, entries);
			    (yyval.privilege) = p;
			}
#line 1711 "gram.c" /* yacc.c:1646  */
    break;

  case 28:
#line 270 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = (yyvsp[0].member);
			    (yyval.member)->negated = false;
			}
#line 1720 "gram.c" /* yacc.c:1646  */
    break;

  case 29:
#line 274 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = (yyvsp[0].member);
			    (yyval.member)->negated = true;
			}
#line 1729 "gram.c" /* yacc.c:1646  */
    break;

  case 30:
#line 280 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member((yyvsp[0].string), ALIAS);
			}
#line 1737 "gram.c" /* yacc.c:1646  */
    break;

  case 31:
#line 283 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member(NULL, ALL);
			}
#line 1745 "gram.c" /* yacc.c:1646  */
    break;

  case 32:
#line 286 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member((yyvsp[0].string), NETGROUP);
			}
#line 1753 "gram.c" /* yacc.c:1646  */
    break;

  case 33:
#line 289 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member((yyvsp[0].string), NTWKADDR);
			}
#line 1761 "gram.c" /* yacc.c:1646  */
    break;

  case 34:
#line 292 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member((yyvsp[0].string), WORD);
			}
#line 1769 "gram.c" /* yacc.c:1646  */
    break;

  case 36:
#line 298 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    struct cmndspec *prev;
			    prev = HLTQ_LAST((yyvsp[-2].cmndspec), cmndspec, entries);
			    HLTQ_CONCAT((yyvsp[-2].cmndspec), (yyvsp[0].cmndspec), entries);
#ifdef HAVE_SELINUX
			    /* propagate role and type */
			    if ((yyvsp[0].cmndspec)->role == NULL)
				(yyvsp[0].cmndspec)->role = prev->role;
			    if ((yyvsp[0].cmndspec)->type == NULL)
				(yyvsp[0].cmndspec)->type = prev->type;
#endif /* HAVE_SELINUX */
#ifdef HAVE_PRIV_SET
			    /* propagate privs & limitprivs */
			    if ((yyvsp[0].cmndspec)->privs == NULL)
			        (yyvsp[0].cmndspec)->privs = prev->privs;
			    if ((yyvsp[0].cmndspec)->limitprivs == NULL)
			        (yyvsp[0].cmndspec)->limitprivs = prev->limitprivs;
#endif /* HAVE_PRIV_SET */
			    /* propagate tags and runas list */
			    if ((yyvsp[0].cmndspec)->tags.nopasswd == UNSPEC)
				(yyvsp[0].cmndspec)->tags.nopasswd = prev->tags.nopasswd;
			    if ((yyvsp[0].cmndspec)->tags.noexec == UNSPEC)
				(yyvsp[0].cmndspec)->tags.noexec = prev->tags.noexec;
			    if ((yyvsp[0].cmndspec)->tags.setenv == UNSPEC &&
				prev->tags.setenv != IMPLIED)
				(yyvsp[0].cmndspec)->tags.setenv = prev->tags.setenv;
			    if ((yyvsp[0].cmndspec)->tags.log_input == UNSPEC)
				(yyvsp[0].cmndspec)->tags.log_input = prev->tags.log_input;
			    if ((yyvsp[0].cmndspec)->tags.log_output == UNSPEC)
				(yyvsp[0].cmndspec)->tags.log_output = prev->tags.log_output;
			    if ((yyvsp[0].cmndspec)->tags.follow == UNSPEC)
				(yyvsp[0].cmndspec)->tags.follow = prev->tags.follow;
			    if (((yyvsp[0].cmndspec)->runasuserlist == NULL &&
				 (yyvsp[0].cmndspec)->runasgrouplist == NULL) &&
				(prev->runasuserlist != NULL ||
				 prev->runasgrouplist != NULL)) {
				(yyvsp[0].cmndspec)->runasuserlist = prev->runasuserlist;
				(yyvsp[0].cmndspec)->runasgrouplist = prev->runasgrouplist;
			    }
			    (yyval.cmndspec) = (yyvsp[-2].cmndspec);
			}
#line 1815 "gram.c" /* yacc.c:1646  */
    break;

  case 37:
#line 341 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    struct cmndspec *cs = ecalloc(1, sizeof(*cs));
			    if ((yyvsp[-4].runas) != NULL) {
				if ((yyvsp[-4].runas)->runasusers != NULL) {
				    cs->runasuserlist =
					emalloc(sizeof(*cs->runasuserlist));
				    HLTQ_TO_TAILQ(cs->runasuserlist,
					(yyvsp[-4].runas)->runasusers, entries);
				}
				if ((yyvsp[-4].runas)->runasgroups != NULL) {
				    cs->runasgrouplist =
					emalloc(sizeof(*cs->runasgrouplist));
				    HLTQ_TO_TAILQ(cs->runasgrouplist,
					(yyvsp[-4].runas)->runasgroups, entries);
				}
				efree((yyvsp[-4].runas));
			    }
#ifdef HAVE_SELINUX
			    cs->role = (yyvsp[-3].seinfo).role;
			    cs->type = (yyvsp[-3].seinfo).type;
#endif
#ifdef HAVE_PRIV_SET
			    cs->privs = (yyvsp[-2].privinfo).privs;
			    cs->limitprivs = (yyvsp[-2].privinfo).limitprivs;
#endif
			    cs->tags = (yyvsp[-1].tag);
			    cs->cmnd = (yyvsp[0].member);
			    HLTQ_INIT(cs, entries);
			    /* sudo "ALL" implies the SETENV tag */
			    if (cs->cmnd->type == ALL && !cs->cmnd->negated &&
				cs->tags.setenv == UNSPEC)
				cs->tags.setenv = IMPLIED;
			    (yyval.cmndspec) = cs;
			}
#line 1854 "gram.c" /* yacc.c:1646  */
    break;

  case 38:
#line 377 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.digest) = new_digest(SUDO_DIGEST_SHA224, (yyvsp[0].string));
			}
#line 1862 "gram.c" /* yacc.c:1646  */
    break;

  case 39:
#line 380 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.digest) = new_digest(SUDO_DIGEST_SHA256, (yyvsp[0].string));
			}
#line 1870 "gram.c" /* yacc.c:1646  */
    break;

  case 40:
#line 383 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.digest) = new_digest(SUDO_DIGEST_SHA384, (yyvsp[0].string));
			}
#line 1878 "gram.c" /* yacc.c:1646  */
    break;

  case 41:
#line 386 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.digest) = new_digest(SUDO_DIGEST_SHA512, (yyvsp[0].string));
			}
#line 1886 "gram.c" /* yacc.c:1646  */
    break;

  case 42:
#line 391 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = (yyvsp[0].member);
			}
#line 1894 "gram.c" /* yacc.c:1646  */
    break;

  case 43:
#line 394 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    /* XXX - yuck */
			    struct sudo_command *c = (struct sudo_command *)((yyvsp[0].member)->name);
			    c->digest = (yyvsp[-1].digest);
			    (yyval.member) = (yyvsp[0].member);
			}
#line 1905 "gram.c" /* yacc.c:1646  */
    break;

  case 44:
#line 402 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = (yyvsp[0].member);
			    (yyval.member)->negated = false;
			}
#line 1914 "gram.c" /* yacc.c:1646  */
    break;

  case 45:
#line 406 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = (yyvsp[0].member);
			    (yyval.member)->negated = true;
			}
#line 1923 "gram.c" /* yacc.c:1646  */
    break;

  case 46:
#line 412 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.string) = (yyvsp[0].string);
			}
#line 1931 "gram.c" /* yacc.c:1646  */
    break;

  case 47:
#line 417 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.string) = (yyvsp[0].string);
			}
#line 1939 "gram.c" /* yacc.c:1646  */
    break;

  case 48:
#line 422 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.seinfo).role = NULL;
			    (yyval.seinfo).type = NULL;
			}
#line 1948 "gram.c" /* yacc.c:1646  */
    break;

  case 49:
#line 426 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.seinfo).role = (yyvsp[0].string);
			    (yyval.seinfo).type = NULL;
			}
#line 1957 "gram.c" /* yacc.c:1646  */
    break;

  case 50:
#line 430 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.seinfo).type = (yyvsp[0].string);
			    (yyval.seinfo).role = NULL;
			}
#line 1966 "gram.c" /* yacc.c:1646  */
    break;

  case 51:
#line 434 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.seinfo).role = (yyvsp[-1].string);
			    (yyval.seinfo).type = (yyvsp[0].string);
			}
#line 1975 "gram.c" /* yacc.c:1646  */
    break;

  case 52:
#line 438 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.seinfo).type = (yyvsp[-1].string);
			    (yyval.seinfo).role = (yyvsp[0].string);
			}
#line 1984 "gram.c" /* yacc.c:1646  */
    break;

  case 53:
#line 444 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.string) = (yyvsp[0].string);
			}
#line 1992 "gram.c" /* yacc.c:1646  */
    break;

  case 54:
#line 448 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.string) = (yyvsp[0].string);
			}
#line 2000 "gram.c" /* yacc.c:1646  */
    break;

  case 55:
#line 453 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.privinfo).privs = NULL;
			    (yyval.privinfo).limitprivs = NULL;
			}
#line 2009 "gram.c" /* yacc.c:1646  */
    break;

  case 56:
#line 457 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.privinfo).privs = (yyvsp[0].string);
			    (yyval.privinfo).limitprivs = NULL;
			}
#line 2018 "gram.c" /* yacc.c:1646  */
    break;

  case 57:
#line 461 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.privinfo).privs = NULL;
			    (yyval.privinfo).limitprivs = (yyvsp[0].string);
			}
#line 2027 "gram.c" /* yacc.c:1646  */
    break;

  case 58:
#line 465 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.privinfo).privs = (yyvsp[-1].string);
			    (yyval.privinfo).limitprivs = (yyvsp[0].string);
			}
#line 2036 "gram.c" /* yacc.c:1646  */
    break;

  case 59:
#line 469 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.privinfo).limitprivs = (yyvsp[-1].string);
			    (yyval.privinfo).privs = (yyvsp[0].string);
			}
#line 2045 "gram.c" /* yacc.c:1646  */
    break;

  case 60:
#line 475 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.runas) = NULL;
			}
#line 2053 "gram.c" /* yacc.c:1646  */
    break;

  case 61:
#line 478 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.runas) = (yyvsp[-1].runas);
			}
#line 2061 "gram.c" /* yacc.c:1646  */
    break;

  case 62:
#line 483 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.runas) = ecalloc(1, sizeof(struct runascontainer));
			    (yyval.runas)->runasusers = new_member(NULL, MYSELF);
			    /* $$->runasgroups = NULL; */
			}
#line 2071 "gram.c" /* yacc.c:1646  */
    break;

  case 63:
#line 488 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.runas) = ecalloc(1, sizeof(struct runascontainer));
			    (yyval.runas)->runasusers = (yyvsp[0].member);
			    /* $$->runasgroups = NULL; */
			}
#line 2081 "gram.c" /* yacc.c:1646  */
    break;

  case 64:
#line 493 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.runas) = ecalloc(1, sizeof(struct runascontainer));
			    (yyval.runas)->runasusers = (yyvsp[-2].member);
			    (yyval.runas)->runasgroups = (yyvsp[0].member);
			}
#line 2091 "gram.c" /* yacc.c:1646  */
    break;

  case 65:
#line 498 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.runas) = ecalloc(1, sizeof(struct runascontainer));
			    /* $$->runasusers = NULL; */
			    (yyval.runas)->runasgroups = (yyvsp[0].member);
			}
#line 2101 "gram.c" /* yacc.c:1646  */
    break;

  case 66:
#line 503 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.runas) = ecalloc(1, sizeof(struct runascontainer));
			    (yyval.runas)->runasusers = new_member(NULL, MYSELF);
			    /* $$->runasgroups = NULL; */
			}
#line 2111 "gram.c" /* yacc.c:1646  */
    break;

  case 67:
#line 510 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    TAGS_INIT((yyval.tag));
			}
#line 2119 "gram.c" /* yacc.c:1646  */
    break;

  case 68:
#line 513 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).nopasswd = true;
			}
#line 2127 "gram.c" /* yacc.c:1646  */
    break;

  case 69:
#line 516 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).nopasswd = false;
			}
#line 2135 "gram.c" /* yacc.c:1646  */
    break;

  case 70:
#line 519 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).noexec = true;
			}
#line 2143 "gram.c" /* yacc.c:1646  */
    break;

  case 71:
#line 522 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).noexec = false;
			}
#line 2151 "gram.c" /* yacc.c:1646  */
    break;

  case 72:
#line 525 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).setenv = true;
			}
#line 2159 "gram.c" /* yacc.c:1646  */
    break;

  case 73:
#line 528 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).setenv = false;
			}
#line 2167 "gram.c" /* yacc.c:1646  */
    break;

  case 74:
#line 531 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).log_input = true;
			}
#line 2175 "gram.c" /* yacc.c:1646  */
    break;

  case 75:
#line 534 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).log_input = false;
			}
#line 2183 "gram.c" /* yacc.c:1646  */
    break;

  case 76:
#line 537 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).log_output = true;
			}
#line 2191 "gram.c" /* yacc.c:1646  */
    break;

  case 77:
#line 540 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).log_output = false;
			}
#line 2199 "gram.c" /* yacc.c:1646  */
    break;

  case 78:
#line 543 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).follow = true;
			}
#line 2207 "gram.c" /* yacc.c:1646  */
    break;

  case 79:
#line 546 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.tag).follow = false;
			}
#line 2215 "gram.c" /* yacc.c:1646  */
    break;

  case 80:
#line 551 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member(NULL, ALL);
			}
#line 2223 "gram.c" /* yacc.c:1646  */
    break;

  case 81:
#line 554 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member((yyvsp[0].string), ALIAS);
			}
#line 2231 "gram.c" /* yacc.c:1646  */
    break;

  case 82:
#line 557 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    struct sudo_command *c = ecalloc(1, sizeof(*c));
			    c->cmnd = (yyvsp[0].command).cmnd;
			    c->args = (yyvsp[0].command).args;
			    (yyval.member) = new_member((char *)c, COMMAND);
			}
#line 2242 "gram.c" /* yacc.c:1646  */
    break;

  case 85:
#line 569 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    char *s;
			    if ((s = alias_add((yyvsp[-2].string), HOSTALIAS, (yyvsp[0].member))) != NULL) {
				sudoerserror(s);
				YYERROR;
			    }
			}
#line 2254 "gram.c" /* yacc.c:1646  */
    break;

  case 87:
#line 579 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    HLTQ_CONCAT((yyvsp[-2].member), (yyvsp[0].member), entries);
			    (yyval.member) = (yyvsp[-2].member);
			}
#line 2263 "gram.c" /* yacc.c:1646  */
    break;

  case 90:
#line 589 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    char *s;
			    if ((s = alias_add((yyvsp[-2].string), CMNDALIAS, (yyvsp[0].member))) != NULL) {
				sudoerserror(s);
				YYERROR;
			    }
			}
#line 2275 "gram.c" /* yacc.c:1646  */
    break;

  case 92:
#line 599 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    HLTQ_CONCAT((yyvsp[-2].member), (yyvsp[0].member), entries);
			    (yyval.member) = (yyvsp[-2].member);
			}
#line 2284 "gram.c" /* yacc.c:1646  */
    break;

  case 95:
#line 609 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    char *s;
			    if ((s = alias_add((yyvsp[-2].string), RUNASALIAS, (yyvsp[0].member))) != NULL) {
				sudoerserror(s);
				YYERROR;
			    }
			}
#line 2296 "gram.c" /* yacc.c:1646  */
    break;

  case 98:
#line 622 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    char *s;
			    if ((s = alias_add((yyvsp[-2].string), USERALIAS, (yyvsp[0].member))) != NULL) {
				sudoerserror(s);
				YYERROR;
			    }
			}
#line 2308 "gram.c" /* yacc.c:1646  */
    break;

  case 100:
#line 632 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    HLTQ_CONCAT((yyvsp[-2].member), (yyvsp[0].member), entries);
			    (yyval.member) = (yyvsp[-2].member);
			}
#line 2317 "gram.c" /* yacc.c:1646  */
    break;

  case 101:
#line 638 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = (yyvsp[0].member);
			    (yyval.member)->negated = false;
			}
#line 2326 "gram.c" /* yacc.c:1646  */
    break;

  case 102:
#line 642 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = (yyvsp[0].member);
			    (yyval.member)->negated = true;
			}
#line 2335 "gram.c" /* yacc.c:1646  */
    break;

  case 103:
#line 648 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member((yyvsp[0].string), ALIAS);
			}
#line 2343 "gram.c" /* yacc.c:1646  */
    break;

  case 104:
#line 651 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member(NULL, ALL);
			}
#line 2351 "gram.c" /* yacc.c:1646  */
    break;

  case 105:
#line 654 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member((yyvsp[0].string), NETGROUP);
			}
#line 2359 "gram.c" /* yacc.c:1646  */
    break;

  case 106:
#line 657 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member((yyvsp[0].string), USERGROUP);
			}
#line 2367 "gram.c" /* yacc.c:1646  */
    break;

  case 107:
#line 660 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member((yyvsp[0].string), WORD);
			}
#line 2375 "gram.c" /* yacc.c:1646  */
    break;

  case 109:
#line 666 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    HLTQ_CONCAT((yyvsp[-2].member), (yyvsp[0].member), entries);
			    (yyval.member) = (yyvsp[-2].member);
			}
#line 2384 "gram.c" /* yacc.c:1646  */
    break;

  case 110:
#line 672 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = (yyvsp[0].member);
			    (yyval.member)->negated = false;
			}
#line 2393 "gram.c" /* yacc.c:1646  */
    break;

  case 111:
#line 676 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = (yyvsp[0].member);
			    (yyval.member)->negated = true;
			}
#line 2402 "gram.c" /* yacc.c:1646  */
    break;

  case 112:
#line 682 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member((yyvsp[0].string), ALIAS);
			}
#line 2410 "gram.c" /* yacc.c:1646  */
    break;

  case 113:
#line 685 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member(NULL, ALL);
			}
#line 2418 "gram.c" /* yacc.c:1646  */
    break;

  case 114:
#line 688 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1646  */
    {
			    (yyval.member) = new_member((yyvsp[0].string), WORD);
			}
#line 2426 "gram.c" /* yacc.c:1646  */
    break;


#line 2430 "gram.c" /* yacc.c:1646  */
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
#line 693 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1906  */

void
sudoerserror(const char *s)
{
    debug_decl(sudoerserror, SUDO_DEBUG_PARSER)

    /* If we last saw a newline the error is on the preceding line. */
    if (last_token == COMMENT)
	sudolineno--;

    /* Save the line the first error occurred on. */
    if (errorlineno == -1) {
	errorlineno = sudolineno;
	errorfile = estrdup(sudoers);
    }
    if (sudoers_warnings && s != NULL) {
	LEXTRACE("<*> ");
#ifndef TRACELEXER
	if (trace_print == NULL || trace_print == sudoers_trace_print) {
	    const char fmt[] = ">>> %s: %s near line %d <<<\n";
	    int oldlocale;

	    /* Warnings are displayed in the user's locale. */
	    sudoers_setlocale(SUDOERS_LOCALE_USER, &oldlocale);
	    sudo_printf(SUDO_CONV_ERROR_MSG, _(fmt), sudoers, _(s), sudolineno);
	    sudoers_setlocale(oldlocale, NULL);
	}
#endif
    }
    parse_error = true;
    debug_return;
}

static struct defaults *
new_default(char *var, char *val, int op)
{
    struct defaults *d;
    debug_decl(new_default, SUDO_DEBUG_PARSER)

    d = ecalloc(1, sizeof(struct defaults));
    d->var = var;
    d->val = val;
    /* d->type = 0; */
    d->op = op;
    /* d->binding = NULL */
    HLTQ_INIT(d, entries);

    debug_return_ptr(d);
}

static struct member *
new_member(char *name, int type)
{
    struct member *m;
    debug_decl(new_member, SUDO_DEBUG_PARSER)

    m = ecalloc(1, sizeof(struct member));
    m->name = name;
    m->type = type;
    HLTQ_INIT(m, entries);

    debug_return_ptr(m);
}

struct sudo_digest *
new_digest(int digest_type, const char *digest_str)
{
    struct sudo_digest *dig;
    debug_decl(new_digest, SUDO_DEBUG_PARSER)

    dig = emalloc(sizeof(*dig));
    dig->digest_type = digest_type;
    dig->digest_str = estrdup(digest_str);

    debug_return_ptr(dig);
}

/*
 * Add a list of defaults structures to the defaults list.
 * The binding, if non-NULL, specifies a list of hosts, users, or
 * runas users the entries apply to (specified by the type).
 */
static void
add_defaults(int type, struct member *bmem, struct defaults *defs)
{
    struct defaults *d;
    struct member_list *binding;
    debug_decl(add_defaults, SUDO_DEBUG_PARSER)

    if (defs != NULL) {
	/*
	 * We use a single binding for each entry in defs.
	 */
	binding = emalloc(sizeof(*binding));
	if (bmem != NULL)
	    HLTQ_TO_TAILQ(binding, bmem, entries);
	else
	    TAILQ_INIT(binding);

	/*
	 * Set type and binding (who it applies to) for new entries.
	 * Then add to the global defaults list.
	 */
	HLTQ_FOREACH(d, defs, entries) {
	    d->type = type;
	    d->binding = binding;
	}
	TAILQ_CONCAT_HLTQ(&defaults, defs, entries);
    }

    debug_return;
}

/*
 * Allocate a new struct userspec, populate it, and insert it at the
 * end of the userspecs list.
 */
static void
add_userspec(struct member *members, struct privilege *privs)
{
    struct userspec *u;
    debug_decl(add_userspec, SUDO_DEBUG_PARSER)

    u = ecalloc(1, sizeof(*u));
    HLTQ_TO_TAILQ(&u->users, members, entries);
    HLTQ_TO_TAILQ(&u->privileges, privs, entries);
    TAILQ_INSERT_TAIL(&userspecs, u, entries);

    debug_return;
}

/*
 * Free up space used by data structures from a previous parser run and sets
 * the current sudoers file to path.
 */
void
init_parser(const char *path, bool quiet)
{
    struct member_list *binding;
    struct defaults *d, *d_next;
    struct userspec *us, *us_next;
    debug_decl(init_parser, SUDO_DEBUG_PARSER)

    TAILQ_FOREACH_SAFE(us, &userspecs, entries, us_next) {
	struct member *m, *m_next;
	struct privilege *priv, *priv_next;

	TAILQ_FOREACH_SAFE(m, &us->users, entries, m_next) {
	    efree(m->name);
	    efree(m);
	}
	TAILQ_FOREACH_SAFE(priv, &us->privileges, entries, priv_next) {
	    struct member_list *runasuserlist = NULL, *runasgrouplist = NULL;
	    struct cmndspec *cs, *cs_next;
#ifdef HAVE_SELINUX
	    char *role = NULL, *type = NULL;
#endif /* HAVE_SELINUX */
#ifdef HAVE_PRIV_SET
	    char *privs = NULL, *limitprivs = NULL;
#endif /* HAVE_PRIV_SET */

	    TAILQ_FOREACH_SAFE(m, &priv->hostlist, entries, m_next) {
		efree(m->name);
		efree(m);
	    }
	    TAILQ_FOREACH_SAFE(cs, &priv->cmndlist, entries, cs_next) {
#ifdef HAVE_SELINUX
		/* Only free the first instance of a role/type. */
		if (cs->role != role) {
		    role = cs->role;
		    efree(cs->role);
		}
		if (cs->type != type) {
		    type = cs->type;
		    efree(cs->type);
		}
#endif /* HAVE_SELINUX */
#ifdef HAVE_PRIV_SET
		/* Only free the first instance of privs/limitprivs. */
		if (cs->privs != privs) {
		    privs = cs->privs;
		    efree(cs->privs);
		}
		if (cs->limitprivs != limitprivs) {
		    limitprivs = cs->limitprivs;
		    efree(cs->limitprivs);
		}
#endif /* HAVE_PRIV_SET */
		/* Only free the first instance of runas user/group lists. */
		if (cs->runasuserlist && cs->runasuserlist != runasuserlist) {
		    runasuserlist = cs->runasuserlist;
		    TAILQ_FOREACH_SAFE(m, runasuserlist, entries, m_next) {
			efree(m->name);
			efree(m);
		    }
		    efree(runasuserlist);
		}
		if (cs->runasgrouplist && cs->runasgrouplist != runasgrouplist) {
		    runasgrouplist = cs->runasgrouplist;
		    TAILQ_FOREACH_SAFE(m, runasgrouplist, entries, m_next) {
			efree(m->name);
			efree(m);
		    }
		    efree(runasgrouplist);
		}
		if (cs->cmnd->type == COMMAND) {
			struct sudo_command *c =
			    (struct sudo_command *) cs->cmnd->name;
			efree(c->cmnd);
			efree(c->args);
		}
		efree(cs->cmnd->name);
		efree(cs->cmnd);
		efree(cs);
	    }
	    efree(priv);
	}
	efree(us);
    }
    TAILQ_INIT(&userspecs);

    binding = NULL;
    TAILQ_FOREACH_SAFE(d, &defaults, entries, d_next) {
	if (d->binding != binding) {
	    struct member *m, *m_next;

	    binding = d->binding;
	    TAILQ_FOREACH_SAFE(m, d->binding, entries, m_next) {
		if (m->type == COMMAND) {
			struct sudo_command *c =
			    (struct sudo_command *) m->name;
			efree(c->cmnd);
			efree(c->args);
		}
		efree(m->name);
		efree(m);
	    }
	    efree(d->binding);
	}
	efree(d->var);
	efree(d->val);
	efree(d);
    }
    TAILQ_INIT(&defaults);

    init_aliases();

    init_lexer();

    efree(sudoers);
    sudoers = path ? estrdup(path) : NULL;

    parse_error = false;
    errorlineno = -1;
    errorfile = sudoers;
    sudoers_warnings = !quiet;

    debug_return;
}
