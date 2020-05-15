parser:  y.tab.c lex.yy.c -lfl
	gcc -o parser y.tab.c lex.yy.c -lfl

lex.yy.c: mini_1.lex
	flex mini_1.lex

y.tab.c: mini_1.y
	bison -v -d --file-prefix=y mini_1.y

clean:
	rm lex.yy.c
	rm y.tab.c
	rm y.tab.h
	rm y.output
	rm parser*	
