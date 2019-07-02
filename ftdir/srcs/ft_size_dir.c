# include "ftdir.h"

size_t	ft_size_dir(char *dirpath)
{
	size_t	size;
	DIR		*dirp;

	size = 0;
	if (!dirpath)
		return (size);
	if (!(dirp = opendir(dirpath)))
		return (0);
	while (readdir(dirp))
		size++;
	if (closedir(dirp) == -1)
		return (0);
	return (size);
}