# Compiler Project using Flex/Bison

simple project to understand the use of lexical and syntax analyzers (Flex/Bison).
Pseudo-language following the rules of the C programming language for variable names and order of operations.
Keywords used are actually more like pascal.

## Executing Program

nothing to execute yet

## Authors

- [@Aris_Kyriakopoulos](https://github.com/SneakyTattas)
- [@Thanos_Karousos](https://github.com/ThanosKarousos)

## Versions History

- 0.2
  - Flex file initialisation (reserved keywords definition + a simple function to print the tokens)
  * Added BNF Grammar functions and program structure. Practically the end of the grammar
  * Flex addition of operators and conditions, indentification of natural numbers and identifiers using regex, also ignoring whitespace

* 0.1
  - Initial Commit
  * Added BNF Grammar comment and print definitions as well arithmetic operators
  * Made BNF Grammar rules so that the bison parse tree will follow order of operations and associativity of c
  * Added BNF Grammar statements for both simple statements like assignment and nested (if for while switch)

## Known Issues

- statements can be completely empty atm which is a mistake (ex. IF(Expression) THEN ENDIF. correct way would be to have at least a simple statement)

* BNF grammar, cant print multiple strings or variables, just 1 string that can be followed by a variable
