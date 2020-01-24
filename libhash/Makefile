# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aashara- <aashara-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/17 13:54:22 by aashara-          #+#    #+#              #
#    Updated: 2020/01/24 22:26:54 by aashara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name := libhash.a

srcs_dir := srcs

obj_dir := obj

srcs_files := free_hash_table.c\
		init_hash_table.c\
		init_hash.c\
		hash_index.c\
		djb2_hash_function.c\
		push_hash.c\
		get_hash_data.c\


obj_files := $(srcs_files:.c=.o)

objs := $(addprefix $(obj_dir)/, $(obj_files))

header := includes/libhash.h

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
