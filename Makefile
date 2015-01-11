NAME =				ft_retro
CC =				g++
INCLUDES =			./includes/
CFLAGS =			-Wall -Wextra -Werror\
					-I$(INCLUDES) -c -g -o
LDFLAGS =			-lncurses -o
SRC_DIR =			./srcs/
OBJ_DIR =			./obj/
SRCS =				Element.class.cpp \
					Projectile.class.cpp \
					Ship.class.cpp \
					Weapon.class.cpp \
					main.cpp
OBJ =				$(SRCS:.cpp=.o)

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir $@

$(NAME): $(addprefix $(OBJ_DIR), $(OBJ))
	$(CC) $(LDFLAGS) $@ $^

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) $(CFLAGS) $@ $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
