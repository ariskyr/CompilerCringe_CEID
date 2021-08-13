bison -y -d calc.y 
flex calc.l
gcc -c y.tab.c lex.yy.c
gcc y.tab.o lex.yy.o -o parser

