#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char a[] = "Hello";
	char b[] = "Hello";
	char c[] = "Hellz";

	printf("%d\n", ft_memcmp(a, b, 5)); // → 0 (identiques)
	printf("%d\n", ft_memcmp(a, c, 5)); // → négatif ('o' - 'z' = -14)
	printf("%d\n", ft_memcmp(c, a, 5)); // → positif ('z' - 'o' = 14)
	printf("%d\n", ft_memcmp(a, c, 4)); // → 0 (les 4 premiers caractères identiques)

	return 0;
}
