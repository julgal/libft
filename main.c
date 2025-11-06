#include "libft.h"

int main(void)
{
    char *s1 = "Hello, world!";
    char *r;

    /* cas normal */
    r = ft_substr(s1, 7, 5);
    printf("substr(\"%s\", 7, 5) -> \"%s\"\n", s1, r);
    free(r);

    /* len trop grand */
    r = ft_substr(s1, 7, 50);
    printf("substr(\"%s\", 7, 50) -> \"%s\"\n", s1, r);
    free(r);

    /* start au-delà de la fin */
    r = ft_substr(s1, 50, 5);
    printf("substr(\"%s\", 50, 5) -> \"%s\"\n", s1, r);
    free(r);

    /* len = 0 */
    r = ft_substr(s1, 3, 0);
    printf("substr(\"%s\", 3, 0) -> \"%s\"\n", s1, r);
    free(r);

    /* s == NULL */
    r = ft_substr(NULL, 0, 5);
    printf("substr(NULL, 0, 5) -> %s\n", r ? r : "NULL");
    free(r); /* safe even si r == NULL (free(NULL) est défini) */

    return 0;
}
