/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr_l.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:30:16 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/14 08:40:02 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_lhex(uintptr_t nb)
{
	char	*base;

	base = "0123456789abcdef";
	return (ft_putunb_base(nb, base));
}

int	ft_print_ptr_l(va_list list)
{
	uintptr_t	u_ptr;
	int			count;

	count = 0;
	u_ptr = va_arg(list, uintptr_t);
	if (u_ptr)
	{
		count = ft_putstr("0x");
		count += ft_print_lhex(u_ptr);
	}
	else
		count = ft_putstr("(nil)");
	return (count);
}
