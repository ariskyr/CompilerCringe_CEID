/* lexer file for flex */

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "tokens.h"

    void token_print(int token_id);

%}

%option noyywrap
%option yylineno

%%


"INTEGER"           { token_print(T_INTEGER); return T_INTEGER; }
"CHAR"              { token_print(T_CHAR); return T_CHAR; }
"PROGRAM"           { token_print(T_PROGRAM); return T_PROGRAM; }
"FUNCTION"          { token_print(T_FUNCTION); return T_FUNCTION; }
"END_FUNCTION"      { token_print(T_END_FUNCTION); return T_END_FUNCTION; }
"VARS"              { token_print(T_VARS); return T_VARS; }
"RETURN"            { token_print(T_RETURN); return T_RETURN; }
"STARTMAIN"         { token_print(T_STARTMAIN); return T_STARTMAIN; }
"ENDMAIN"           { token_print(T_ENDMAIN); return T_ENDMAIN; }
"WHILE"             { token_print(T_WHILE); return T_WHILE; }
"ENDWHILE"          { token_print(T_ENDWHILE); return T_ENDWHILE; }
"FOR"               { token_print(T_FOR); return T_FOR; }
"TO"                { token_print(T_TO); return T_TO; }
"STEP"              { token_print(T_STEP); return T_STEP; }
"ENDFOR"            { token_print(T_ENDFOR); return T_ENDFOR; }
"IF"                { token_print(T_IF); return T_IF; }
"THEN"              { token_print(T_THEN); return T_THEN; }
"ELSEIF"            { token_print(T_ELSEIF); return T_ELSEIF; }
"ELSE"              { token_print(T_ELSE); return T_ELSE; }
"ENDIF"             { token_print(T_ENDIF); return T_ENDIF; }
"SWITCH"            { token_print(T_SWITCH); return T_SWITCH; }
"CASE"              { token_print(T_CASE); return T_CASE; }
"DEFAULT"           { token_print(T_DEFAULT); return T_DEFAULT; }
"ENDSWITCH"         { token_print(T_ENDSWITCH); return T_ENDSWITCH; }
"PRINT"             { token_print(T_PRINT); return T_PRINT; }
"BREAK"             { token_print(T_BREAK); return T_BREAK; }

"AND"               { token_print(T_AND); return T_AND; }
"OR"                { token_print(T_OR); return T_OR; }

.                   { printf("Unrecognized character: %s at line: %d.\n", yytext, yylineno); }
<<EOF>>             { return 0; }

%%

int main( int argc, char *argv[]){
    int token;
    if(argc > 1){
        yyin = fopen(argv[1], "r");
        if(yyin == NULL){
            perror ("Error opening file");
            return -1;
        }
    }

    do{
        token = yylex();
    }while(token != 0);

    fclose(yyin);
    yyterminate();
}

void token_print(int token_id){
    printf("Found token %s (%d) at line %d.\n", yytext, token_id, yylineno);
}