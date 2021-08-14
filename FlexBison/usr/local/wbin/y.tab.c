
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



#define	YYFINAL		166
#define	YYFLAG		-32768
#define	YYNTBASE	48

#define YYTRANSLATE(x) ((unsigned)(x) <= 301 ? yytranslate[x] : 85)

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
     0,     6,    11,    15,    17,    20,    30,    40,    50,    54,
    56,    57,    60,    62,    66,    68,    70,    75,    79,    81,
    84,    86,    88,    90,    92,    94,    96,    98,   103,   112,
   117,   119,   121,   123,   125,   132,   143,   152,   160,   163,
   164,   172,   174,   177,   184,   188,   189,   191,   195,   197,
   201,   203,   207,   211,   213,   217,   219,   223,   225,   228,
   230,   234,   236,   238,   242,   244,   246,   248,   250,   252,
   257,   261,   263,   265,   269,   271
};

static const short yyrhs[] = {     6,
    45,    50,    49,     3,     0,     6,    45,    49,     3,     0,
    11,    57,    12,     0,    51,     0,    51,    50,     0,     7,
    45,    37,    52,    38,    57,    10,    45,     8,     0,     7,
    45,    37,    52,    38,    57,    10,    46,     8,     0,     7,
    45,    37,    52,    38,    57,    10,    47,     8,     0,    53,
    40,    52,     0,    53,     0,     0,    80,    82,     0,    55,
     0,    55,    40,    54,     0,    79,     0,    82,     0,    45,
    37,    54,    38,     0,    45,    37,    38,     0,    58,     0,
    58,    57,     0,    59,     0,    62,     0,    60,     0,    61,
     0,    56,     0,    84,     0,    29,     0,    82,    41,    71,
    39,     0,    28,    37,    47,    42,    40,    82,    43,    38,
     0,    28,    37,    47,    38,     0,    65,     0,    63,     0,
    64,     0,    67,     0,    13,    37,    71,    38,    57,    14,
     0,    15,    45,    41,    71,    16,    71,    17,    71,    57,
    18,     0,    19,    37,    71,    38,    20,    57,    66,    23,
     0,    21,    37,    71,    38,    20,    57,    66,     0,    22,
    57,     0,     0,    24,    37,    71,    38,    68,    70,    27,
     0,    69,     0,    69,    68,     0,    25,    37,    71,    38,
    44,    57,     0,    26,    44,    57,     0,     0,    72,     0,
    72,    31,    71,     0,    73,     0,    73,    30,    72,     0,
    74,     0,    74,    33,    73,     0,    74,    32,    73,     0,
    75,     0,    75,    34,    74,     0,    76,     0,    76,    35,
    75,     0,    77,     0,    34,    77,     0,    78,     0,    78,
    36,    77,     0,    79,     0,    45,     0,    37,    71,    38,
     0,    56,     0,    46,     0,    47,     0,     5,     0,     4,
     0,    45,    42,    46,    43,     0,    45,    42,    43,     0,
    45,     0,    81,     0,    83,    40,    83,     0,    82,     0,
     9,    80,    83,    39,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    86,    87,    89,    91,    92,    94,    97,   100,   104,   105,
   106,   108,   111,   112,   115,   116,   119,   120,   122,   123,
   125,   126,   128,   129,   130,   131,   132,   134,   136,   137,
   139,   140,   141,   142,   144,   146,   149,   151,   152,   153,
   155,   157,   158,   160,   162,   163,   165,   166,   168,   169,
   171,   172,   173,   175,   176,   178,   179,   181,   182,   184,
   185,   187,   188,   189,   190,   192,   193,   195,   196,   200,
   201,   204,   205,   208,   209,   212
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","T_EOF",
"\"INTEGER\"","\"CHAR\"","\"PROGRAM\"","\"FUNCTION\"","\"END_FUNCTION\"","\"VARS\"",
"\"RETURN\"","\"STARTMAIN\"","\"ENDMAIN\"","\"WHILE\"","\"ENDWHILE\"","\"FOR\"",
"\"TO\"","\"STEP\"","\"ENDFOR\"","\"IF\"","\"THEN\"","\"ELSEIF\"","\"ELSE\"",
"\"ENDIF\"","\"SWITCH\"","\"CASE\"","\"DEFAULT\"","\"ENDSWITCH\"","\"PRINT\"",
"\"BREAK\"","\"AND\"","\"OR\"","\"== or !=\"","\"< or >\"","\"+ or -\"","\"* or /\"",
"\"^\"","\"(\"","\")\"","\";\"","\",\"","\" =\"","\"[\"","\"]\"","\":\"","\"identifier\"",
"\"natural\"","\"string\"","program","mainBlock","functionDeclarations","functionDeclaration",
"parameterDeclarations","parameter","argumentList","argument","functionCall",
"statements","statement","simpleStatement","assignStatement","printStatement",
"nestedStatement","whileStatement","forStatement","ifStatement","elseifStatements",
"switchStatement","caseStatements","caseStatement","defaultStatement","expression",
"andExpression","comparison","addition","multiplication","negation","power",
"input","type","varType","array","variable","variables","varDeclaration", NULL
};
#endif

static const short yyr1[] = {     0,
    48,    48,    49,    50,    50,    51,    51,    51,    52,    52,
    52,    53,    54,    54,    55,    55,    56,    56,    57,    57,
    58,    58,    59,    59,    59,    59,    59,    60,    61,    61,
    62,    62,    62,    62,    63,    64,    65,    66,    66,    66,
    67,    68,    68,    69,    70,    70,    71,    71,    72,    72,
    73,    73,    73,    74,    74,    75,    75,    76,    76,    77,
    77,    78,    78,    78,    78,    79,    79,    80,    80,    81,
    81,    82,    82,    83,    83,    84
};

static const short yyr2[] = {     0,
     5,     4,     3,     1,     2,     9,     9,     9,     3,     1,
     0,     2,     1,     3,     1,     1,     4,     3,     1,     2,
     1,     1,     1,     1,     1,     1,     1,     4,     8,     4,
     1,     1,     1,     1,     6,    10,     8,     7,     2,     0,
     7,     1,     2,     6,     3,     0,     1,     3,     1,     3,
     1,     3,     3,     1,     3,     1,     3,     1,     2,     1,
     3,     1,     1,     3,     1,     1,     1,     1,     1,     4,
     3,     1,     1,     3,     1,     4
};

static const short yydefact[] = {     0,
     0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
     0,     0,     0,     0,    27,    72,    25,     0,    19,    21,
    23,    24,    22,    32,    33,    31,    34,    73,     0,    26,
     2,     0,     5,    11,    69,    68,     0,     0,     0,     0,
     0,     0,     0,     0,     3,    20,     0,     1,     0,    10,
     0,    72,    75,     0,     0,     0,    63,    66,    67,    65,
     0,    47,    49,    51,    54,    56,    58,    60,    62,     0,
     0,     0,     0,    18,     0,    13,    15,    16,    71,     0,
     0,     0,    11,    12,    76,     0,    59,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
     0,    17,     0,    70,    28,     0,     9,    74,    64,     0,
    48,    50,    53,    52,    55,    57,    61,     0,     0,     0,
    46,    42,     0,    14,     0,    35,     0,    40,     0,     0,
     0,    43,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    41,     0,     6,     7,     8,     0,     0,    39,
    37,     0,    45,    29,     0,     0,     0,    36,     0,    44,
     0,    40,    38,     0,     0,     0
};

static const short yydefgoto[] = {   164,
     5,     6,     7,    49,    50,    75,    76,    60,    18,    19,
    20,    21,    22,    23,    24,    25,    26,   140,    27,   121,
   122,   131,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    51,    28,    29,    54,    30
};

static const short yypact[] = {    22,
   -37,     6,   -15,    12,    53,    52,    58,    29,    39,    33,
    28,    37,    38,    42,-32768,   -32,-32768,    64,    12,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    36,-32768,
-32768,    78,-32768,    39,-32768,-32768,    41,   -23,    43,   -23,
   -23,    35,   -12,   -27,-32768,-32768,   -23,-32768,    45,    47,
    41,    46,-32768,    11,    -8,   -23,    56,-32768,-32768,-32768,
    51,    59,    65,    21,    60,    61,-32768,    62,-32768,   -23,
    66,    67,     4,-32768,    68,    57,-32768,-32768,-32768,    69,
    63,    12,    39,-32768,-32768,    41,-32768,    70,    12,   -23,
   -23,   -23,   -23,   -23,   -23,    -8,    84,    83,    82,-32768,
    73,-32768,     2,-32768,-32768,    99,-32768,-32768,-32768,    96,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   -23,    12,    77,
    90,    82,    41,-32768,    13,-32768,   100,    40,   -23,    74,
    92,-32768,    79,   112,   115,   117,   -23,    89,    12,   104,
    91,    12,-32768,    93,-32768,-32768,-32768,    12,   -23,-32768,
-32768,    88,-32768,-32768,   110,    95,    12,-32768,   114,-32768,
    12,    40,-32768,   136,   137,-32768
};

static const short yypgoto[] = {-32768,
   134,   135,-32768,    71,-32768,    44,-32768,    -4,   -18,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   -21,-32768,    23,
-32768,-32768,   -38,    55,   -24,    54,    72,-32768,   -51,-32768,
   -36,   140,-32768,   -31,    75,-32768
};


#define	YYLAST		167


static const short yytable[] = {    17,
    46,    71,    72,    87,    43,    53,    77,     2,    81,    44,
    55,    78,     3,    56,    17,    79,     4,    88,    80,    84,
     9,    57,    58,    59,    10,    74,    11,     1,    56,     8,
    12,    97,    52,    58,    59,    13,    57,    58,    59,    14,
    15,   100,    35,    36,   117,   101,    52,    58,    59,    85,
    86,   111,    92,    93,    53,    31,    16,   134,   135,   136,
   138,   139,     4,   106,     3,    34,    77,   113,   114,    38,
   110,    78,    39,    40,    41,    45,    47,    17,    42,   127,
    48,    73,    82,    70,    17,    52,    83,    44,    89,    90,
   141,   133,    43,    94,    91,    95,   103,    96,   148,   118,
   128,   105,   119,    98,    99,   102,   120,   109,   125,   126,
   156,   104,   123,   129,    17,   130,   137,   142,   143,   145,
   150,   144,   146,   153,   147,   149,   151,   158,   152,   155,
   154,   157,   159,   161,    17,   165,   166,    17,   160,    32,
   163,    33,   162,    17,   132,   112,   124,   115,    37,     0,
     0,     0,    17,   107,     0,     0,    17,     0,     0,     0,
   108,     0,     0,     0,     0,     0,   116
};

static const short yycheck[] = {     4,
    19,    40,    41,    55,    37,    37,    43,    45,    47,    42,
    34,    43,     7,    37,    19,    43,    11,    56,    46,    51,
     9,    45,    46,    47,    13,    38,    15,     6,    37,    45,
    19,    70,    45,    46,    47,    24,    45,    46,    47,    28,
    29,    38,     4,     5,    96,    42,    45,    46,    47,    39,
    40,    90,    32,    33,    86,     3,    45,    45,    46,    47,
    21,    22,    11,    82,     7,    37,   103,    92,    93,    37,
    89,   103,    45,    37,    37,    12,    41,    82,    37,   118,
     3,    47,    38,    41,    89,    45,    40,    42,    38,    31,
   129,   123,    37,    34,    30,    35,    40,    36,   137,    16,
   119,    39,    20,    38,    38,    38,    25,    38,    10,    14,
   149,    43,    40,    37,   119,    26,    17,    44,    27,     8,
   139,    43,     8,   142,     8,    37,    23,    18,    38,   148,
    38,    44,    38,    20,   139,     0,     0,   142,   157,     6,
   162,     7,   161,   148,   122,    91,   103,    94,     9,    -1,
    -1,    -1,   157,    83,    -1,    -1,   161,    -1,    -1,    -1,
    86,    -1,    -1,    -1,    -1,    -1,    95
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
#line 215 "bison.y"


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