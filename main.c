#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c0;
	char	c1;
	char	c2;
	char	*str0;

	c0 = 'i';
	c1 = '1';
	c2 = 10;
	str0 = "hello";
	printf("c0 ft_isalpha return : %d\n", ft_isalpha(c0));
	printf("c0 ft_isascii return : %d\n", ft_isascii(c0));
	printf("c1 ft_isdigit return : %d\n", ft_isascii(c1));
	printf("c2 ft_isprint return : %d\n", ft_isprint(c2));
	printf("c2 ft_isalnum return : %d\n", ft_isalnum(c1));
	ft_putchar_fd(c1, 1);
	printf("str0 : %ld caracters\n", ft_strlen(str0));
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(str0, 1);
	return (0);
}
