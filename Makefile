# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 11:46:19 by olegmulko         #+#    #+#              #
#    Updated: 2019/07/03 11:59:04 by olegmulko        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT =./libft

FTSTR=./ftstr

FTDIR=./ftdir

FTDAR=./ftdar

all: libft ftstr ftdir ftdar

.PHONY: libft
libft:
	make -C $(LIBFT)

.PHONY: ftstr
ftstr:
	make -C $(FTSTR)

.PHONY: ftdir
ftdir:
	make -C $(FTDIR)

.PHONY: ftdar
ftdar:
	make -C $(FTDAR)

clean:
	make clean -C $(LIBFT)
	make clean -C $(FTSTR)
	make clean -C $(FTDIR)
	make clean -C $(FTDAR)

fclean:	clean
	make fclean -C $(LIBFT)
	make fclean -C $(FTSTR)
	make fclean -C $(FTDIR)
	make fclean -C $(FTDAR)

re: fclean all
