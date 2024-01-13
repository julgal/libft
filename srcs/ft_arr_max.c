#include "../includes/libft.h"

int	ft_arr_max(int *arr, int lenght)
{
	int	i;
	int	max;

	i = -1;
	max = 0;
	while (++i < lenght)
		if (max < arr[i])
			max = arr[i];
	return (max);
}
