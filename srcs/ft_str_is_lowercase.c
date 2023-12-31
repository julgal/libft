#include "../includes/libft.h"

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (!ft_islower(str[i++]))
			return (0);
	return (1);
}
