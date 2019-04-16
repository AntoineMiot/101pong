##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## infin-add
##

SRC	=	main.c	\
		disp_description.c

OBJ		=	$(SRC:.c=.o)

NAME	=	101pong

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -g3 -lm -o $(NAME) $(OBJ)
	rm *.o

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
