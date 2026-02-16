/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:48:15 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/03 07:19:19 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*last;
	t_list	*node;

	if (lst == 0)
		return (0);
	new_lst = ft_lstnew(f(lst->content));
	last = new_lst;
	lst = lst->next;
	while (last && lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node == 0)
			ft_lstclear(&new_lst, del);
		else if (last)
			last->next = node;
		lst = lst->next;
		last = node;
		node = 0;
	}
	return (new_lst);
}
