##
## EPITECH PROJECT, 2019
## make
## File description:
## file
##

CC	=	gcc

NAME	=	matchstick

SRC		=	src/main.c	\
			src/matchstick.c	\
			src/init_map.c	\
			src/print_turns.c	\
			src/info_line.c	\
			src/remove_matches.c	\
			src/get_input.c	\
			src/ai_turn.c	\
			src/print_map.c

LDFLAGS	=	-Iinclude -lmy -L lib/my

CFLAGS	=	-Wall -Wshadow -Wextra -g

OBJ	=	$(SRC:%c=%o)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		make -C lib/my
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean	:
		make -C lib/my clean
		$(RM) $(OBJ)

fclean	:	clean
		make -C lib/my fclean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
