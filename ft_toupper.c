int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

/*

// For the main.c file

#include <stdio.h>
#include "libft.h"  // Inclusion du header de ta lib

int	main(void)
{
	char c = 'a';
	printf("Avant : %c\n", c);
	printf("Après : %c\n", ft_toupper(c));
	return (0);
}

*/
