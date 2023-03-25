/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:54:10 by aloubier          #+#    #+#             */
/*   Updated: 2023/03/25 11:46:23 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_hex(unsigned int, char);
int	ft_char(char);
int	ft_str(char *);
int	ft_ptr(unsigned long long);
int	ft_number(int);
int	ft_unsigned(unsigned int);

#endif
