/*
 * Phase 1
 */
%{
int lineNum = 1, lineCol = 0;
%}


DIGIT	[0-9]
ALPHA	[a-zA-Z]
INCORRECT_ID {DIGIT}+{ID}
NUMBER	{DIGIT}+
COMMENT	(##).*
ID	{ALPHA}({ALPHA}|{NUMBER}|[_])*(({ALPHA}|{NUMBER})+)*

%%
function	{printf("FUNCTION\n");lineCol+=yyleng;}
beginparams	{printf("BEGIN_PARAMS\n");lineCol+=yyleng;}
endparams	{printf("END_PARAMS\n");lineCol+=yyleng;}
beginlocals	{printf("BEGIN_LOCALS\n");lineCol+=yyleng;}
endlocals	{printf("END_LOCALS\n");lineCol+=yyleng;}
beginbody	{printf("BEGIN_BODY\n");lineCol+=yyleng;}
endbody		{printf("END_BODY\n");lineCol+=yyleng;}
read		{printf("READ\n");lineCol+=yyleng;}
beginloop	{printf("BEGINLOOP\n");lineCol+=yyleng;}
endloop		{printf("ENDLOOP\n");lineCol+=yyleng;}
while		{printf("WHILE\n");lineCol+=yyleng;}
and		{printf("AND\n");lineCol+=yyleng;}
or		{printf("OR\n");lineCol+=yyleng;}
of		{printf("OF\n");lineCol+=yyleng;}
if		{printf("IF\n");lineCol+=yyleng;}
false		{printf("FALSE\n");lineCol+=yyleng;}
true		{printf("TRIEE\n");lineCol+=yyleng;}
array		{printf("ARRAY\n");lineCol+=yyleng;}
endif		{printf("ENDIF\n");lineCol+=yyleng;}
then		{printf("THEN\n");lineCol+=yyleng;}
else		{printf("ELSE\n");lineCol+=yyleng;}
continue	{printf("CONTINUE\n");lineCol+=yyleng;}
write		{printf("WRITE\n");lineCol+=yyleng;}
;		{printf("SEMICOLON\n");lineCol+=yyleng;}
:		{printf("COLON\n");lineCol+=yyleng;}
,		{printf("COMMA\n");lineCol+=yyleng;}
do		{printf("DO\n");lineCol+=yyleng;}
">="		{printf("GTE\n");lineCol+=yyleng;}
">"		{printf("GT\n");lineCol+=yyleng;}
"<"		{printf("LT\n");lineCol+=yyleng;}
"<="		{printf("LTE\n");lineCol+=yyleng;}
":="		{printf("ASSIGN\n");lineCol+=yyleng;}
"["		{printf("L_SQUARE_BRACKET\n");lineCol+=yyleng;}
"]"		{printf("R_SQUARE_BRACKET\n");lineCol+=yyleng;}
%		{printf("MOD\n");lineCol+=yyleng;}
==		{printf("EQ\n");lineCol+=yyleng;}
-		{printf("SUB\n");lineCol+=yyleng;}
"*"		{printf("MULT\n");lineCol+=yyleng;}
"("		{printf("L_PAREN\n");lineCol+=yyleng;}
")"		{printf("R_PAREN\n");lineCol+=yyleng;}
"+"		{printf("ADD\n");lineCol+=yyleng;}
"/"		{printf("DIV\n");lineCol+=yyleng;}
integer		{printf("INTEGER\n");lineCol+=yyleng;}
{COMMENT}	{lineCol+=yyleng;}
{NUMBER}	{printf("NUMBER %s\n",yytext);lineCol+=yyleng;}
{ID}		{printf("IDENT %s\n",yytext);lineCol+=yyleng;}
[ \t]+		{lineCol += yyleng;}
{INCORRECT_ID}	{printf("Error at line %d, column %d: unrecognized symbol \"%s\" \n", lineNum, lineCol, yytext);exit(0);}
\n		{++lineNum; lineCol = 1;}
.		{printf("Error at line %d, column %d: unrecognized symbol \"%s\" \n", lineNum, lineCol, yytext);exit(0);}
%%

int main()
{
	yylex();
}
