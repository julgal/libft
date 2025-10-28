#include "libft.h"

int	main(void)
{
	char	*src = "Bonjour 42 !";
	char	*copy;

	copy = ft_strdup(src);
	if (!copy)
	{
		printf("Erreur : échec de l'allocation mémoire\n");
		return (1);
	}
	printf("Chaîne originale : %s\n", src);
	printf("Copie obtenue    : %s\n", copy);

	if (copy != src)
		printf("Copie effectuée dans un nouvel espace mémoire.\n");
	else
		printf("Les deux pointeurs pointent vers la même zone mémoire.\n");

	free(copy);
	return (0);
}
