#include "libft.h"

int main(void)
{
    printf("%d\n", ft_atoi("42"));           // 42
    printf("%d\n", ft_atoi("   -1234"));     // -1234
    printf("%d\n", ft_atoi(NULL));           // 0, pas de segfault
    printf("%d\n", ft_atoi("abc"));          // 0
    return 0;
}
