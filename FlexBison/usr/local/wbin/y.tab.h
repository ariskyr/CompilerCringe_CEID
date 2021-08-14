typedef union {
    int intval;
    char* strval;
} YYSTYPE;
#define	T_EOF	257
#define	T_INTEGER	258
#define	T_CHAR	259
#define	T_PROGRAM	260
#define	T_FUNCTION	261
#define	T_END_FUNCTION	262
#define	T_VARS	263
#define	T_RETURN	264
#define	T_STARTMAIN	265
#define	T_ENDMAIN	266
#define	T_WHILE	267
#define	T_ENDWHILE	268
#define	T_FOR	269
#define	T_TO	270
#define	T_STEP	271
#define	T_ENDFOR	272
#define	T_IF	273
#define	T_THEN	274
#define	T_ELSEIF	275
#define	T_ELSE	276
#define	T_ENDIF	277
#define	T_SWITCH	278
#define	T_CASE	279
#define	T_DEFAULT	280
#define	T_ENDSWITCH	281
#define	T_PRINT	282
#define	T_BREAK	283
#define	T_ANDOP	284
#define	T_OROP	285
#define	T_EQOP	286
#define	T_RELOP	287
#define	T_ADDOP	288
#define	T_MULOP	289
#define	T_EXPOP	290
#define	T_LPAREN	291
#define	T_RPAREN	292
#define	T_SEMIC	293
#define	T_COMMA	294
#define	T_ASSIGN	295
#define	T_LBRACK	296
#define	T_RBRACK	297
#define	T_COLON	298
#define	T_ID	299
#define	T_NATURAL	300
#define	T_STRING	301


extern YYSTYPE yylval;
