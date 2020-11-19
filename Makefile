FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC =	ft_putchar.c \
		ft_strlen.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_bzero.c \
		*ft_memset.c \
		*ft_memcpy.c \
		*ft_memccpy.c \
		*ft_memmove.c \
		*ft_memchr.c \
		ft_memcmp.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_atoi.c \
		*ft_strdup.c \
		ft_strlcat.c \
		*ft_strrchr.c \
		*ft_strchr.c \
		*ft_strnstr.c \
		*ft_calloc.c


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