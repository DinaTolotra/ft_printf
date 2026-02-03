/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 08:01:45 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/03 21:13:05 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static uintptr_t	ft_abs(uintptr_t lnb)
{
	if (lnb >= 0)
		return (lnb);
	return (-lnb);
}

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

int	ft_putnb_base_rec(uintptr_t lnb, const char *b, int b_val)
{
	int	count;

	count = 1;
	if (lnb >= (unsigned int)b_val)
		count += ft_putnb_base_rec(lnb / b_val, b, b_val);
	ft_putchar(b[lnb % b_val]);
	return (count);
}

int	ft_putnb_base(uintptr_t nb, const char *b)
{
	uintptr_t	lnb;
	int			b_val;
	int			count;

	count = 0;
	lnb = ft_abs(nb);
	b_val = ft_is_basevalid(b);
	if (b_val == 0)
		return (0);
	if (nb < 0)
	{
		ft_putchar('-');
		count++;
	}
	return (count + ft_putnb_base_rec(lnb, b, b_val));
}
