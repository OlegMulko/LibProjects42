#ifndef FTDIR_H
# define FTDIR_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include <dirent.h>

size_t	ft_size_dir(char *dirpath);
short	ft_dir_flag(short flag, unsigned char d_type);
char    **ft_dir_content(char *dirpath, short flag);

#endif