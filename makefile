SRCS = \
	mxdet.c mxtrans.c mxadj.c mxinv.c mxm.c mxv.c \
	subvec.c crossp.c cartesian.c \
	floatminmax.c \
	figcontain.c \

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
