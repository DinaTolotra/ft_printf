/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:26:08 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/06 08:36:17 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		index;
	char		*s_dest;
	const char	*s_src;

	s_dest = dest;
	s_src = src;
	if (dest < src)
	{
		index = 0;
		while (index < n)
		{
			s_dest[index] = s_src[index];
			index++;
		}
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			n--;
			s_dest[n] = s_src[n];
		}
	}
	return (dest);
}
