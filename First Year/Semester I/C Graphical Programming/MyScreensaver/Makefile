##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Adrien Colombier
##

CC	=	gcc

SRC	=	src/main.c									\
			src/screenSaver.c						\
			src/init/init.c							\
			src/init/free.c							\
			src/draw/draw.c							\
			src/draw/shapeDrawer.c			\
			src/draw/circle.c						\
			src/util/cursor.c						\
			src/logic/screenSaverOne.c	\
			src/logic/sceneFunctions.c

OBJECTS =	${SRC:.c=.o}

NAME	=	my_screensaver

CFLAGS	+=	-Wall -Wextra -pedantic -Ofast -I./include -g

LDFLAGS	+=	-L./lib -lmerlineC -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all:	${NAME}

%.o:	%.c
	@echo -e "\e[0;94mCompiled\t\e[0;95m$<\e[39m -> \e[38;5;208m$@\e[39m"
	@${CC} -c ${CFLAGS} $< -o $@

${NAME}:	${OBJECTS}
	@make -C ./lib --no-print-directory
	@${CC} -o ${NAME} ${OBJECTS} ${LDFLAGS}
	@echo -e "\e[0;92mDone ${NAME}\e[0m"

clean:
	@rm -f ${OBJECTS}
	@make clean -C ./lib --no-print-directory

fclean:	clean
	@rm -f ${NAME}
	@echo -e "\e[0;92mExecutable:\e[38;5;124m\tDeleted\e[0m"
	@make fclean -C ./lib --no-print-directory

re:	fclean all

.PHONY:	all clean fclean re
