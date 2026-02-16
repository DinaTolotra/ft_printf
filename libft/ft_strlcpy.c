/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:43:26 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/04 07:01:32 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	len;

	index = 0;
	while (index + 1 < size && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	if (size)
		dst[index] = 0;
	len = index;
	while (src[len])
		len++;
	return (len);
}
