#include <stdio.h>

int ft_atoi(const char *str)
{
    long result = 0;
    int sign = 1;
    int i = 0;

    if (!str)  // ✅ Protection contre les pointeurs NULL
        return 0;

    // Sauter les espaces blancs
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;

    // Gérer le signe
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Lire les chiffres
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return (int)(result * sign);
}
