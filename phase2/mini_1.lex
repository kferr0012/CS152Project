/*
 * Phase 1
 */
%{
#include "y.tab.h"
int lineNum = 1, lineCol = 0;
%}


DIGIT	[0-9]
ALPHA	[a-zA-Z]
INCORRECT_ID {DIGIT}+{ID}
NUMBER	{DIGIT}+
COMMENT	(##).*
ID	{ALPHA}({ALPHA}|{NUMBER}|[_])*(({ALPHA}|{NUMBER})+)*

%%
function	{lineCol+=yyleng; return FUNCTION;}
beginparams	{lineCol+=yyleng; return BEGIN_PARAMS;}
endparams	{lineCol+=yyleng; return END_PARAMS;}
beginlocals	{lineCol+=yyleng; return BEGIN_LOCALS;}
endlocals	{lineCol+=yyleng; return END_LOCALS;}
beginbody	{lineCol+=yyleng; return BEGIN_BODY;}
endbody		{lineCol+=yyleng; return END_BODY;}
read		{lineCol+=yyleng; return READ;}
beginloop	{lineCol+=yyleng; return BEGINLOOP;}
endloop		{lineCol+=yyleng; return ENDLOOP;}
while		{lineCol+=yyleng; return WHILE;}
and		{lineCol+=yyleng; return AND;}
or		{lineCol+=yyleng; return OR;}
of		{lineCol+=yyleng; return OF;}
if		{lineCol+=yyleng; return IF;}
false		{lineCol+=yyleng; return FALSE;}
true		{lineCol+=yyleng; return TRUE;}
array		{lineCol+=yyleng; return ARRAY;}
endif		{lineCol+=yyleng; return ENDIF;}
then		{lineCol+=yyleng; return THEN;}
else		{lineCol+=yyleng; return ELSE;}
continue	{lineCol+=yyleng; return CONTINUE;}
write		{lineCol+=yyleng; return WRITE;}
;		{lineCol+=yyleng; return SEMICOLON;}
:		{lineCol+=yyleng; return COLON;}
,		{lineCol+=yyleng; return COMMA;}
not		{lineCol+=yyleng; return NOT;}
return		{lineCol+=yyleng; return RETURN;}
for		{lineCol+=yyleng; return FOR;}
do		{lineCol+=yyleng; return DO;}
">="		{lineCol+=yyleng; return GTE;}
">"		{lineCol+=yyleng; return GT;}
"<"		{lineCol+=yyleng; return LT;}
"<="		{lineCol+=yyleng; return LTE;}
":="		{lineCol+=yyleng; return ASSIGN;}
"["		{lineCol+=yyleng; return L_SQUARE_BRACKET;}
"]"		{lineCol+=yyleng; return R_SQUARE_BRACKET;}
%		{lineCol+=yyleng; return MOD;}
==		{lineCol+=yyleng; return EQ;}
"<>"		{lineCol+=yyleng; return NEQ;}
-		{lineCol+=yyleng; return SUB;}
"*"		{lineCol+=yyleng; return MULT;}
"("		{lineCol+=yyleng; return L_PAREN;}
")"		{lineCol+=yyleng; return R_PAREN;}
"+"		{lineCol+=yyleng; return ADD;}
"/"		{lineCol+=yyleng; return DIV;}
integer		{lineCol+=yyleng; return INTEGER;}
{COMMENT}	{lineCol+=yyleng;}
{NUMBER}	{lineCol+=yyleng; yylval.iVal = atoi(yytext); return NUMBER;}
{ID}		{lineCol+=yyleng; yylval.cVal = yytext; return IDENT;}
[ \t]+		{lineCol += yyleng;}
{INCORRECT_ID}	{printf("Error at line %d, column %d: unrecognized symbol \"%s\" \n", lineNum, lineCol, yytext);exit(0);}
\n		{++lineNum; lineCol = 1;}
.		{printf("Error at line %d, column %d: unrecognized symbol \"%s\" \n", lineNum, lineCol, yytext);exit(0);}
%%

/*
int main()
{
	yylex();
}
*/
