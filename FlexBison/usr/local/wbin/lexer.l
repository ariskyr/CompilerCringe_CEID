/* lexer file for flex */

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "y.tab.h"
    //#include "tokens.h" only here if I need to test flex file 

    char str_buf[256];
    int error_count = 0;

    void token_print(int token_id);
    void yyerror(const char* err);

%}

%option noyywrap
%option yylineno

/* sub lexer */
%x SQUOTE_STRING
%x DQUOTE_STRING

%x SL_COMMENT
%x ML_COMMENT

/* definitions */
NONZERO             [1-9]
DIGIT               (0)|{NONZERO}
LETTER              [a-zA-Z]
ALPHANUM            {LETTER}|{DIGIT}
ALPHANUM_           [a-zA-Z0-9_]

NATURAL             {NONZERO}[0-9]*|{DIGIT}

IDENTIFIER          _*{LETTER}{ALPHANUM_}*

%%

"INTEGER"                   { token_print(T_INTEGER); return T_INTEGER; }
"CHAR"                      { token_print(T_CHAR); return T_CHAR; }
"PROGRAM"                   { token_print(T_PROGRAM); return T_PROGRAM; }
"FUNCTION"                  { token_print(T_FUNCTION); return T_FUNCTION; }
"END_FUNCTION"              { token_print(T_END_FUNCTION); return T_END_FUNCTION; }
"VARS"                      { token_print(T_VARS); return T_VARS; }
"RETURN"                    { token_print(T_RETURN); return T_RETURN; }
"STARTMAIN"                 { token_print(T_STARTMAIN); return T_STARTMAIN; }
"ENDMAIN"                   { token_print(T_ENDMAIN); return T_ENDMAIN; }
"WHILE"                     { token_print(T_WHILE); return T_WHILE; }
"ENDWHILE"                  { token_print(T_ENDWHILE); return T_ENDWHILE; }
"FOR"                       { token_print(T_FOR); return T_FOR; }
"TO"                        { token_print(T_TO); return T_TO; }
"STEP"                      { token_print(T_STEP); return T_STEP; }
"ENDFOR"                    { token_print(T_ENDFOR); return T_ENDFOR; }
"IF"                        { token_print(T_IF); return T_IF; }
"THEN"                      { token_print(T_THEN); return T_THEN; }
"ELSEIF"                    { token_print(T_ELSEIF); return T_ELSEIF; }
"ELSE"                      { token_print(T_ELSE); return T_ELSE; }
"ENDIF"                     { token_print(T_ENDIF); return T_ENDIF; }
"SWITCH"                    { token_print(T_SWITCH); return T_SWITCH; }
"CASE"                      { token_print(T_CASE); return T_CASE; }
"DEFAULT"                   { token_print(T_DEFAULT); return T_DEFAULT; }
"ENDSWITCH"                 { token_print(T_ENDSWITCH); return T_ENDSWITCH; }
"PRINT"                     { token_print(T_PRINT); return T_PRINT; }
"BREAK"                     { token_print(T_BREAK); return T_BREAK; }

{IDENTIFIER}                { token_print(T_ID); yylval.strval = strdup(yytext); return T_ID; } /* yylval deiktis sto union me ta types sto bison */
{NATURAL}                   { token_print(T_NATURAL); yylval.intval = strdup(yytext); return T_NATURAL; }

\"                          { strcpy(str_buf, ""); BEGIN(DQUOTE_STRING); }
<DQUOTE_STRING>\"                  { BEGIN(INITIAL); printf("Found string: '%s'\n", str_buf); yylval.strval = strdup(str_buf); return T_STRING; }
<DQUOTE_STRING>(\\\n|\\\r\n)       {   }
<DQUOTE_STRING>(\\.|[^"\\])        { 
                                if(yyleng == 2) {
                                       if(strcmp(yytext, "\\n") == 0) {
                                           strcat(str_buf, "\n");
                                       } else if (strcmp(yytext, "\\t") == 0) {
                                           strcat(str_buf, "\t");
                                       } else if (strcmp(yytext, "\\r") == 0) {
                                           strcat(str_buf, "\r");
                                       } else {
                                           strcat(str_buf, &yytext[1]);
                                       }
                                } else {
                                    strcat(str_buf, yytext);
                                }
                            }
<DQUOTE_STRING>(\n|\r\n)           { yyerror("New line found without \\"); }
<DQUOTE_STRING><<EOF>>             { yyerror("End of string without closing it."); }
<DQUOTE_STRING>.                   { yyerror("Unknown character."); }


\'                          { strcpy(str_buf, ""); BEGIN(SQUOTE_STRING); }
<SQUOTE_STRING>\'                  { BEGIN(INITIAL); printf("Found string: '%s'\n", str_buf); yylval.strval = strdup(str_buf); return T_STRING; }
<SQUOTE_STRING>(\\\n|\\\r\n)       {   }
<SQUOTE_STRING>(\\.|[^"\\])        { 
                                if(yyleng == 2) {
                                       if(strcmp(yytext, "\\n") == 0) {
                                           strcat(str_buf, "\n");
                                       } else if (strcmp(yytext, "\\t") == 0) {
                                           strcat(str_buf, "\t");
                                       } else if (strcmp(yytext, "\\r") == 0) {
                                           strcat(str_buf, "\r");
                                       } else {
                                           strcat(str_buf, &yytext[1]);
                                       }
                                } else {
                                    strcat(str_buf, yytext);
                                }
                            }
<SQUOTE_STRING>(\n|\r\n)           { yyerror("New line found without \\"); }
<SQUOTE_STRING><<EOF>>             { yyerror("End of string without closing it."); }
<SQUOTE_STRING>.                   { yyerror("Unknown character."); }

\%                          { BEGIN(SL_COMMENT); }
<SL_COMMENT>(\n|\r\n)       { BEGIN(INITIAL); }
<SL_COMMENT>.               {   }

"/*"                        { BEGIN(ML_COMMENT); }
<ML_COMMENT>("*/")             { BEGIN(INITIAL); }
<ML_COMMENT>.               {   }

"AND"                       { token_print(T_ANDOP); return T_ANDOP; }
"OR"                        { token_print(T_OROP); return T_OROP; }

"==" | "!="                 { token_print(T_EQOP); return T_EQOP; }
">"  | "<"                  { token_print(T_RELOP); return T_RELOP; }
"+"  | "-"                  { token_print(T_ADDOP); return T_ADDOP; }
"*"  | "/"                  { token_print(T_MULOP); return T_MULOP; }
"^"                         { token_print(T_EXPOP); return T_EXPOP; }

"("                         { token_print(T_LPAREN); return T_LPAREN; }
")"                         { token_print(T_RPAREN); return T_RPAREN; }
";"                         { token_print(T_SEMIC); return T_SEMIC; }
","                         { token_print(T_COMMA); return T_COMMA; }
"="                         { token_print(T_ASSIGN); return T_ASSIGN; }
"["                         { token_print(T_LBRACK); return T_LBRACK; }
"]"                         { token_print(T_RBRACK); return T_RBRACK; }

[\n]                        {   }
[ \t]                       {   }
[\r\n]                      {   }

<<EOF>>                     { token_print(T_EOF); return T_EOF; }

.                           { yyerror("Unrecognized character."); }


%%

void token_print(int token_id){
    printf("Found token %s (%d) at line %d.\n", yytext, token_id, yylineno);
}

void yyerror(const char* err) {
    error_count ++;
    printf("[ERROR - LINE %d] %s\n", yylineno, err);
}