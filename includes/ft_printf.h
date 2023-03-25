/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:54:10 by aloubier          #+#    #+#             */
/*   Updated: 2023/03/25 14:00:56 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_hex(unsigned int input, char format);
int	ft_char(char input);
int	ft_str(char *input);
int	ft_ptr(unsigned long long input);
int	ft_number(int input);
int	ft_unsigned(unsigned int input);

#endif
