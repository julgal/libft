#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("=== TEST FT_TOUPPER ===\n");
	printf("ft_toupper('a') = %c\n", ft_toupper('a'));
	printf("ft_toupper('Z') = %c\n", ft_toupper('Z'));
	printf("ft_toupper('1') = %c\n\n", ft_toupper('1'));

	printf("=== TEST FT_TOLOWER ===\n");
	printf("ft_tolower('A') = %c\n", ft_tolower('A'));
	printf("ft_tolower('z') = %c\n", ft_tolower('z'));
	printf("ft_tolower('!') = %c\n\n", ft_tolower('!'));

	printf("=== TEST FT_ISALPHA ===\n");
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
	printf("ft_isalpha('z') = %d\n", ft_isalpha('z'));
	printf("ft_isalpha('5') = %d\n", ft_isalpha('5'));
	printf("ft_isalpha('-') = %d\n", ft_isalpha('-'));

	return (0);
}
