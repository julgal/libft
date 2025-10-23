#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	size_t			total_size;
	unsigned char	*p;
	size_t			i;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);

	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);

	p = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
		p[i++] = 0;

	return (ptr);
}
