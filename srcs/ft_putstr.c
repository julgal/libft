#include "../includes/libft.h"

void	ft_putstr(const char *s)
{
	int	i;

	i = 0;
	if (s)
		while (s[i])
			write(1, &s[i++], 1);
}
