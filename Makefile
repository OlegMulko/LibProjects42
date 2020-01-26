# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 11:46:19 by olegmulko         #+#    #+#              #
#    Updated: 2020/01/26 15:44:56 by aashara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft := libft

libstr := libstr

libdir := libdir

libdar := libdar

libstack := libstack

libfifo := libfifo

libhash := libhash

.PHONY: all clean fclean $(libft) $(libstr) $(libdir) $(libdar) $(libstack) $(libfifo) $(libhash)

all: $(libft) $(libstr) $(libdir) $(libdar) $(libstack) $(libfifo) $(libhash)

$(libft):
	@$(MAKE) --no-print-directory -C $(libft)

$(libstr):
	@$(MAKE) --no-print-directory -C $(libstr)

$(libdir):
	@$(MAKE) --no-print-directory -C $(libdir)

$(libdar):
	@$(MAKE) --no-print-directory -C $(libdar)

$(libstack):
	@$(MAKE) --no-print-directory -C $(libstack)

$(libfifo):
	@$(MAKE) --no-print-directory -C $(libfifo)

$(libhash):
	@$(MAKE) --no-print-directory -C $(libhash)

clean:
	@$(MAKE) clean --no-print-directory -C  $(libft)
	@$(MAKE) clean --no-print-directory -C  $(libstr)
	@$(MAKE) clean --no-print-directory -C  $(libdir)
	@$(MAKE) clean --no-print-directory -C  $(libdar)
	@$(MAKE) clean --no-print-directory -C  $(libstack)
	@$(MAKE) clean --no-print-directory -C  $(libfifo)
	@$(MAKE) clean --no-print-directory -C  $(libhash)

fclean:
	@$(MAKE) fclean --no-print-directory -C  $(libft)
	@$(MAKE) fclean --no-print-directory -C  $(libstr)
	@$(MAKE) fclean --no-print-directory -C  $(libdir)
	@$(MAKE) fclean --no-print-directory -C  $(libdar)
	@$(MAKE) fclean --no-print-directory -C  $(libstack)
	@$(MAKE) fclean --no-print-directory -C  $(libfifo)
	@$(MAKE) fclean --no-print-directory -C  $(libhash)

re: fclean all
