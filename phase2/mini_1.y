%{
#include <stdio.h>
#include <stdlib.h>
extern FILE * yyin;
extern int lineNum;
void yyerror(const char * msg);
extern char* yytext;
%}

%union{
	char * cVal;
	int iVal;
	double dVal;
}

%token FUNCTION SEMICOLON IDENT NUMBER

%token BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS

%token BEGIN_BODY END_BODY READ BEGINLOOP ENDLOOP WHILE

%token OF IF FALSE TRUE ARRAY

%token ENDIF THEN ELSE CONTINUE WRITE

%token COLON COMMA DO FOR

%token L_SQUARE_BRACKET R_SQUARE_BRACKET

%token L_PAREN R_PAREN INTEGER NOT RETURN

%left MULT DIV MOD ADD SUB LT LTE GT GTE EQ NEQ AND OR

%right NOT ASSIGN

%start program


%%

program: 	function program
		{printf("program->function program\n");}
		|
		/*epsilon*/
		{printf("program->epsilon\n");}

decl_loop:	declaration SEMICOLON decl_loop
		{printf("decl->declaration SEMICOLON decl_loop\n");}
		|
		/*epsilon*/
		{printf("decl_loop->epsilon\n");}

stmt_loop:      statement SEMICOLON stmt_loop
                {printf("stmt_loop->statement SEMICOLON stmt_loop\n");}
                |
                statement SEMICOLON /*epsilon*/
                {printf("stmt_loop->statement SEMICOLON epsilon\n");}

function:	FUNCTION IDENT SEMICOLON BEGIN_PARAMS decl_loop END_PARAMS BEGIN_LOCALS decl_loop END_LOCALS
		BEGIN_BODY stmt_loop END_BODY
		{printf("decl_loop->FUNCTION IDENT SEMICOLON BEGIN_PARAMS decl_loop END_PARAMS BEGIN_LOCALS decl_loop END_LOCALS BEGIN_BODY stmt_loop END_BODY\n");}


declaration:	IDENT declaration_2
		{printf("declaration->IDENT declaration_2\n");}

declaration_2: 	COMMA IDENT declaration_2
		{printf("declaration_2->COMMA IDENT declaration_2\n");}
		|
		COLON declaration_3 INTEGER
		{printf("declaration_2->COLON declaration_3 INTEGER\n");}

declaration_3: 	ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET declaration_4 OF
	 	{printf("declaration_3->ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET declaration_4 OF\n");}
		|
		/*epsilon*/
		{printf("declaration_3->epsilon\n");}

declaration_4:	L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET
		{printf("declaration_4->L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET\n");}
		|
		/*epsilon*/
		{printf("declaration_4->epsilon\n");}

statement:	statement_1
		{printf("statement->statement_1\n");}
		|
		statement_2
                {printf("statement->statement_2\n");}
		|
		statement_3
                {printf("statement->statement_3\n");}
		|
		statement_4
                {printf("statement->statement_4\n");}
		|
		statement_5
                {printf("statement->statement_5\n");}
		|
		statement_6
                {printf("statement->statement_6\n");}
		|
		statement_7
		{printf("statement->statement_7\n");}
		|
		CONTINUE
		{printf("statement->CONTINUE\n");}
		|
		RETURN expression
		{printf("statement->RETURN expression\n");}

statement_1:	var ASSIGN expression
		{printf("statement_1->var ASSIGN expression\n");}

statement_2:	IF bool_exp THEN stmt_loop statement_21 ENDIF
		{printf("statement_2->IF bool_exp THEN stmt_loop statement_21 ENDIF\n");}

statement_21:	ELSE stmt_loop
		{printf("statement_21->ELSE stmt_loop\n");}
		|
		/*epsilon*/
		{printf("statement_21->epsilon\n");}

statement_3:	WHILE bool_exp BEGINLOOP stmt_loop ENDLOOP
		{printf("statement_3->WHILE bool_exp BEGINLOOP stmt_loop ENDLOOP\n");}

statement_4:	DO BEGINLOOP stmt_loop ENDLOOP WHILE bool_exp
		{printf("statement_4->DO BEGINLOOP stmt_loop ENDLOOP WHILE bool_exp\n");}

statement_5:	READ var statement_51
		{printf("statement_5->READ var statement_51\n");}

statement_51:	COMMA var statement_51
		{printf("statement_51->COMMA var statement_51\n");}
		|
		/*epsilon*/
		{printf("statement_51->epsilon\n");}

statement_6:	WRITE var statement_61
		{printf("statement_6->WRITE var statement_61\n");}

statement_61:	COMMA var statement_61
		{printf("statement_61->COMMA var statement_61\n");}
		|
		/*epsilon*/
		{printf("statement_61->epsilon\n");}

statement_7:	FOR var ASSIGN NUMBER SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP stmt_loop ENDLOOP
		{printf("statement_7->FOR var ASSIGN NUMBER SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP stmt_loop ENDLOOP\n");}

bool_exp:	rel_and_exp bool_exp2
		{printf("bool_exp->rel_and_exp bool_exp2\n");}

bool_exp2:	OR rel_and_exp bool_exp2
		{printf("bool_exp2->OR rel_and_exp bool_exp2\n");}
		|
		/*epsilon*/
		{printf("bool_exp2->epsilon\n");}

rel_and_exp:	relation_exp rel_and_exp2
		{printf("rel_and_exp->relation_exp rel_and_exp2\n");}

rel_and_exp2:	AND relation_exp rel_and_exp2
		{printf("rel_and_exp2->AND relation_exp rel_and_exp2\n");}
		|
		/*epsilon*/
		{printf("rel_and_exp2->epsilon\n");}

relation_exp:	relation_exp_s
		{printf("relation_exp->relation_exp_s\n");}
		|
		NOT relation_exp_s
		{printf("relation_exp->NOT relation_exp_s\n");}

relation_exp_s:	expression comp expression
		{printf("relation_exp_s->expression comp expression\n");}
		|
		TRUE
		{printf("relation_exp_s->TRUE\n");}
		|
		FALSE
		{printf("relation_exp_s->FALSE\n");}
		|
		L_PAREN bool_exp R_PAREN
		{printf("relation_exp_s->L_PAREN bool_exp R_PAREN\n");}

comp:	EQ
	{printf("comp->EQ\n");}
	|
	NEQ
	{printf("comp->NEQ\n");}
	|
	LT
	{printf("comp->LT\n");}
	|
	GT
	{printf("comp->GT\n");}	
	|
	LTE
	{printf("comp->LTE\n");}
	|
	GTE
	{printf("comp->GTE\n");}

expression:	mult_expr expression_2
		{printf("expression->mult_expr expression_2\n");}

expression_2:	ADD mult_expr expression_2
		{printf("expression_2->ADD mult_expr expression_2\n");}
		|
		SUB mult_expr expression_2
		{printf("expression_2->SUB mult_expr expression_2\n");}
		|
		/*epsilon*/
		{printf("expression_2->epsilon\n");}

mult_expr:	term mult_expr_2
		{printf("mult_expr->term mult_expr_2\n");}

mult_expr_2:	MULT mult_expr
		{printf("mult_expr_2->MULT mult_expr\n");}
		|
		DIV mult_expr
		{printf("mult_expr_2->DIV mult_expr\n");}
		|
		MOD mult_expr
		{printf("mult_expr_2->MOD mult_expr\n");}
		|
		/*epsilon*/
		{printf("mult_expr_2->epsilon\n");}

term:	SUB term_2
	{printf("term->SUB term_2\n");}
	|
	term_2
	{printf("term->term_2\n");}
	|
	term_3
	{printf("term->term_3\n");}

term_2:	var
	{printf("term_2->var\n");}
	|
	NUMBER
	{printf("term_2->NUMBER\n");}
	|
	L_PAREN expression R_PAREN
	{printf("term_2->L_PAREN expression R_PAREN\n");}

term_3:	IDENT L_PAREN term_31 R_PAREN
	{printf("term_3->IDENT L_PAREN term_31 R_PAREN\n");}

term_31:	expression term_32
		{printf("term_31->expression term_32\n");}
		|
		/*epsilon*/
		{printf("term_31->epsilon\n");}

term_32:	COMMA term_31
		{printf("term_32->COMMA term_31\n");}
		|
		/*epsilon*/
		{printf("term_32->epsilon\n");}

var:	IDENT var_2
	{printf("var->IDENT var_2\n");}
	
var_2:	L_SQUARE_BRACKET expression R_SQUARE_BRACKET var_3
	{printf("var_2->L_SQUARE_BRACKET expression R_SQUARE_BRACKET var_3\n");}
	|
	/*epsilon*/
	{printf("var_2->epsilon\n");}

var_3:	L_SQUARE_BRACKET expression R_SQUARE_BRACKET
	{printf("L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
	|
	/*epsilon*/
	{printf("var_3->epsilon\n");}





%%

void yyerror(const char * msg){
	printf("Error found: %s at \"%s\" on line%d\n", msg, yytext, lineNum);
	exit(1);
}


int main(int argc, char ** argv)
{
	if(argc >= 2)
	{
		yyin = fopen(argv[1],"r");
		if(yyin == NULL)
		{
			yyin = stdin;
		}
	}
	else
	{
		yyin = stdin;
	}

	yyparse(); //calls yylex()

	return 1;
}
	
