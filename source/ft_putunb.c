/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:19:35 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/03 19:58:24 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunb(unsigned int nb)
{
	int	count;

	count = 1;
	if (nb >= 10)
		count += ft_putunb(nb / 10);
	ft_putchar((nb % 10) + '0');
	return (count);
}
