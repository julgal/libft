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
	printf("ft_isalpha('-') = %d\n\n", ft_isalpha('-'));

	printf("=== TEST FT_ISDIGIT ===\n");
    printf("ft_isdigit('0') = %d\n", ft_isdigit('0')); // 1
	printf("ft_isdigit('9') = %d\n", ft_isdigit('9')); // 1
	printf("ft_isdigit('A') = %d\n", ft_isdigit('A')); // 0
	printf("ft_isdigit('-') = %d\n\n", ft_isdigit('-')); // 0

	printf("=== TEST FT_ISALNUM ===\n");
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A')); // 1
	printf("ft_isalnum('z') = %d\n", ft_isalnum('z')); // 1
	printf("ft_isalnum('5') = %d\n", ft_isalnum('5')); // 1
	printf("ft_isalnum('-') = %d\n", ft_isalnum('-')); // 0
	printf("ft_isalnum(' ') = %d\n\n", ft_isalnum(' ')); // 0

	printf("=== TEST FT_ISASCII ===\n");
    printf("ft_isascii(65) = %d\n", ft_isascii(65));   // 1 ('A')
	printf("ft_isascii(127) = %d\n", ft_isascii(127)); // 1 (DEL)
	printf("ft_isascii(-1) = %d\n", ft_isascii(-1));   // 0
	printf("ft_isascii(200) = %d\n\n", ft_isascii(200)); // 0

	return (0);
}
