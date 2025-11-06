#include "libft.h"

/*
 * Retourne une nouvelle chaîne contenant au plus 'len' caractères
 * de s, en commençant à l'indice 'start'.
 * Retourne NULL si s == NULL ou si l'allocation échoue.
 */

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  s_len;
    size_t  max_copy;
    char    *res;
    
    if (!s)
        return (NULL);

    s_len = strlen(s);

    /* si start est au-delà de la fin, retourner chaîne vide */
    if ((size_t)start >= s_len)
    {
        res = malloc(1);
        if (!res)
            return NULL;
        res[0] = '\0';
        return res;
    }

    /* nombre maximum de caractères réellement disponibles depuis start */
    max_copy = s_len - (size_t)start;
    if (max_copy > len)
        max_copy = len;

    res = malloc(max_copy + 1);
    if (!res)
        return NULL;

    /* copier max_copy octets puis ajouter le '\0' */
    if (max_copy > 0)
        memcpy(res, s + start, max_copy);
    res[max_copy] = '\0';

    return res;
}
