# include "ftstr.h"

size_t	ft_num_match(char **str, char *arg)
{
	int		i;
	size_t	count;

	i = -1;
	count = 0;
	if (!str || !arg)
		return (count);
	while (str[++i])
		if (ft_match(str[i], arg))
			count++;
	return (count);
}