# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aashara- <aashara-@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 11:46:19 by olegmulko         #+#    #+#              #
#    Updated: 2019/08/09 11:08:37 by aashara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft = libft

libstr = libstr

libdir = libdir

libdar = libdar

libstack = libstack

libfifo = libfifo

lib_dir = lib_archive

.PHONY: all lclean lfclean fclean create_dir

all: $(libft) $(libstr) $(libdir) $(libdar) $(libstack) $(libfifo) $(lib_dir)

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

$(lib_dir): $(libft) $(libstr) $(libdir) $(libdar) $(libstack) $(libfifo)
	@echo "\033[32m\033[1mCreate libs directory $(CURDIR)/$(lib_dir)\033[0m"
	@mkdir -p $(lib_dir)
	@echo "\033[32m\033[1mCopy libs to $(CURDIR)/$(lib_dir)\033[0m"
	@cp $(libft)/$(libft).a $(libstr)/$(libstr).a $(libdir)/$(libdir).a \
	$(libdar)/$(libdar).a $(libstack)/$(libstack).a $(libfifo)/$(libfifo).a $(lib_dir)
	@echo "\033[1;33m\033[1mFinish $(lib_dir)\033[0m $(libft) $(libstr) $(libdir)\
		$(libdar) $(libstack) $(libfifo)\n"

lclean:
	@$(MAKE) clean --no-print-directory -C  $(libft)
	@$(MAKE) clean --no-print-directory -C  $(libstr)
	@$(MAKE) clean --no-print-directory -C  $(libdir)
	@$(MAKE) clean --no-print-directory -C  $(libdar)
	@$(MAKE) clean --no-print-directory -C  $(libstack)
	@$(MAKE) clean --no-print-directory -C  $(libfifo)

lfclean:
	@$(MAKE) fclean --no-print-directory -C  $(libft)
	@$(MAKE) fclean --no-print-directory -C  $(libstr)
	@$(MAKE) fclean --no-print-directory -C  $(libdir)
	@$(MAKE) fclean --no-print-directory -C  $(libdar)
	@$(MAKE) fclean --no-print-directory -C  $(libstack)
	@$(MAKE) fclean --no-print-directory -C  $(libfifo)

fclean:
	@$(MAKE) --no-print-directory lfclean
	@echo "\033[36m\033[1mRemove libs directory $(CURDIR)/$(lib_dir)\033[0m\n"
	@rm -rf $(lib_dir)

re: fclean all
