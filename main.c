#include "libft.h"

int main(void)
{
    int values[] = {0, 42, -42, 12345, -2147483648};
    for (int i = 0; i < 5; i++)
    {
        char *s = ft_itoa(values[i]);
        if (s)
        {
            printf("ft_itoa(%d) = %s\n", values[i], s);
            free(s);
        }
        else
            printf("Erreur d'allocation\n");
    }
    return 0;
}
