#ifndef FTDIR_H
# define FTDIR_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include <dirent.h>

size_t	ft_size_dir(char *dirpath);
short	dir_flag(short flag, unsigned char d_type);

#endif