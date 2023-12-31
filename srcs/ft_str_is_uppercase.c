#include "../includes/libft.h"

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (!ft_isupper(str[i++]))
			return (0);
	return (1);
}
