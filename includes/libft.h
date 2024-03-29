#ifndef LIBFT_H
# define LIBFT_H

/*
 * Header files dependencies
*/

# include <errno.h>
# include <wchar.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <sys/types.h>

/*
 * Macros for the limits of the variables
*/

# define CHAR_BIT	(8)
# define MB_LEN_MAX	(1)
# define CHAR_MIN	(-128)
# define CHAR_MAX	(127)
# define INT_MIN	(-2147483648)
# define INT_MAX	(2147483647)
# define LONG_MIN	(-9223372036854775808)
# define LONG_MAX	(9223372036854775807)

/*
 * Functions by type stdlib.h
*/

int		ft_atoi(const char *str);
char		*ft_itoa(int n);

/*
 * Functions by type string.h
*/

int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t n);
char		*ft_strstr(const char *big, const char *little);
char		*ft_strnstr(const char *big, const char *little, size_t n);
char		*ft_strdup(const char *s1);
char		*ft_strnew(size_t size);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strmap(const char *s, char (*f)(char));
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char		**ft_strsplit(char const *s, char c);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);

/*
 * Functions by type ctype.h
*/

int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isblank(int c);
int		ft_isdigit(int c);
int		ft_iscntrl(int c);
int		ft_isgraph(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isspace(int c);
int		ft_isprint(int c);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_numeric(char *src);
int		ft_str_is_printable(char *str);

/*
 * Functions by type stdio.h
*/

void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr(const char *s);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);

/*
 * Functions by type math.h
*/

int		ft_min(int x, int y);
int		ft_max(int x, int y);
int		ft_isprime(long unsigned int nbr);
double		ft_sqrt(double x);
double		ft_round(double x);
double		ft_pow(double x, int y);
double		ft_ceil(double x);
double		ft_floor(double x);
double		ft_trunc(double x);
double		ft_truncl(double x);
size_t		ft_nbrlen(int nbr, int base);
size_t		ft_fibonacci(unsigned int index);
size_t		ft_factorial(unsigned int nbr);

/*
 * Functions by type array.h
*/

int		ft_arr_max(int *arr, int lenght);
int		*ft_arr_new(size_t size);

/*
 * Miscellaneous functions
*/

void		ft_swap(int *a, int *b);
size_t		ft_wordcount(const char *s, char c);
size_t		ft_wordlen(const char *s, char c);

#endif
