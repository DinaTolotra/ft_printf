/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:44:13 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/04 07:00:10 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_len;

	index = 0;
	dst_len = 0;
	while (dst[dst_len])
		dst_len++;
	if (dst_len > size)
		dst_len = size;
	while ((dst_len + index + 1) < size && src[index])
	{
		dst[dst_len + index] = src[index];
		index++;
	}
	if (dst_len < size)
		dst[dst_len + index] = 0;
	while (src[index])
		index++;
	return (dst_len + index);
}
