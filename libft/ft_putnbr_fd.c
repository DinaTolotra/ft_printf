/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:12:35 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/06 08:50:38 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	_putnbr_fd_rec(long lnb, int fd)
{
	if (lnb >= 10)
		_putnbr_fd_rec(lnb / 10, fd);
	ft_putchar_fd((lnb % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	lnb;

	lnb = n;
	if (lnb < 0)
	{
		lnb = -lnb;
		ft_putchar_fd('-', fd);
	}
	_putnbr_fd_rec(lnb, fd);
}
