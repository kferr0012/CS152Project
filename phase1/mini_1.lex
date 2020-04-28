/*
 * Phase 1
 */

DIGIT	[0-9]
ALPHA	[a-zA-Z]
NUMBER	{DIGIT}+
COMMENT	(##).*
ID	({ALPHA})(({ALPHA}|{DIGIT}|_)*({ALPHA}|{DIGIT}))?

%%
function	{printf("FUNCTION\n");}
beginparams	{printf("BEGIN_PARAMS\n");}
endparams	{printf("END_PARAMS\n");}
beginlocals	{printf("BEGIN_LOCALS\n");}
endlocals	{printf("END_LOCALS\n");}
beginbody	{printf("BEGIN_BODY\n");}
endbody		{printf("END_BODY\n");}
read		{printf("READ\n");}
beginloop	{printf("BEGINLOOP\n");}
endloop		{printf("ENDLOOP\n");}
while		{printf("WHILE\n");}
and		{printf("AND\n");}
or		{printf("OR\n");}
of		{printf("OF\n");}
if		{printf("IF\n");}
false		{printf("FALSE\n");}
true		{printf("TRIEE\n");}
array		{printf("ARRAY\n");}
endif		{printf("ENDIF\n");}
then		{printf("THEN\n");}
else		{printf("ELSE\n");}
continue	{printf("CONTINUE\n");}
write		{printf("WRITE\n");}
;		{printf("SEMICOLON\n");}
:		{printf("COLON\n");}
,		{printf("COMMA\n");}
do		{printf("DO\n");}
">="		{printf("GTE\n");}
">"		{printf("GT\n");}
"<"		{printf("LT\n");}
"<="		{printf("LTE\n");}
":="		{printf("ASSIGN\n");}
"["		{printf("L_SQUARE_BRACKET\n");}
"]"		{printf("R_SQUARE_BRACKET\n");}
%		{printf("MOD\n");}
==		{printf("EQ\n");}
-		{printf("SUB\n");}
"*"		{printf("MULT\n");}
"("		{printf("L_PAREN\n");}
")"		{printf("R_PAREN\n");}
"+"		{printf("ADD\n");}
"/"		{printf("DIV\n");}
integer		{printf("INTEGER\n");}
{COMMENT}	{}
{NUMBER}	{printf("NUMBER %s\n",yytext);}
{ID}		{printf("IDENT %s\n",yytext);}
\n		{}
.		{printf("Error at line %d, column %d: unrecognized symbol \"%s\" \n", lineNum, lineCol, yytext);}
%%

main()
{
	yylex();
}
