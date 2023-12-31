#include "../includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	ft_strncpy(dst, src, size);
	return (ft_strlen(src));
}
