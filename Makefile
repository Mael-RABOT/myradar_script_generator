##
## EPITECH PROJECT, 2022
## B-MUL-100-LYN-1-1-myradar-mael.rabot
## File description:
## Makefile
##

SRC	=	script_generator.c	\
		random.c	\
		make_line.c	\

NAME	=	script_generator

LIBS = -L./lib/ -lmy

FLAGS = -Wall

MSG_START = "COMPILING ..."

MSG_END = "COMPILATION ENDED"

MSG_EXE = "EXECUTING ..."

$(NAME):	$(SRC) cpl
	gcc -o $(NAME) $(SRC) $(LIBS)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f *.out

cpl:
	cd lib && make && make clean && cd ..

re: cpl fclean all
