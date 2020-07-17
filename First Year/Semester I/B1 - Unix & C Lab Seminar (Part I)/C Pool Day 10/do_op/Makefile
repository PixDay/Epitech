##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Adrien Colombier
##

CC	=	gcc

SRC	=	main.c

OBJECTS =	${SRC:.c=.o}

NAME	=	do_op

CFLAGS	+=	-Wall -Wextra -pedantic -Ofast

all:	${NAME}

%.o:	%.c
	@echo "\e[0;94mCompiled\t\e[0;95m$<\e[39m -> \e[38;5;208m$@\e[39m"
	@${CC} -c ${CFLAGS} $< -o $@

${NAME}:	${OBJECTS}
	@${CC} -o ${NAME} ${OBJECTS} -L../lib -lmy
	@echo "\e[0;92mDone ${NAME}\e[0m"

clean:
	@rm -f ${OBJECTS}
	@echo "\e[38;5;208mObjects:\e[38;5;124m\tDeleted\e[0m"

fclean:	clean
	@rm -f ${NAME}
	@echo "\e[0;92mExecutable:\e[38;5;124m\tDeleted\e[0m"

re:	fclean all

.PHONY:	all clean fclean re
