#include "../includes/libft.h"

/*
 * Allocates sufficient memory for a copy of 
 * the string s1, does the copy and return a pointer to it.
*/

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int	len;
	int	i;

	len = ft_strlen(s1);
	if (!(s2 = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
