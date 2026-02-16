/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:04:48 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/06 08:39:20 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow(size_t a, size_t b)
{
	return (a && (size_t)(a * b) / a != b);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	full_size;

	res = 0;
	if (overflow(nmemb, size))
		return (0);
	full_size = nmemb * size;
	if (full_size == 0)
		full_size = 1;
	res = malloc(full_size);
	if (res)
		ft_bzero(res, full_size);
	return (res);
}
