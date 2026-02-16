/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:14:56 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/06 08:45:33 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		index;
	char		*res;
	const char	*s_s;

	s_s = s;
	res = 0;
	index = 0;
	while (index < n && res == 0)
	{
		if (s_s[index] == (char)c)
			res = (char *)(s_s + index);
		index++;
	}
	return (res);
}
