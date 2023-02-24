#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c0;
	char	c1;
	char	c2;

	c0 = 'i';
	c1 = '1';
	c2 = 10;
	printf("c0 ft_isalpha return : %d\n", ft_isalpha(c0));
	printf("c0 ft_isascii return : %d\n", ft_isascii(c0));
	printf("c1 ft_isdigit return : %d\n", ft_isascii(c1));
	printf("c2 ft_isprint return : %d\n", ft_isprint(c2));
	return (0);
}
