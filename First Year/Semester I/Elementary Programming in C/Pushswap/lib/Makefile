##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Adrien Colombier
##

CC 		=	gcc

SRCS	=	src/my_strlen.c	\
				src/my_getnbr.c

OBJ	=	${SRCS:.c=.o}

%.o:	%.c
	@echo  "\e[0;94mCompiled\t\e[0;95mlib/$<\e[39m -> \e[38;5;208mlib/$@\e[39m"
	@${CC} -c $< -o $@ -I./include

NAME	=	libmerlineC.a

all:	${NAME}

$(NAME):	${OBJ}
	@ar rc ${NAME} ${OBJ}

clean:
	@rm -f ${OBJ}
	@echo  "\e[38;5;208mObjects:\e[38;5;124m\tDeleted\e[0m"

fclean:	clean
	@rm -f ${NAME}
	@echo  "\e[0;92mLibrary:\e[38;5;124m\tDeleted\e[0m"

re:	fclean all

.PHONY:	all clean fclean re
