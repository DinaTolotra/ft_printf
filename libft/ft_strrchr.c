/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:45:21 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/28 22:00:10 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		index;
	const char	*res;

	res = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] == (char)c)
			res = &s[index];
		index++;
	}
	if (s[index] == (char)c)
		res = &s[index];
	return ((char *)res);
}
