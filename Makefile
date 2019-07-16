# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olegmulko <olegmulko@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 11:46:19 by olegmulko         #+#    #+#              #
#    Updated: 2019/07/16 10:33:31 by olegmulko        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT =./libft

FTSTR=./ftstr

FTDIR=./ftdir

FTDAR=./ftdar

FTSTACK=./ftstack

all: libft ftstr ftdir ftdar ftstack

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

.PHONY: ftstack
ftstack:
	make -C $(FTSTACK)

clean:
	make clean -C $(LIBFT)
	make clean -C $(FTSTR)
	make clean -C $(FTDIR)
	make clean -C $(FTDAR)
	make clean -C $(FTSTACK)

fclean:	clean
	make fclean -C $(LIBFT)
	make fclean -C $(FTSTR)
	make fclean -C $(FTDIR)
	make fclean -C $(FTDAR)
	make fclean -C $(FTSTACK)

re: fclean all
