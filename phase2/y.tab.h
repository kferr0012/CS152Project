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
#line 10 "mini_1.y" /* yacc.c:1909  */

	char * cVal;
	int iVal;
	double dVal;

#line 112 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
