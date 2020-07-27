##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## adrien.colombier@epitech.eu
##

CC 		=	gcc

SRCS	=	my_putchar.c				\
			my_isneg.c					\
			my_put_nbr.c				\
			my_swap.c					\
			my_putstr.c					\
			my_strlen.c					\
			my_getnbr.c					\
			my_sort_int_array.c			\
			my_compute_power_rec.c		\
			my_compute_square_root.c	\
			my_is_prime.c				\
			my_find_prime_sup.c			\
			my_strcpy.c					\
			my_strncpy.c				\
			my_revstr.c					\
			my_strstr.c					\
			my_strcmp.c					\
			my_strncmp.c				\
			my_strupcase.c				\
			my_strlowcase.c				\
			my_strcapitalize.c			\
			my_str_isalpha.c			\
			my_str_isnum.c				\
			my_str_islower.c			\
			my_str_isupper.c			\
			my_str_isprintable.c		\
			my_showstr.c				\
			my_strcat.c					\
			my_strncat.c

OBJ	=	${SRCS:.c=.o}

%.o:	%.c
	@echo "\e[0;94mCompiled\t\e[0;95m$<\e[39m -> \e[38;5;208m$@\e[39m"
	@${CC} -c $< -o $@ -I../include

NAME	=	libmy.a

all:	${NAME}

$(NAME):	${OBJ}
	@ar rc ${NAME} ${OBJ}

clean:
	@rm -f ${OBJ}
	@echo "\e[38;5;208mObjects:\e[38;5;124m\tDeleted\e[0m"

fclean:	clean
	@rm -f ${NAME}
	@echo "\e[0;92mLibrary:\e[38;5;124m\tDeleted\e[0m"

re:	fclean all

.PHONY:	all clean fclean re
