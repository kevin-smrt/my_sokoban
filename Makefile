##
## EPITECH PROJECT, 2019
## makefile
## File description:
## Makefile
##

NAME	= 	my_sokoban

SRC	=	lib/my_strcmp.c	\
		lib/my_putstr.c	\
		lib/my_puterror.c	\
		src/open_file.c	\
		src/str_to_word_array.c	\
		src/chained_list.c	\
		src/init_map.c	\
		src/game_loop.c	\
		src/player_move.c	\
		src/directions.c	\
		src/stop_now.c	\
		src/display_and_free_map.c	\
		src/main.c


OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Wextra -I./include -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lncurses

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
