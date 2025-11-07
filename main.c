#include "libft.h"

int main(void)
{
    char *s = "  \tHello World \n  ";
    char *trimmed = ft_strtrim(s, " \n\t");
    if (trimmed)
    {
        printf("Avant: [%s]\n", s);
        printf("Après: [%s]\n", trimmed);
        free(trimmed);
    }
    else
        printf("Erreur d'allocation.\n");
    return 0;
}

