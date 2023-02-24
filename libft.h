#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

int	ft_atoi(const char *str);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
size_t	ft_strlen(const char *str);

#endif
