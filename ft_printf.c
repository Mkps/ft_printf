/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:55:42 by aloubier          #+#    #+#             */
/*   Updated: 2022/12/07 18:14:16 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_select_type(char c)
{
	if (c == 'c')
		return (ft_putchar_fd(va_args(args), 1));
	if (c == 's')
		return (ft_putstr_fd(va_args(args), 1));
	if (c == 'p')
		return (ft_putptr_fd(va_args(args), 1));
	if (c == 'd')
		return (ft_putdec_fd(va_arg(args), 1));
	if (c == 'i')
		return (ft_putnbr_fd(va_args(args), 1));
	if (c == 'u')
		return (ft_putunsigned_fd(va_args(args), 1));
	if (c == 'x' || c == 'X')
		return (ft_puthexa_fd(va_args(args), 1));
	if (c == '%')
		return (ft_percent(va_args(args), 1));
}

int	ft_printf(const char *src, ...)
{
	va_list	args;
	size_t	written_char;

	va_start(args, src);
	while (*src)
	{
		src++;
		if (*src != '%')
		{
			ft_putchar_fd(*src, 1);
			written_char++;
		}
		else
			written_char += ft_select_type(va_args);
	}
	return (written_char);
}
