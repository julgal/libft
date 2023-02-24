NAME = libft.a

SRCS = ft_atoi.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_isalnum.c ft_putchar_fd.c ft_strlen.c ft_putstr_fd.c

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm -f

FLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${FLAGS} -g -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${NAME}

re: fclean all
