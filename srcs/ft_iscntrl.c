#include "../includes/libft.h"

int	ft_iscntrl(int c)
{
	return (c >= ' ' && c <= '~');
}
