SRCS = \
	mxtrans.c mxadj.c \
	crossp.c \
	floatminmax.c \

OBJS = ${SRCS:.c=.o}

NAME = libftmath.a

CC     = gcc
CFLAGS = -Wall -Wextra #-Werror


${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}
	rm -f *.gch

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
