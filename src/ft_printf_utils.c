#include "../includes/ft_printf.h"

int ft_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_str(char *c)
{
	size_t	i;

	i = 0;
	if (!c)
		return (ft_str("(null)"));
	while (c[i])
	{
		ft_char(c[i]);
		i++;
	}
	return (i);
}
	
