# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 13:57:06 by aashara-          #+#    #+#              #
#    Updated: 2019/07/16 10:08:54 by olegmulko        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftstr.a

SRC_SEARCH =srcs/ft_get_cnt_words.c\
			srcs/ft_is_str_contain.c\
			srcs/ft_last_word_pos.c\
			srcs/ft_del_sym_str.c\
			srcs/ft_match.c\
			srcs/ft_num_match.c\
			srcs/ft_strdel_el.c\
			srcs/ft_strdup_realloc.c\
			srcs/ft_stradd.c\

SRC = $(wildcard $(SRC_SEARCH))

OBJ = $(SRC:.c=.o)

INCLUDES = -I includes -I ../libft/includes

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc -c $< -o $@ -Wall -Wextra -Werror $(INCLUDES)

.PHONY: clean
clean:
	rm -rf $(OBJ)

.PHONY: fclean
fclean:	clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all

