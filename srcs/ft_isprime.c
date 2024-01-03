#include "../includes/libft.h"

int	ft_isprime(long unsigned int nbr)
{
	unsigned long int	i;

	if (!nbr)
		return (0);
	i = 1;
	while (++i <= nbr)
	{
		if (!(nbr % i))
			break ;
	}
	if (i == nbr)
		return (1);
	return (0);
}
