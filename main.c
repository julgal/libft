#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

int main(void)
{
	char *res;

	res = ft_strjoin("Hello", "World");
	if (res)
	{
		printf("Résultat : %s\n", res);
		free(res);
	}
	else
		printf("Erreur d'allocation\n");

	res = ft_strjoin("42", "");
	printf("Résultat : %s\n", res);
	free(res);

	res = ft_strjoin("", "School");
	printf("Résultat : %s\n", res);
	free(res);

	res = ft_strjoin("", "");
	printf("Résultat : %s\n", res);
	free(res);

	return (0);
}
