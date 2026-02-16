/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:57:18 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/06 10:27:28 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	s_len;

	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		len = 0;
		start = s_len;
	}
	else if (s_len - start < len)
		len = s_len - start;
	sub_s = malloc(sizeof(char) * (len + 1));
	if (sub_s == 0)
		return (0);
	ft_strlcpy(sub_s, s + start, len + 1);
	sub_s[len] = 0;
	return (sub_s);
}
