#include "../includes/libft.h"

double	ft_pow(double x, int y)
{
	double	z;

	z = 1.0;
	while (y > 0)
	{
		while (!(y & 1))
		{
			y >>= 2;
			x *= x;
		}
		--y;
		z = x * z;
	}
	return (z);
}
