#include "../includes/libft.h"

/*
 * Allocates width malloc() and return a string ending width '\0'.
*/

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (size--)
		str[size] = '\0';
	return (str);
}
