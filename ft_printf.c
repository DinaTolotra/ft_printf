/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:08:57 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/03 20:04:50 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_conv(char c, va_list list);

int	ft_printf(const char *f, ...)
{
	int			index;
	va_list		list;
	int			count;

	index = 0;
	count = 0;
	va_start(list, f);
	while (f[index])
	{
		if (f[index] == '%')
			count += handle_conv(f[++index], list);
		else
			count += ft_putchar(f[index]);
		index++;
	}
	va_end(list);
	return (count);
}

static int	handle_conv(char c, va_list list)
{
	if (c == 'c')
		return (ft_print_char_l(list));
	else if (c == 's')
		return (ft_print_str_l(list));
	else if (c == 'p')
		return (ft_print_ptr_l(list));
	else if (c == 'd')
		return (ft_print_dec_l(list));
	else if (c == 'i')
		return (ft_print_int_l(list));
	else if (c == 'u')
		return (ft_print_uint_l(list));
	else if (c == 'x')
		return (ft_print_lhex_l(list));
	else if (c == 'X')
		return (ft_print_uhex_l(list));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
