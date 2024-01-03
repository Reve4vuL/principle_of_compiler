/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
