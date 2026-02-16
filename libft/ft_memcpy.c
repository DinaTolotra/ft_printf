/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:59:15 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/06 08:47:53 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		index;
	char		*s_dest;
	const char	*s_src;

	index = 0;
	s_dest = dest;
	s_src = src;
	while (index < n)
	{
		s_dest[index] = s_src[index];
		index++;
	}
	return (dest);
}
