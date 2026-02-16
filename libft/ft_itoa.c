/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:40:56 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/03 07:09:41 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_abs(long lnb)
{
	if (lnb < 0)
		return (-lnb);
	return (lnb);
}

static int	char_count(long lnb)
{
	int	count;

	count = 1;
	if (lnb < 0)
		count++;
	lnb = ft_abs(lnb);
	while (lnb)
	{
		lnb /= 10;
		count++;
	}
	if (count == 1)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	long	lnb;
	char	*res;
	int		c_count;

	lnb = ft_abs(n);
	c_count = char_count(n);
	res = malloc(sizeof(char) * c_count);
	if (res == 0)
		return (0);
	res[--c_count] = 0;
	res[0] = '0';
	if (n < 0)
		res[0] = '-';
	while (lnb)
	{
		res[--c_count] = (lnb % 10) + '0';
		lnb /= 10;
	}
	return (res);
}
