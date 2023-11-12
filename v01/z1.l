%option noyywrap

%{
	#include <stdio.h>
	int brojac;
%}

%%

[+-]?[1-9][0-9]*        { printf("broj: %s\n", yytext); }
0(x|X)[0-9A-Fa-f]{1,4}        { printf("hex broj: %s\n",yytext);}
"/*".*"*/"		{ printf("komentar lol xd xdx dxddddd\n");}
.*			{ printf("nije komentar lmaooooo\n");}

%%

int main() {
  yylex();
}
