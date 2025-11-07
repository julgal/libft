#include "libft.h"

static int  ft_numlen(int n)
{
    int len = 0;

    if (n <= 0)
        len++; // pour le '-' ou pour le '0'
    while (n)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    long    nb;
    int     len;
    char    *str;

    nb = n;
    len = ft_numlen(n);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len--] = '\0';
    if (nb == 0)
        str[0] = '0';
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    while (nb > 0)
    {
        str[len--] = (nb % 10) + '0';
        nb /= 10;
    }
    return (str);
}
