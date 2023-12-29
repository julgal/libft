#include "../includes/libft.h"

/*
 * Locates the first occurence of the null-terminated string little
 * in the null-terminated string big.
*/

char	*ft_strstr(const char *big, const char *little)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!little[0])
		return ((char *)&big[i]);
	while (big[i])
	{
		while ((big[i + j] == little[j]) && little[j])
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
