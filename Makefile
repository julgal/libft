NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = srcs
INCLUDE_DIR = includes

SRCS = $(wildcard $(SRCS_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(NAME) compilée avec succès!"

%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@echo "Fichiers objets supprimés."

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) supprimée."

re: fclean all

.PHONY: all clean fclean re
