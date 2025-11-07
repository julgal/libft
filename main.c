#include "libft.h"

int main(void)
{
    char **tab = ft_split("Salut les amis du 42", ' ');
    int i = 0;

    if (!tab)
        return (1);
    while (tab[i])
    {
        printf("mot[%d] = %s\n", i, tab[i]);
        free(tab[i]);
        i++;
    }
    free(tab);
    return (0);
}
