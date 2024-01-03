#include "../includes/libft.h"

size_t	ft_factorial(unsigned int nb)
{
	if (nb >= 1)
		return (nb * ft_factorial(nb - 1));
	if (!nb)
		return (1);
	return (0);
}
