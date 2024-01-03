#include "../includes/libft.h"

double	ft_sqrt(double x)
{
	double	i;

	i = 1.0;
	if (x < 0)
		return (0);
	while (i * i < x)
		i++;
	return (i);
}
