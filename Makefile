# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 11:46:19 by olegmulko         #+#    #+#              #
#    Updated: 2019/08/05 17:22:10 by aashara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT =./libft

FTSTR=./ftstr

FTDIR=./ftdir

FTDAR=./ftdar

FTSTACK=./ftstack

FTFIFO=./ftfifo

all: libft ftstr ftdir ftdar ftstack ftfifo

.PHONY: libft ftstr ftdir ftdar ftstack ftfifo

libft:
	@$(MAKE) --no-print-directory -C $(LIBFT)

ftstr:
	@$(MAKE) --no-print-directory -C $(FTSTR)

ftdir:
	@$(MAKE) --no-print-directory -C $(FTDIR)

ftdar:
	@$(MAKE) --no-print-directory -C $(FTDAR)

ftstack:
	@$(MAKE) --no-print-directory -C $(FTSTACK)

ftfifo:
	@$(MAKE) --no-print-directory -C $(FTFIFO)

clean:
	@$(MAKE) clean --no-print-directory -C  $(LIBFT)
	@$(MAKE) clean --no-print-directory -C  $(FTSTR)
	@$(MAKE) clean --no-print-directory -C  $(FTDIR)
	@$(MAKE) clean --no-print-directory -C  $(FTDAR)
	@$(MAKE) clean --no-print-directory -C  $(FTSTACK)
	@$(MAKE) clean --no-print-directory -C  $(FTFIFO)

fclean:
	@$(MAKE) fclean --no-print-directory -C  $(LIBFT)
	@$(MAKE) fclean --no-print-directory -C  $(FTSTR)
	@$(MAKE) fclean --no-print-directory -C  $(FTDIR)
	@$(MAKE) fclean --no-print-directory -C  $(FTDAR)
	@$(MAKE) fclean --no-print-directory -C  $(FTSTACK)
	@$(MAKE) fclean --no-print-directory -C  $(FTFIFO)

re: fclean all
