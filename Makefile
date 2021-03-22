# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 10:55:11 by jjourdan          #+#    #+#              #
#    Updated: 2021/03/22 11:26:34 by jjourdan         ###   ########lyon.fr    #
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

NAME		=	

ARGS		=	

CC			=	gcc

RM			=	rm -f

FLAGS		=	-Wall -Wextra -Werror

DEBUG_FLAGS	=	-Wall -Wextra -fsanitize=address

DEBUG_OUT	=	debug.out

INCS_DIR	=	includes/

INCS		=	

INCS_FULL	=	$(addprefix $(INCS_DIR), $(INCS))

SRCS_DIR	=	sources/

SRCS		=	

SRCS_FULL	=	$(addprefix $(SRCS_DIR), $(SRCS))

OBJS		=	$(SRCS_FULL:.c=.o)

MAKE_SUB	=	make -C

LIBS_DIR	=	libs/

LIBS		=	libkema/

LIBS_FULL	=	$(addprefix $(LIBS_DIR), $(LIBS))

LIBS_FILES	=	libs/libkema/libkema.a

all:			libs $(NAME)

%.o: 			%.c  $(INCS_FULL)
				$(CC) $(FLAGS) -I $(INC_DIR) -c $< -o $@

$(NAME): 		$(OBJS)
				$(CC) $(LIBS_FILES) $(OBJS) -o $(NAME)

libs:
				$(foreach lib,$(LIBS_FULL), $(MAKE_SUB) $(lib))

norme:			fclean
				printf "\033c"
				$(foreach lib,$(LIBS_FULL), norminette $(lib))
				norminette $(SRCS_DIR)
				norminette $(INCS_DIR)

debug:			libs $(OBJS)
				$(CC) $(DEBUG_FLAGS) $(LIBS_FILES) $(OBJS) -o $(DEBUG_OUT)
				printf "\033c"
				./$(DEBUG_OUT) $(ARGS)

leaks:			all
				printf "\033c"
				leaks --atExit -- ./$(NAME) $(ARGS)

clean:
				$(RM) $(OBJS)
				$(foreach lib_dir,$(LIBS_DIR), $(MAKE_SUB) $(lib_dir) clean)

fclean:			clean
				$(RM) $(NAME)
				$(RM) $(DEBUG_OUT)
				$(foreach lib_dir,$(LIBS_DIR), $(MAKE_SUB) $(lib_dir) fclean)

re:				fclean all

.PHONY: all, libs, norme, debug, leaks, clean, fclean, re