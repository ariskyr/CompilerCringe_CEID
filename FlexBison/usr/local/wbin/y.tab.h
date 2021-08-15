typedef union {
    int intval;
    char* strval;
} YYSTYPE;
#define	T_INTEGER	257
#define	T_CHAR	258
#define	T_PROGRAM	259
#define	T_FUNCTION	260
#define	T_END_FUNCTION	261
#define	T_VARS	262
#define	T_RETURN	263
#define	T_STARTMAIN	264
#define	T_ENDMAIN	265
#define	T_WHILE	266
#define	T_ENDWHILE	267
#define	T_FOR	268
#define	T_TO	269
#define	T_STEP	270
#define	T_ENDFOR	271
#define	T_IF	272
#define	T_THEN	273
#define	T_ELSEIF	274
#define	T_ELSE	275
#define	T_ENDIF	276
#define	T_SWITCH	277
#define	T_CASE	278
#define	T_DEFAULT	279
#define	T_ENDSWITCH	280
#define	T_PRINT	281
#define	T_BREAK	282
#define	T_ANDOP	283
#define	T_OROP	284
#define	T_EQOP	285
#define	T_RELOP	286
#define	T_ADDOP	287
#define	T_MULOP	288
#define	T_EXPOP	289
#define	T_LPAREN	290
#define	T_RPAREN	291
#define	T_SEMIC	292
#define	T_COMMA	293
#define	T_ASSIGN	294
#define	T_LBRACK	295
#define	T_RBRACK	296
#define	T_COLON	297
#define	T_ID	298
#define	T_NATURAL	299
#define	T_STRING	300


extern YYSTYPE yylval;
