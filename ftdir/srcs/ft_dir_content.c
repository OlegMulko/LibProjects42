# include "ftdir.h"

char **ft_dir_content(char *dirpath, short flag)
{
  size_t			i;
  DIR			*dirp;
  struct dirent	*d;
  char			**file_list;
  size_t		size;

  if (!(size = ft_size_dir(dirpath)))
  	return (NULL);
  if (!(dirp = opendir(dirpath)))
  	return (NULL);
  if (!(file_list = (char **)malloc(sizeof(char *) * (size + 1))))
  	return (NULL);
  i = 0;
  while ((d = readdir(dirp)) && i < size)
  	if (ft_dir_flag(flag, d->d_type))
	  file_list[i++] = ft_strdup(d->d_name);
  file_list[i] = NULL;
  if (closedir(dirp) == -1)
    return (NULL);
  return (file_list);
}