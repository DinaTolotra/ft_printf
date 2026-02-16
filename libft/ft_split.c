/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:49:36 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/06 09:41:05 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_separated(char const *s, char c)
{
	int		count;
	int		beg;
	size_t	end;

	end = 0;
	beg = -1;
	count = 0;
	while (s[end] || beg != -1)
	{
		if (s[end] != c && beg == -1)
			beg = end;
		if ((s[end] == 0 || s[end] == c) && beg != -1)
		{
			count++;
			beg = -1;
		}
		end = end + (s[end] != 0);
	}
	return (count);
}

void	free_vs(char ***p_vs)
{
	size_t	index;

	index = 0;
	while ((*p_vs)[index])
	{
		free((*p_vs)[index]);
		(*p_vs)[index] = 0;
		index++;
	}
	free(*p_vs);
	*p_vs = 0;
}

size_t	get_word_len(const char *s, char c)
{
	size_t		len;
	const char	*p_c;

	len = 0;
	p_c = ft_strchr(s, c);
	if (p_c)
		len = p_c - s;
	else
		len = ft_strchr(s, 0) - s;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	count;
	size_t	res_i;
	size_t	w_len;
	char	*sub_s;

	res_i = 0;
	if (s == 0)
		return (0);
	count = count_separated(s, c);
	res = ft_calloc(sizeof(char *), (count + 1));
	while (res && res_i < count)
	{
		w_len = get_word_len(s, c);
		if (w_len)
		{
			sub_s = ft_substr(s, 0, w_len);
			if (sub_s == 0)
				free_vs(&res);
			else
				res[res_i++] = sub_s;
		}
		s = s + w_len + 1;
	}
	return (res);
}
