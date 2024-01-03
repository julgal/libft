#include "../includes/libft.h"

double	ft_ceil(double x)
{
	if (x < 0)
		return ((int)x);
	return (((int)x) + 1);
}
