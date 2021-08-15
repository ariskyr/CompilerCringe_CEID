# Compiler Project using Flex/Bison

simple project to understand the use of lexical and syntax analyzers (Flex/Bison).
Pseudo-language following the rules of the C programming language for variable names and order of operations.
Keywords used are actually more like pascal.

## Executing Program

Executing the program requires the Flex and Bison tools for lexical analysis and a parse tree generator.
You will also need a gcc compiler (any will work like cygwin or mingw).

for compiling the Flex file lexer.l alone:

```
./flex.exe lexer.l
gcc lex.yy.c
./a.exe input.file
```

for compiling both flex and bison files

```
./flex.exe lexer.l
./bison.exe -v -d -y bison.y
gcc y.tab.c lex.yy.c -lm
./a.exe input.test
```

## Authors

- [@Aris_Kyriakopoulos](https://github.com/SneakyTattas)
- [@Thanos_Karousos](https://github.com/ThanosKarousos)

## Versions History

- 0.3
  - Bison file with full grammar and tokens. need to reduce ambiguous statements and fix newlines and var assignments.
  * small change in BNF Grammar (needed an argument list for function calls). Core Bison parser works, but still can't
    assign or declare variables.
  * Bison parser syntax analyzer complete. Implementation of a hashtable for storing identifiers with their data and scopes.

* 0.2
  - Flex file initialisation (reserved keywords definition + a simple function to print the tokens)
  * Added BNF Grammar functions and program structure. Practically the end of the grammar
  * Flex addition of operators and conditions, identification of natural numbers and identifiers using regex, also ignoring whitespace
  * Flex identification of strings, ignoring both single and multi line comments. Error handling with a simple function

- 0.1
  - Initial Commit
  * Added BNF Grammar comment and print definitions as well arithmetic operators
  * Made BNF Grammar rules so that the bison parse tree will follow order of operations and associativity of c
  * Added BNF Grammar statements for both simple statements like assignment and nested (if for while switch)

## Known Issues

- BNF grammar, cant print multiple strings or variables, just 1 string that can be followed by a variable

* Lacking variable definitions and declarations in memory.
