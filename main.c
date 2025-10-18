#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	char data[] = "Hello World!";
	void *result;

	// Cherche 'o'
	result = ft_memchr(data, 'o', 12);
	printf("%s\n", (char *)result);  // → "o World!"

	// Cherche 'z' (non présent)
	result = ft_memchr(data, 'z', 12);
	printf("%s\n", result ? (char *)result : "(null)");  // → "(null)"

	// Cherche '\0'
	result = ft_memchr(data, '\0', 12);
	printf("%s\n", (char *)result);  // → "" (chaîne vide à partir du '\0')

	return 0;
}
