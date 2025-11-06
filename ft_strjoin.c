#include <stdlib.h>

/*
** ft_strjoin :
** Concatène s1 et s2 dans une nouvelle chaîne allouée avec malloc.
** Retourne NULL si s1 ou s2 sont NULL ou si malloc échoue.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;
	char	*res;

	if (!s1 || !s2)
		return (NULL);

	/* calcul de la longueur de s1 */
	len1 = 0;
	while (s1[len1])
		len1++;

	/* calcul de la longueur de s2 */
	len2 = 0;
	while (s2[len2])
		len2++;

	res = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!res)
		return (NULL);

	/* copie de s1 */
	i = 0;
	while (i < len1)
	{
		res[i] = s1[i];
		i++;
	}

	/* copie de s2 */
	j = 0;
	while (j < len2)
	{
		res[i + j] = s2[j];
		j++;
	}

	res[i + j] = '\0';
	return (res);
}
