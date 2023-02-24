#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'i';
	printf("c is_alpha return : %d\n", ft_isalpha(c));
	printf("c is_ascii return : %d\n", ft_isascii(c));
	return (0);
}
