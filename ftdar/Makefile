# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 13:57:06 by aashara-          #+#    #+#              #
#    Updated: 2019/07/05 17:01:33 by aashara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftdar.a

SRC_SEARCH =srcs/ft_check_exec.c\
			srcs/ft_dar_add.c\
			srcs/ft_darlen.c\
			srcs/ft_free_dar.c\
			srcs/ft_dardup.c\

SRC = $(wildcard $(SRC_SEARCH))

OBJ = $(SRC:.c=.o)

INCLUDES = -I includes -I ../libft/includes

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c libft
	gcc -c $< -o $@ -Wall -Wextra -Werror $(INCLUDES)

.PHONY: libft
libft:
	make -C ../libft

.PHONY: clean
clean:
	rm -rf $(OBJ)

.PHONY: fclean
fclean:	clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all

