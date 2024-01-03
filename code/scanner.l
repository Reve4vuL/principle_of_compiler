%{
#include "y.tab.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <string>

using namespace std;
int count = 0;
int line = 0;
int column = 0;
int wordcounter = 0;
void addColumn(int cnt);
void addLine(int cnt);
void clearColumn();
void comment();


%}

D	[0-9]
A	[_a-zA-Z]

int	{D}+
float	{D}*(\.{D}*)([eE][+-]?{D}+)?

%%
"/*"			{ comment();/*注释*/}
"//"[^\n]*      { /* consume //-comment */ }

"="	{return('=');}
"+"	{return('+');}
"-"	{return('-');}
"*"	{return('*');}
"/"	{return('/');}
","	{return(',');}
";"	{return(';');}
"["	{return('[');}
"]"	{return(']');}
"{"	{return('{');}
"}"	{return('}');}
">"	{return('>');}
"<"	{return('<');}
"!"	{return('!');}
"."	{return('.');}
"("	{return('(');}
")"	{return(')');}
"?"	{return('?');}
":"	{return(':');}
">="	{return(BT);}
"<="	{return(LT);}
"||"	{return(OR);}
"&&"	{return(AND);}
"=="	{return(EQ);}
"!="	{return(NE);}
"++"	{return(INC);}
"--"	{return(DEC);}
"+="	{return(ADDASSIGN);}
"-="	{return(SUBASSIGN);}
"*="	{return(MULASSIGN);}
"/="	{return(DIVASSIGN);}	
\n	{addLine(1);clearColumn();}
"int"	{ addColumn(yyleng); return(INT);}
"float"	{ addColumn(yyleng); return(FLOAT);}
"continue"	{return(CONTINUE);}
"switch"	{return(SWITCH);}
"break"	{return(BREAK);}
"case"	{return(CASE);}
"if"	{return(IF);}
"do"	{return(DO);}
"else"	{return(ELSE);}
"for"	{return(FOR);}
"while"	{return(WHILE);}
"return"	{return (RETURN);}



{A}({A}|{D})*	{ addColumn(yyleng); return (ID);}

{int}	{ addColumn(yyleng); return (C_int);}

{float}	{ addColumn(yyleng);return (C_float); }


%%
void comment() {
	column = 0;
	char c, prev = 0;
	
	while (cin >> c)      /* (EOF maps to 0) */
	{
		if (c == '/' && prev == '*')
			return;
		prev = c;
	}
	printf("unterminated comment");
}
void addColumn(int cnt){
	column += cnt;
}
void addLine(int cnt){
	line += cnt;
}
void clearColumn(){
	column = 0;
}
int yywrap(){return(1);}

