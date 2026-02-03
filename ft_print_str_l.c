/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str_l.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:01:50 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/03 20:12:19 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str_l(va_list list)
{
	char	*str;

	str = va_arg(list, char *);
	if (str == 0)
		str = "(null)";
	return (ft_putstr(str));
}
