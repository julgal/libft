#include "libft.h"

char to_upper(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int main(void)
{
    char *s = "hello 42";
    char *res = ft_strmapi(s, to_upper);

    if (res)
    {
        printf("Avant : %s\n", s);
        printf("Après : %s\n", res);
        free(res);
    }
    else
        printf("Erreur d'allocation.\n");
    return (0);
}
