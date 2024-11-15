NAME = program
CC = cc
CFLAGS = -Wextra -Wall -Werror
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)

# Règle par défaut
all: $(NAME)

# Lier les fichiers objets pour créer l'exécutable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# Règle pour compiler les fichiers .c en .o, avec dépendance sur libft.h
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ)

# Nettoyage complet (objets et exécutable)
fclean: clean
	rm -f $(NAME)

# Recompiler tout à partir de zéro
re: fclean all

