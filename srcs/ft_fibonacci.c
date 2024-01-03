#include "../inlcludes/libft.h"

size_t	ft_fibonacci(unsigned int index)
{
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
