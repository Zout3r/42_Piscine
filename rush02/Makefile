NAME = rush-02

SRCS = main.c ft_my_atoi.c

OBJS = ${SRC:.c=.o}

FLAGS = -Werror -Wall -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
