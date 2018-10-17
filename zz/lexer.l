%option bison-bridge
%option bison-locations
%option ecs
%option nodefault
%option noyywrap
%option reentrant
%option stack
%option warn
%option yylineno

%{
  #include "parser.h"
%}

%%

"(" { return (LPAREN); }
")" { return (RPAREN); }

[ \f\r\t\v\n]+ /* eat whitespace */

%%

/* don't use lexer.l for code, organize it logically elsewhere */

