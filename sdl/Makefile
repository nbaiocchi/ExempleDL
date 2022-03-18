##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Made by enzo lenzi
##

SRC     =   libSdl.cpp

CFLAGS	+=	-fPIC -Wextra -Wall -Werror -

CFLAGS	+=	-I ../../include/

OBJ     =	$(SRC:.c=.o)

NAME	=   lib_arcade_sdl.so

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME) -shared -fPIC -lSDL2 -lSDL2_ttf

clean:
	rm -f $(NAME)

fclean:	clean

re:	fclean all

.PHONY: all clean fclean re
