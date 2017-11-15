SRCS = sdl_main.c sdl_lexer.y sdl_parser.y
CSRCS = sdl_main.c sdl_lexer.c sdl_parser.c sdl_parser_rtns.c ../SecurityCode/vCloud/utility_routines.c


OBJS = sdl_main.o sdl_lexer.o sdl_parser.o sdl_parser_rtns.o utility_routines
EXES = sdl
CFLAGS+=-g -w -I../SecurityCode/vCloud/ -DYYDEBUG=1 -D_DEBUG=1


sdl: $(CSRCS)
	gcc $(CFLAGS) $(CSRCS) -o sdl

sdl_lexer.o: sdl_lexer.c sdl_lexer.h sdl_parser.h

sdl_parser.o: sdl_parser.c sdl_lexer.h sdl_parser.h

sdl_main.o: sdl_main.c sdl_parser.h sdl_lexer.h




sdl_lexer.c sdl_lexer.h: sdl_lexer.l sdl_parser.h
# -L --noline
	flex -d -i --header-file=sdl_lexer.h --outfile=sdl_lexer.c sdl_lexer.l

sdl_parser.c sdl_parser.h: sdl_parser.y
	bison -d -t --debug --report=all --output-file=sdl_parser.c --defines=sdl_parser.h --warnings=all --feature=all sdl_parser.y
