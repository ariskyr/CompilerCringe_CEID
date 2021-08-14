%{
    #include <stdio.h>
    #include <stdlib.h>

    /* get functions from flex*/
    extern FILE *yyin; 
    extern int yylex();
    extern void yyerror(const char* err);
%}

/* stack type definitions for memory alloc */
%union {
    int intval;
    char* strval;
}

/*tokens with type and description */

%token T_EOF 0

%token T_INTEGER        "INTEGER"
%token T_CHAR           "CHAR"
%token T_PROGRAM        "PROGRAM"
%token T_FUNCTION       "FUNCTION"
%token T_END_FUNCTION   "END_FUNCTION"
%token T_VARS           "VARS"
%token T_RETURN         "RETURN"
%token T_STARTMAIN      "STARTMAIN"
%token T_ENDMAIN        "ENDMAIN"
%token T_WHILE          "WHILE"
%token T_ENDWHILE       "ENDWHILE"
%token T_FOR            "FOR"
%token T_TO             "TO"
%token T_STEP           "STEP"
%token T_ENDFOR         "ENDFOR"
%token T_IF             "IF"
%token T_THEN           "THEN"
%token T_ELSEIF         "ELSEIF"
%token T_ELSE           "ELSE"
%token T_ENDIF          "ENDIF"
%token T_SWITCH         "SWITCH"
%token T_CASE           "CASE"
%token T_DEFAULT        "DEFAULT"
%token T_ENDSWITCH      "ENDSWITCH"
%token T_PRINT          "PRINT"
%token T_BREAK          "BREAK"

%token T_ANDOP          "AND"
%token T_OROP           "OR"

%token T_EQOP           "== or !="
%token T_RELOP          "< or >"
%token T_ADDOP          "+ or -"
%token T_MULOP          "* or /"
%token T_EXPOP          "^"

%token T_LPAREN         "("
%token T_RPAREN         ")"
%token T_SEMIC          ";"
%token T_COMMA          ","
%token T_ASSIGN         " ="
%token T_LBRACK         "["
%token T_RBRACK         "]"
%token T_COLON          ":"

%token T_ID             "identifier"
%token T_NATURAL        "natural"

%token T_STRING         "string"

/* associativity */
%left T_COMMA
%right T_ASSIGN
%left T_OROP
%left T_ANDOP
%left T_EQOP
%left T_RELOP
%left T_ADDOP
%left T_MULOP
%left T_EXPOP
%left T_LPAREN T_RPAREN T_LBRACK T_RBRACK


%%

program: T_PROGRAM T_ID  functionDeclarations mainBlock T_EOF
       | T_PROGRAM T_ID   mainBlock T_EOF
       ;
mainBlock: T_STARTMAIN statements T_ENDMAIN
         ;
functionDeclarations: functionDeclaration
                    | functionDeclaration functionDeclarations
                    ;
functionDeclaration: T_FUNCTION T_ID T_LPAREN parameterDeclarations T_RPAREN  
                        statements
                        T_RETURN T_ID T_END_FUNCTION
                   | T_FUNCTION T_ID T_LPAREN parameterDeclarations T_RPAREN  
                        statements
                        T_RETURN T_NATURAL T_END_FUNCTION
                   | T_FUNCTION T_ID T_LPAREN parameterDeclarations T_RPAREN  
                        statements
                        T_RETURN T_STRING T_END_FUNCTION
                   ;
parameterDeclarations: parameter T_COMMA parameterDeclarations
                     | parameter
                     | 
                     ;
parameter: varType variable
         ;

argumentList: argument
            | argument T_COMMA argumentList
            ;

argument: type
        | variable
        ;

functionCall: T_ID T_LPAREN argumentList T_RPAREN
            | T_ID T_LPAREN T_RPAREN
            ;
statements: statement
          | statement statements
          ;
statement: simpleStatement
         | nestedStatement
         ;
simpleStatement: assignStatement
               | printStatement
               | functionCall
               | varDeclaration
               | T_BREAK
               ;
assignStatement: variable T_ASSIGN expression T_SEMIC
               ;
printStatement: T_PRINT T_LPAREN T_STRING T_LBRACK T_COMMA variable T_RBRACK T_RPAREN
              | T_PRINT T_LPAREN T_STRING T_RPAREN
              ;
nestedStatement: ifStatement
               | whileStatement
               | forStatement
               | switchStatement
               ;
whileStatement: T_WHILE T_LPAREN expression T_RPAREN statements T_ENDWHILE
              ;
forStatement: T_FOR T_ID T_ASSIGN expression T_TO expression T_STEP expression
                    statements T_ENDFOR
            ;
ifStatement: T_IF T_LPAREN expression T_RPAREN T_THEN statements elseifStatements T_ENDIF
           ;
elseifStatements: T_ELSEIF T_LPAREN expression T_RPAREN T_THEN statements elseifStatements
                | T_ELSE statements
                |
                ;
switchStatement: T_SWITCH T_LPAREN expression T_RPAREN caseStatements defaultStatement T_ENDSWITCH
               ;
caseStatements: caseStatement
              | caseStatement caseStatements
              ;
caseStatement: T_CASE T_LPAREN expression T_RPAREN T_COLON statements
             ;
defaultStatement: T_DEFAULT T_COLON statements
                |
                ;
expression: andExpression
          | andExpression T_OROP expression
          ;
andExpression: comparison
             | comparison T_ANDOP andExpression
             ;
comparison: addition
          | addition T_RELOP comparison
          | addition T_EQOP comparison
          ;
addition: multiplication
        | multiplication T_ADDOP addition
        ;
multiplication: negation
              | negation T_MULOP multiplication
              ;
negation: power
        | T_ADDOP power
        ;
power: input
     | input T_EXPOP power
     ;
input: type
     | T_ID
     | T_LPAREN expression T_RPAREN
     | functionCall
     ;
type: T_NATURAL
    | T_STRING
    ;
varType: T_CHAR
       | T_INTEGER
       ;


array: T_ID T_LBRACK T_NATURAL T_RBRACK
     | T_ID T_LBRACK T_RBRACK
     ;

variable: T_ID
        | array
        ;
     
variables: variables T_COMMA variables
         | variable
         ;

varDeclaration: T_VARS varType variables T_SEMIC
              ;

%%

int main( int argc, char *argv[]){
    if(argc > 1){
        yyin = fopen(argv[1], "r");
        if(yyin == NULL){
            perror ("Error opening file");
            return -1;
        }
    }

    if(yyparse() == 0){
        printf("No errors found!");
    }
    else{
        printf(yyparse());
    };

    fclose(yyin);
    return 0;
}