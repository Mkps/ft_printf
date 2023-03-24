#include "ft_printf.h"
#include "libft.h"

int	ft_hexlen(unsigned int	nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

void	ft_puthex(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		ft_puthex(nb / 16, format);
		ft_puthex(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			ft_putchar((nb + '0'), 1);
		else
		{
			if (format == 'x')
				ft_char((nb - 10 + 'a'));
			else if (format == 'X')
				ft_char((nb - 10 + 'A'));
		}
	}
}

int	ft_hex(unsigned int nb, const char format)
{
	if (nb == 0)
		return (ft_char('0'));
	else
		ft_puthex(nb, format);
	return (ft_hexlen(nb));
}
