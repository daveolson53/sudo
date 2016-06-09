/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 92 "/home/ben/src/sudo/plugins/sudoers/gram.y" /* yacc.c:1909  */

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

#line 155 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE sudoerslval;

int sudoersparse (void);

#endif /* !YY_SUDOERS_Y_TAB_H_INCLUDED  */
