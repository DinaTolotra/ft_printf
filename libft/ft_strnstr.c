/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:45:46 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/06 09:48:40 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	char	*res;
	size_t	little_len;

	res = 0;
	index = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)(big));
	if (len == 0 || len < little_len)
		return (0);
	while (index <= (len - little_len) && big[index] && res == 0)
	{
		if (ft_strncmp(&big[index], little, little_len) == 0)
			res = &((char *)big)[index];
		index++;
	}
	return (res);
}
