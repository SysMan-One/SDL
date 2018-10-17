#include "parser.h"
#include "lexer.h"

int
main(int argc, char **argv) {
  int result;
  yyscan_t scanner;

  yylex_init(&scanner);
  result = (yyparse(scanner));
  yylex_destroy(scanner);
  return (result);
}

