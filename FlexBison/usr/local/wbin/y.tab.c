
/*  A Bison parser, made from bison.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

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

#line 1 "bison.y"

    #include <stdio.h>
    #include <stdlib.h>

    /* get functions from flex*/
    extern FILE *yyin; 
    extern int yylex();
    extern void yyerror(const char* err);

#line 12 "bison.y"
typedef union {
    int intval;
    char* strval;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		158
#define	YYFLAG		-32768
#define	YYNTBASE	48

#define YYTRANSLATE(x) ((unsigned)(x) <= 301 ? yytranslate[x] : 83)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     5,     9,    13,    15,    18,    28,    38,    48,    52,
    54,    55,    58,    63,    67,    69,    72,    74,    76,    77,
    79,    81,    83,    85,    87,    92,   101,   106,   108,   110,
   112,   114,   121,   132,   141,   149,   152,   153,   161,   163,
   166,   173,   177,   178,   180,   184,   186,   190,   192,   196,
   200,   202,   206,   208,   212,   214,   217,   219,   223,   225,
   227,   231,   233,   235,   237,   239,   241,   246,   248,   252,
   254,   256
};

static const short yyrhs[] = {     6,
    45,    50,    49,     0,     6,    45,    49,     0,    11,    55,
    12,     0,    51,     0,    51,    50,     0,     7,    45,    37,
    52,    38,    55,    10,    45,     8,     0,     7,    45,    37,
    52,    38,    55,    10,    46,     8,     0,     7,    45,    37,
    52,    38,    55,    10,    47,     8,     0,    53,    40,    52,
     0,    53,     0,     0,    78,    81,     0,    45,    37,    80,
    38,     0,    45,    37,    38,     0,    56,     0,    56,    55,
     0,    57,     0,    60,     0,     0,    58,     0,    59,     0,
    54,     0,    82,     0,    29,     0,    81,    41,    69,    39,
     0,    28,    37,    47,    42,    40,    81,    43,    38,     0,
    28,    37,    47,    38,     0,    63,     0,    61,     0,    62,
     0,    65,     0,    13,    37,    69,    38,    55,    14,     0,
    15,    45,    41,    69,    16,    69,    17,    69,    55,    18,
     0,    19,    37,    69,    38,    20,    55,    64,    23,     0,
    21,    37,    69,    38,    20,    55,    64,     0,    22,    55,
     0,     0,    24,    37,    69,    38,    66,    68,    27,     0,
    67,     0,    67,    66,     0,    25,    37,    69,    38,    44,
    55,     0,    26,    44,    55,     0,     0,    70,     0,    70,
    31,    69,     0,    71,     0,    71,    30,    70,     0,    72,
     0,    72,    33,    71,     0,    72,    32,    71,     0,    73,
     0,    73,    34,    72,     0,    74,     0,    74,    35,    73,
     0,    75,     0,    34,    75,     0,    76,     0,    76,    36,
    75,     0,    77,     0,    45,     0,    37,    69,    38,     0,
    54,     0,    46,     0,    47,     0,     5,     0,     4,     0,
    45,    42,    46,    43,     0,    81,     0,    81,    40,    80,
     0,    45,     0,    79,     0,     9,    78,    80,    39,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    74,    75,    77,    79,    80,    82,    85,    88,    92,    93,
    94,    96,    98,    99,   101,   102,   104,   105,   106,   108,
   109,   110,   111,   112,   114,   116,   117,   119,   120,   121,
   122,   124,   126,   129,   131,   132,   133,   135,   137,   138,
   140,   142,   143,   145,   146,   148,   149,   151,   152,   153,
   155,   156,   158,   159,   161,   162,   164,   165,   167,   168,
   169,   170,   172,   173,   175,   176,   180,   182,   183,   185,
   186,   188
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","\"end of file\"",
"\"INTEGER\"","\"CHAR\"","\"PROGRAM\"","\"FUNCTION\"","\"END_FUNCTION\"","\"VARS\"",
"\"RETURN\"","\"STARTMAIN\"","\"ENDMAIN\"","\"WHILE\"","\"ENDWHILE\"","\"FOR\"",
"\"TO\"","\"STEP\"","\"ENDFOR\"","\"IF\"","\"THEN\"","\"ELSEIF\"","\"ELSE\"",
"\"ENDIF\"","\"SWITCH\"","\"CASE\"","\"DEFAULT\"","\"ENDSWITCH\"","\"PRINT\"",
"\"BREAK\"","\"AND\"","\"OR\"","\"== or !=\"","\"< or >\"","\"+ or -\"","\"* or /\"",
"\"^\"","\"(\"","\")\"","\";\"","\",\"","\" =\"","\"[\"","\"]\"","\":\"","\"identifier\"",
"\"natural\"","\"string\"","program","mainBlock","functionDeclarations","functionDeclaration",
"parameterDeclarations","parameter","functionCall","statements","statement",
"simpleStatement","assignStatement","printStatement","nestedStatement","whileStatement",
"forStatement","ifStatement","elseifStatements","switchStatement","caseStatements",
"caseStatement","defaultStatement","expression","andExpression","comparison",
"addition","multiplication","negation","power","input","type","varType","array",
"variables","variable","varDeclaration", NULL
};
#endif

static const short yyr1[] = {     0,
    48,    48,    49,    50,    50,    51,    51,    51,    52,    52,
    52,    53,    54,    54,    55,    55,    56,    56,    56,    57,
    57,    57,    57,    57,    58,    59,    59,    60,    60,    60,
    60,    61,    62,    63,    64,    64,    64,    65,    66,    66,
    67,    68,    68,    69,    69,    70,    70,    71,    71,    71,
    72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
    76,    76,    77,    77,    78,    78,    79,    80,    80,    81,
    81,    82
};

static const short yyr2[] = {     0,
     4,     3,     3,     1,     2,     9,     9,     9,     3,     1,
     0,     2,     4,     3,     1,     2,     1,     1,     0,     1,
     1,     1,     1,     1,     4,     8,     4,     1,     1,     1,
     1,     6,    10,     8,     7,     2,     0,     7,     1,     2,
     6,     3,     0,     1,     3,     1,     3,     1,     3,     3,
     1,     3,     1,     3,     1,     2,     1,     3,     1,     1,
     3,     1,     1,     1,     1,     1,     4,     1,     3,     1,
     1,     4
};

static const short yydefact[] = {     0,
     0,     0,     0,    19,     2,     0,     4,     0,     0,     0,
     0,     0,     0,     0,    24,    70,    22,     0,    15,    17,
    20,    21,    18,    29,    30,    28,    31,    71,     0,    23,
     1,     5,    11,    66,    65,     0,     0,     0,     0,     0,
     0,     0,     0,     3,    16,     0,     0,    10,     0,    70,
     0,    68,     0,     0,    60,    63,    64,    62,     0,    44,
    46,    48,    51,    53,    55,    57,    59,     0,     0,     0,
     0,    14,     0,     0,     0,    19,    11,    12,    72,     0,
    56,     0,    19,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    27,     0,    13,    67,    25,     0,     9,
    69,    61,     0,    45,    47,    50,    49,    52,    54,    58,
     0,    19,     0,    43,    39,     0,     0,    32,     0,    37,
     0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
    19,     0,     0,    19,    38,     0,     6,     7,     8,    19,
     0,    36,    34,     0,    42,    26,     0,     0,    19,    33,
     0,    41,    19,    37,    35,     0,     0,     0
};

static const short yydefgoto[] = {   156,
     5,     6,     7,    47,    48,    58,    18,    19,    20,    21,
    22,    23,    24,    25,    26,   132,    27,   114,   115,   123,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    49,
    28,    51,    29,    30
};

static const short yypact[] = {    17,
   -17,    15,     0,     1,-32768,    30,    41,   -30,    34,    18,
    16,    25,    26,    27,-32768,   -29,-32768,    54,     1,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    28,-32768,
-32768,-32768,    34,-32768,-32768,    22,   -13,    29,   -13,   -13,
    24,   -26,    31,-32768,-32768,   -13,    37,    33,    22,    36,
    42,    40,   -10,   -13,    39,-32768,-32768,-32768,    44,    52,
    38,    21,    53,    51,-32768,    55,-32768,   -13,    50,    57,
     2,-32768,    58,    46,    59,     1,    34,-32768,-32768,    22,
-32768,    61,     1,   -13,   -13,   -13,   -13,   -13,   -13,   -10,
    74,    73,    72,-32768,    60,-32768,-32768,-32768,    91,-32768,
-32768,-32768,    88,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   -13,     1,    66,    79,    72,    22,     5,-32768,    89,    35,
   -13,    63,    82,-32768,    67,   103,   104,   106,   -13,    78,
     1,    94,    80,     1,-32768,    81,-32768,-32768,-32768,     1,
   -13,-32768,-32768,    76,-32768,-32768,   105,    83,     1,-32768,
   108,-32768,     1,    35,-32768,   124,   125,-32768
};

static const short yypgoto[] = {-32768,
   120,   122,-32768,    56,-32768,    -4,   -18,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   -22,-32768,    19,-32768,-32768,
   -37,    62,   -27,    49,    64,-32768,   -47,-32768,-32768,   129,
-32768,   -38,   -31,-32768
};


#define	YYLAST		153


static const short yytable[] = {    17,
    45,    69,    70,    73,    52,    81,    33,    42,    75,     9,
    52,    72,    43,    10,    17,    11,    82,    78,    50,    12,
    53,     3,     1,    54,    13,     4,    54,     2,    14,    15,
    91,    55,    56,    57,    55,    56,    57,    34,    35,    94,
     4,   101,   110,    95,     8,    16,   104,     3,    52,   126,
   127,   128,    86,    87,    37,   130,   131,    99,   106,   107,
    38,    39,    40,    41,   103,    44,    50,    85,    46,    68,
    71,    17,    77,   119,    76,    42,    74,    43,    17,    80,
    79,    83,    84,   133,   125,    89,    88,    92,    97,   111,
    90,   140,   112,   120,    93,    96,   113,    98,   102,   116,
   117,   118,   121,   148,   122,   129,   134,    17,   135,   136,
   137,   138,   142,   139,   141,   145,   143,   144,   146,   149,
   151,   147,   150,   157,   158,    31,    17,   153,    32,    17,
   152,   155,   100,   124,   154,    17,   108,    36,     0,     0,
     0,     0,     0,     0,    17,     0,   105,     0,    17,     0,
     0,     0,   109
};

static const short yycheck[] = {     4,
    19,    39,    40,    42,    36,    53,    37,    37,    46,     9,
    42,    38,    42,    13,    19,    15,    54,    49,    45,    19,
    34,     7,     6,    37,    24,    11,    37,    45,    28,    29,
    68,    45,    46,    47,    45,    46,    47,     4,     5,    38,
    11,    80,    90,    42,    45,    45,    84,     7,    80,    45,
    46,    47,    32,    33,    37,    21,    22,    76,    86,    87,
    45,    37,    37,    37,    83,    12,    45,    30,    41,    41,
    47,    76,    40,   111,    38,    37,    46,    42,    83,    40,
    39,    38,    31,   121,   116,    35,    34,    38,    43,    16,
    36,   129,    20,   112,    38,    38,    25,    39,    38,    40,
    10,    14,    37,   141,    26,    17,    44,   112,    27,    43,
     8,     8,   131,     8,    37,   134,    23,    38,    38,    44,
    38,   140,    18,     0,     0,     6,   131,    20,     7,   134,
   149,   154,    77,   115,   153,   140,    88,     9,    -1,    -1,
    -1,    -1,    -1,    -1,   149,    -1,    85,    -1,   153,    -1,
    -1,    -1,    89
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/local/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/local/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 191 "bison.y"


int main( int argc, char *argv[]){
    int token;
    if(argc > 1){
        yyin = fopen(argv[1], "r");
        if(yyin == NULL){
            perror ("Error opening file");
            return -1;
        }
    }

    yyparse();

    fclose(yyin);
    return 0;
}