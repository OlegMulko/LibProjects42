# include "ftstr.h"

int	ft_match(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (0);
	else if (!*s1 && !*s2)
		return (1);
	else if (*s1 != '\0' && *s2 == '*')
		return (ft_match(s1 + 1, s2) || ft_match(s1, s2 + 1));
	else if(*s1 == '\0' && *s2 == '*')
		return (ft_match(s1, s2 + 1));
	else if (*s1 == *s2)
		return (ft_match(s1 + 1, s2 + 1));
	else
		return (0);
}