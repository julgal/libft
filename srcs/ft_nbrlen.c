#include "../includes/libft.h"

size_t	ft_nbrlen(int nbr, int base)
{
	size_t	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0 && base == 10)
		len += 1;
	while (nbr)
	{
		nbr /= base;
		len++;
	}
	return (len);
}
