/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunb_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 08:01:45 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/14 08:40:38 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_is_basevalid(const char *b)
{
	int	index;
	int	valid;

	valid = 1;
	index = 0;
	while (valid && b[index])
	{
		valid = ft_strchr(b + index + 1, b[index]) == 0;
		index++;
	}
	return ((valid) * (index > 1) * index);
}

int	ft_putunb_base_rec(uintptr_t nb, const char *b, int b_val)
{
	int	count;

	count = 1;
	if (nb >= (unsigned int)b_val)
		count += ft_putunb_base_rec(nb / b_val, b, b_val);
	ft_putchar(b[nb % b_val]);
	return (count);
}

int	ft_putunb_base(uintptr_t nb, const char *b)
{
	int			b_val;
	int			count;

	count = 0;
	b_val = ft_is_basevalid(b);
	if (b_val == 0)
		return (0);
	return (count + ft_putunb_base_rec(nb, b, b_val));
}
