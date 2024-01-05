#include "../includes/libft.h"

double	ft_floor(double x)
{
	if (x > 0)
		return ((int)x);
	return (((int)x) - 1);
}
