# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 13:57:06 by aashara-          #+#    #+#              #
#    Updated: 2019/07/16 10:53:44 by olegmulko        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftstack.a

SRC_SEARCH = srcs/ft_newstack.c \
			 srcs/ft_del_stack.c \
			 srcs/ft_clear_stack.c \
			 srcs/ft_add_stack.c \
			 srcs/ft_get_stack.c \
			 srcs/ft_stack.c \

SRC = $(wildcard $(SRC_SEARCH))

OBJ = $(SRC:.c=.o)

INCLUDES = -I ./includes -I ../libft/includes

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc -g -O0 -c $< -o $@ -Wall -Wextra -Werror $(INCLUDES)

.PHONY: clean
clean:
	rm -rf $(OBJ)

.PHONY: fclean
fclean:	clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all
