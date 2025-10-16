# Nom de la bibliothèque
NAME = libft.a

# Compilateur et options
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Commandes
AR = ar rcs
RM = rm -f

# Fichiers sources (tous les fichiers ft_*.c du dossier courant)
SRC = $(wildcard ft_*.c)

# Fichiers objets correspondants
OBJ = $(SRC:.c=.o)

# Règle par défaut
all: $(NAME)

# Création de la bibliothèque
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	@echo "✅ Bibliothèque $(NAME) créée avec succès."

# Compilation des fichiers .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Supprimer les fichiers objets
clean:
	$(RM) $(OBJ)
	@echo "🧹 Fichiers objets supprimés."

# Supprimer les fichiers objets et la bibliothèque
fclean: clean
	$(RM) $(NAME)
	@echo "🗑️ Bibliothèque supprimée."

# Recompiler tout proprement
re: fclean all

# Marque les règles comme non-fichiers
.PHONY: all clean fclean re
