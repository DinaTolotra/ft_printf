/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lhex_l.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:40:34 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/14 08:39:58 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_lhex_l(va_list list)
{
	unsigned int	nb;
	char			*base;

	nb = va_arg(list, unsigned int);
	base = "0123456789abcdef";
	return (ft_putunb_base(nb, base));
}
