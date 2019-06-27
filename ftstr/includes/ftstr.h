#ifndef FT_STRING_H
# define FT_STRING_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

size_t  ft_get_cnt_words(const char *str, char spr);
char    *ft_last_word_pos(const char *str, char *seps);
int     ft_is_str_contain(char *str, char sym);

#endif
