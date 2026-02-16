/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:43:51 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/04 11:20:20 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	index;
	size_t	s_len;
	char	*dst;

	dst = 0;
	index = 0;
	s_len = ft_strlen(s);
	dst = malloc(sizeof(char) * (s_len + 1));
	if (dst == 0)
		return (0);
	while (s[index])
	{
		dst[index] = s[index];
		index++;
	}
	dst[index] = 0;
	return (dst);
}
