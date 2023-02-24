#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
		if (nb == 2147483647)
			ft_putstr_fd("2147483647", fd);
		else if (nb == -2147483648)
			ft_putstr_fd("-2147483648", fd);
		else if (nb < 0)
		{
			ft_putstr_fd("-", fd);
			ft_putnbr_fd(-nb, fd);
		}
		else if (nb >= 0 && nb <= 9)
			ft_putchar_fd(nb + 48, fd);
		else
		{
			ft_putnbr_fd(nb / 10, fd);
			ft_putchar_fd(48 + nb % 10, fd);
		}
}
