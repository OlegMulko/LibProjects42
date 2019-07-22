# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 13:57:06 by aashara-          #+#    #+#              #
#    Updated: 2019/07/22 10:06:43 by olegmulko        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftfifo.a

SRC_SEARCH = srcs/ft_newfifo.c \
			 srcs/ft_del_fifo.c \
			 srcs/ft_clear_fifo.c \
			 srcs/ft_add_fifo.c \
			 srcs/ft_get_fifo.c \

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
