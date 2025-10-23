#include "libft.h"

int main(void)
{
	int *tab;
	size_t n = 5;

	tab = (int *)ft_calloc(n, sizeof(int));
	if (!tab)
		return (1);

	for (size_t i = 0; i < n; i++)
		printf("tab[%zu] = %d\n", i, tab[i]);

	free(tab);
	return (0);
}

