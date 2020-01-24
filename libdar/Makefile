# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 13:57:06 by aashara-          #+#    #+#              #
#    Updated: 2020/01/24 22:25:54 by aashara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name := libdar.a

srcs_dir := srcs

obj_dir := obj

srcs_files := ft_check_exec.c\
			ft_dar_add.c\
			ft_darlen.c\
			ft_free_dar.c\
			ft_dardup.c\
			ft_darnew.c\
			ft_putdar.c\
			ft_putdar_fd.c\
			ft_getenv.c\
			ft_dar2str.c\
			ft_darjoin.c\
			ft_dar_sort.c\

obj_files := $(srcs_files:.c=.o)

objs := $(addprefix $(obj_dir)/, $(obj_files))

header := includes/libdar.h

includes := -I ./includes -I ../libft/includes

cc := gcc

cflags := -Wall -Wextra -Werror

.PHONY: all $(name) clean fclean re

all: $(name)

$(name): $(obj_dir) $(objs)
	@ar rc $(name) $(objs)
	@ranlib $(name)
	@echo "\033[32mFinish $(name) compilation\033[0m"

$(obj_dir):
	@mkdir -p $(obj_dir)

$(obj_dir)/%.o: $(srcs_dir)/%.c $(header)
	@$(cc) $(cflags) $(includes) -o $@ -c $<

clean:
	@-rm -rf $(obj_dir)

fclean:
	@$(MAKE) --no-print-directory clean
	@-rm -rf $(name)
	@echo "\033[31mRemove $(name)\033[0m"

re:
	@$(MAKE) --no-print-directory fclean
	@$(MAKE) --no-print-directory all
