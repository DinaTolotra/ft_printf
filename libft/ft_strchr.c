/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:44:51 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/28 21:46:16 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		index;
	const char	*res;

	res = 0;
	index = 0;
	while (s[index] && s[index] != (char)c)
		index++;
	if (s[index] == (char)c)
		res = &s[index];
	return ((char *)res);
}
