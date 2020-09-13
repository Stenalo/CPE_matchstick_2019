##
## EPITECH PROJECT, 2019
## compiler
## File description:
## function library
##

NAME	=	libmy.a

SRC	=	my_putchar.c	\
		my_isneg.c \
		mem_set.c	\
		my_put_nbr.c \
		my_swap.c \
		my_putstr.c \
		my_strlen.c \
		my_getnbr.c \
		my_compute_power_rec.c \
		my_compute_square_root.c \
		my_is_prime.c \
		my_find_prime_sup.c \
		my_strcpy.c \
		my_strncpy.c \
		check_char3.c \
		my_revstr.c \
		nbr_len.c	\
		my_itoa.c	\
		my_strstr.c \
		my_strcmp.c \
		my_str_num_neg.c \
		my_strncmp.c \
		my_strupcase.c \
		my_strlowcase.c \
		my_strcapitalize.c \
		my_str_isalpha.c \
		my_str_isnum.c \
		my_strcat.c \
		my_strncat.c \
		my_str_islower.c \
		my_str_isupper.c \
		check_char.c	\
		my_strdup.c	\
		check_char2.c	\
		my_str_isprintable.c	\
		is_char_digit.c	\
		my_rev_getnbr.c	\
		is_res_neg.c	\

OBJ	=	$(SRC:.c=.o)

INCLUDE	=	-I./include

CC		=	gcc

COMP	=	ar rc

CFLAGS	=	-W -Wall

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(COMP) $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
