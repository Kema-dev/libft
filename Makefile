# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 11:26:11 by jjourdan          #+#    #+#              #
#    Updated: 2021/03/19 11:31:59 by jjourdan         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# *******************************    POST-IT    ****************************** #
#                                                                              #
#			## $@ 	Le nom de la cible										   #
#			## $< 	Le nom de la première dépendance						   #
#			## $^ 	La liste des dépendances								   #
#			## $? 	La liste des dépendances plus récentes que la cible		   #
#			## $* 	Le nom du fichier sans suffixe							   #
#                                                                              #
# **************************************************************************** #

FLAGS		=	-Wall -Wextra -Werror

NAME		=	libkema.a

CC			=	gcc

RM			=	rm -f

INC_DIR	=	includes/

INCLUDES	=	libft.h \
				gnl.h \
				ft_printf.h

INC_FULL	=	$(addprefix $(INC_DIR), $(INCLUDES))

SRCS_DIR	=	sources/

LIBFT_DIR	=	libft/

LIBFT_SRCS	=	ft_putchar.c \
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
				ft_strcat.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_strmapi.c \
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

LIBFT_FULL	=	$(addprefix $(LIBFT_DIR), $(LIBFT_SRCS))

GNL_DIR		=	gnl/

GNL_SRCS	=	ft_gnl_1.c \
				ft_gnl_2.c

GNL_FULL	=	$(addprefix $(GNL_DIR), $(GNL_SRCS))

PRINTF_DIR	=	ft_printf/

PRINTF_SRCS	=	sources/utils/ft_printf_atoi.c \
				sources/utils/ft_printf_itoa.c \
				sources/utils/ft_printf_memset.c \
				sources/utils/ft_printf_putchar_fd.c \
				sources/utils/ft_printf_strlen.c \
				sources/utils/ft_printf_utoa.c \
				sources/utils/ft_printf_xtoa.c \
				sources/utils/ft_printf_putstr_fd.c \
				sources/utils/ft_printf_calloc.c \
				sources/utils/ft_printf_ptoa.c \
				sources/ft_printf_flag_init.c \
				sources/ft_printf_flag_reset.c \
				sources/ft_printf_get_add_flags.c \
				sources/ft_printf_get_first_flags.c \
				sources/ft_printf_get_flag.c \
				sources/ft_printf_get_prec.c \
				sources/ft_printf_get_type.c \
				sources/ft_printf_get_width.c \
				sources/ft_printf_print_c.c \
				sources/ft_printf_print_s.c \
				sources/ft_printf_print_x.c \
				sources/ft_printf.c \
				sources/ft_printf_treat_flag.c \
				sources/ft_printf_treat_input.c \
				sources/ft_printf_print_normal.c \
				sources/ft_printf_print_percent.c \
				sources/ft_printf_print_p.c

PRINTF_FULL	=	$(addprefix $(PRINTF_DIR), $(PRINTF_SRCS))

ALL_SRCS	+=	$(LIBFT_FULL)
ALL_SRCS	+=	$(GNL_FULL)
ALL_SRCS	+=	$(PRINTF_FULL)

SRCS_FULL	=	$(addprefix $(SRCS_DIR), $(ALL_SRCS))

OBJS		=	$(SRCS_FULL:.c=.o)

all:			$(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $?

%.o: %.c		$(INC_FULL)
		$(CC) -I $(INC_DIR) $(FLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean:			clean
		$(RM) $(NAME)

re:				fclean all

.PHONY: all, clean, fclean, re