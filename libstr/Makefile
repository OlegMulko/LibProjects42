# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 13:57:06 by aashara-          #+#    #+#              #
#    Updated: 2020/01/24 22:27:07 by aashara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name := libstr.a

srcs_dir := srcs

obj_dir := obj

srcs_files := ft_get_cnt_words.c\
			ft_is_str_contain.c\
			ft_last_word_pos.c\
			ft_del_sym_str.c\
			ft_match.c\
			ft_num_match.c\
			ft_strdel_el.c\
			ft_strdup_realloc.c\
			ft_stradd.c\

obj_files := $(srcs_files:.c=.o)

objs := $(addprefix $(obj_dir)/, $(obj_files))

header := includes/libstr.h

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

