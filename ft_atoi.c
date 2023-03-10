#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++ ;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++ ;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - 48) + (res * 10);
		i++ ;
	}
	return (res * sign);
}
