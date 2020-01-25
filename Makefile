# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 11:46:19 by olegmulko         #+#    #+#              #
#    Updated: 2020/01/25 19:47:51 by aashara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft := libft

libstr := libstr

libdir := libdir

libdar := libdar

libstack := libstack

libfifo := libfifo

libhash := libhash

lib_dir := lib_archive

.PHONY: all lall lclean lfclean fclean $(libft) $(libstr) $(libdir) $(libdar) $(libstack) $(libfifo) $(libhash)

all: $(libft) $(libstr) $(libdir) $(libdar) $(libstack) $(libfifo) $(libhash) $(lib_dir)

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

$(lib_dir): $(libft) $(libstr) $(libdir) $(libdar) $(libstack) $(libfifo) $(libhash)
	@mkdir -p $(lib_dir)
	@cp $(libft)/$(libft).a $(libstr)/$(libstr).a $(libdir)/$(libdir).a \
	$(libdar)/$(libdar).a $(libstack)/$(libstack).a $(libfifo)/$(libfifo).a $(libhash)/$(libhash).a $(lib_dir)

lall:
	@$(MAKE) all --no-print-directory -C  $(libft)
	@$(MAKE) all --no-print-directory -C  $(libstr)
	@$(MAKE) all --no-print-directory -C  $(libdir)
	@$(MAKE) all --no-print-directory -C  $(libdar)
	@$(MAKE) all --no-print-directory -C  $(libstack)
	@$(MAKE) all --no-print-directory -C  $(libfifo)
	@$(MAKE) all --no-print-directory -C  $(libhash)

lclean:
	@$(MAKE) clean --no-print-directory -C  $(libft)
	@$(MAKE) clean --no-print-directory -C  $(libstr)
	@$(MAKE) clean --no-print-directory -C  $(libdir)
	@$(MAKE) clean --no-print-directory -C  $(libdar)
	@$(MAKE) clean --no-print-directory -C  $(libstack)
	@$(MAKE) clean --no-print-directory -C  $(libfifo)
	@$(MAKE) clean --no-print-directory -C  $(libhash)

lfclean:
	@$(MAKE) fclean --no-print-directory -C  $(libft)
	@$(MAKE) fclean --no-print-directory -C  $(libstr)
	@$(MAKE) fclean --no-print-directory -C  $(libdir)
	@$(MAKE) fclean --no-print-directory -C  $(libdar)
	@$(MAKE) fclean --no-print-directory -C  $(libstack)
	@$(MAKE) fclean --no-print-directory -C  $(libfifo)
	@$(MAKE) fclean --no-print-directory -C  $(libhash)

fclean:
	@$(MAKE) --no-print-directory lfclean
	@rm -rf $(lib_dir)

re: fclean all
