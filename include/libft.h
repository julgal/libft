#ifndef LIBFT_H
# define LIBFT_H

/*
 * Header files dependencie.s
*/

# include <errno.h>
# include <wchar.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <sys/types.h>

/*
 * Functions by type string.h
*/

int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);

#endif
