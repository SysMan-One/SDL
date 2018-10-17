%define parse.error verbose
%define api.pure true
%locations
%token-table
%glr-parser
%lex-param {void *scanner}
%parse-param {void *scanner}

%{
/* your top code here */
%}

%union {
  int value; // or whatever else here
}

%token LPAREN
%token RPAREN

%%

document
    : exprs

exprs
    : %empty
    | expr exprs

expr
    : parens

parens
    : LPAREN exprs RPAREN


%%

int
yyerror(YYLTYPE *locp, char *msg) {
  if (locp) {
    fprintf(stderr, "parse error: %s (:%d.%d -> :%d.%d)\n",
                    msg,
                    locp->first_line, locp->first_column,
                    locp->last_line,  locp->last_column
    );
    /* todo: add some fancy ^^^^^ error handling here */
  } else {
    fprintf(stderr, "parse error: %s\n", msg);
  }
  return (0);
}
