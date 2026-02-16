/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:33:02 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/28 22:09:17 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	int					res;
	const unsigned char	*s_s1;
	const unsigned char	*s_s2;

	res = 0;
	index = 0;
	s_s1 = s1;
	s_s2 = s2;
	while (index < n && res == 0)
	{
		res = s_s1[index] - s_s2[index];
		index++;
	}
	return (res);
}
