# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 14:00:45 by jjourdan          #+#    #+#              #
#    Updated: 2020/11/25 19:19:21 by jjourdan         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

FLAGS		=	-Wall -Wextra -Werror

NAME		=	libft.a

SRC			=	ft_putchar.c \
				ft_strlen.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_bzero.c \
				ft_memset.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strncmp.c \
				ft_strlcpy.c \
				ft_atoi.c \
				ft_strdup.c \
				ft_strlcat.c \
				ft_strrchr.c \
				ft_strchr.c \
				ft_strnstr.c \
				ft_calloc.c \
				ft_my_strjoin.c \
				ft_strcat.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_my_split.c \
				ft_split.c \
				ft_itoa.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_strmapi.c


OBJ			=	$(SRC:.c=.o)

BONUS		=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c

BONUS_OBJ	=	$(BONUS:.c=.o)

all:			$(NAME)

$(NAME): $(OBJ) $(BONUS_OBJ)
		@ar rc $(NAME) $(OBJ) $(BONUS_OBJ)
		@echo "$(NAME) created"
		@ranlib $(NAME)
		@echo "$(NAME) indexed"

%.o: %.c
		@gcc $(FLAGS) -c $< -o $@

bonus:			$(OBJS) $(BONUS_OBJ)
		ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
		@rm -f $(OBJ) $(BONUS_OBJ)
		@echo "OBJ and BONUS_OBJ cleaned"

fclean:			clean
		@rm -f $(NAME)
		@echo "$(NAME) cleaned"

re:				fclean all

.PHONY: all, clean, fclean, re, bonus
