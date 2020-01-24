# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 13:57:06 by aashara-          #+#    #+#              #
#    Updated: 2020/01/24 22:26:30 by aashara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name := libdir.a

srcs_dir := srcs

obj_dir := obj

srcs_files := ft_size_dir.c\
			ft_dir_flag.c\
			ft_dir_content.c\
			ft_file_type.c\
			ft_write_to_file.c\
			ft_read_file.c\

obj_files := $(srcs_files:.c=.o)

objs := $(addprefix $(obj_dir)/, $(obj_files))

header := includes/libdir.h

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
