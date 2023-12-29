#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (s2[i])
	{
		s1[j + i] = s2[i];
		i += 1;
	}
	s1[j + i] = '\0';
	return (s1);
}
