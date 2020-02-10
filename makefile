SRCS = \
	mxinit.c mxcpy.c \
	mxdet.c mxtrans.c mxadj.c mxinv.c mxm.c mxv.c \
	mxproj.c \
	addvec.c subvec.c cartesian.c \
	dotprod.c crossp.c \
	floatminmax.c \
	figcontain.c \
	plane.c \
	boundingbox.c boundingbox2.c \

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
