/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:09:23 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/14 08:38:19 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printf(const char *f, ...);

int	ft_print_char_l(va_list list);
int	ft_print_str_l(va_list list);
int	ft_print_ptr_l(va_list list);
int	ft_print_int_l(va_list list);
int	ft_print_uint_l(va_list list);
int	ft_print_lhex_l(va_list list);
int	ft_print_uhex_l(va_list list);

int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putunb_base(uintptr_t nb, const char *b);
int	ft_putlnb(long nb);
int	ft_putunb(unsigned int nb);

#endif
