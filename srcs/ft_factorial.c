#include "../includes/libft.h"

size_t	ft_factorial(unsigned int nbr)
{
	if (nbr >= 1)
		return (nbr * ft_factorial(nbr - 1));
	if (!nbr)
		return (1);
	return (0);
}
