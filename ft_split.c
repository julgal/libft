#include "libft.h"

static int  ft_count_words(char const *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static char *ft_word_dup(const char *s, int start, int end)
{
    char *word;
    int i = 0;

    word = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!word)
        return (NULL);
    while (start < end)
        word[i++] = s[start++];
    word[i] = '\0';
    return (word);
}

static void free_all(char **tab, int i)
{
    while (i > 0)
        free(tab[--i]);
    free(tab);
}

char    **ft_split(char const *s, char c)
{
    int     i = 0;
    int     j = 0;
    int     index = -1;
    char    **tab;

    if (!s)
        return (NULL);
    tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
    if (!tab)
        return (NULL);
    while (s[i])
    {
        if (s[i] != c && index == -1)
            index = i;
        else if ((s[i] == c || s[i + 1] == '\0') && index != -1)
        {
            if (s[i] == c)
                tab[j] = ft_word_dup(s, index, i);
            else
                tab[j] = ft_word_dup(s, index, i + 1);
            if (!tab[j++])
            {
                free_all(tab, j);
                return (NULL);
            }
            index = -1;
        }
        i++;
    }
    tab[j] = NULL;
    return (tab);
}
