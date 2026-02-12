/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint_l.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:18:12 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/10 11:17:34 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint_l(va_list list)
{
	unsigned int	unb;

	unb = va_arg(list, unsigned int);
	return (ft_putunb(unb));
}
