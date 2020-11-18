FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC =	ft_putchar.c \
		ft_strlen.c \
		ft_isalpha.c


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

%.o: %.c
	@gcc $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) cleaned"

re: fclean all

.PHONY: all, clean, fclean, re