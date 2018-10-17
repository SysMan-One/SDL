
flex -d -i --header-file=sdl_lexer.h --outfile=sdl_lexer.c sdl_lexer.l
bison -d -t --debug --report=all --output-file=sdl_parser.c --defines=sdl_parser.h --warnings=all --feature=all sdl_parser.y
#gcc -g -w -DYYDEBUG=1 -D_DEBUG=1 sdl_main.c sdl_lexer.c sdl_parser.c sdl_parser_rtns.c utility_routines.c -o sdl
