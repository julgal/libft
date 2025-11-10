#include "libft.h"

void	to_uppercase(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char	str[] = "hello 42!";
	ft_striteri(str, to_uppercase);
	printf("%s\n", str); // Affiche "HELLO 42!"
	return (0);
}
