SRCS = main.c ft_algo.c ft_conditions.c ft_errors.c ft_print_number.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = rush-02

RM = rm -f

all: ${NAME}

${NAME}:
	${CC} ${CFLAGS} -o ${NAME} ${SRCS}

clean: 
	${RM} ${NAME}

fclean: clean

re : fclean all
