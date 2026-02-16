/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:51:20 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/03 16:56:07 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

static int	ft_issign(int c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(const char *nptr)
{
	long	lnb;
	int		sign;
	int		index;

	lnb = 0;
	sign = 1;
	index = 0;
	while (ft_isspace(nptr[index]))
		index++;
	if (ft_issign(nptr[index]))
	{
		if (nptr[index] == '-')
			sign = -1;
		index++;
	}
	while (ft_isdigit(nptr[index]))
	{
		lnb = (lnb * 10) + (nptr[index] - '0');
		index++;
	}
	return (lnb * sign);
}
