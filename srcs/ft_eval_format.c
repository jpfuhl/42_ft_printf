/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:04:10 by jpfuhl            #+#    #+#             */
/*   Updated: 2021/08/21 15:54:35 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_check_conversion(t_print *tab, const char *format, int pos);

int	ft_eval_format(t_print *tab, const char *format, int pos)
{
	ft_check_conversion(tab, format, pos);
	return (pos);
}

static void	ft_check_conversion(t_print *tab, const char *format, int pos)
{
	if (format[pos] == 'c')
		ft_print_char(tab);
	if (format[pos] == 's')
		ft_print_string(tab);
	if (format[pos] == 'p')
		ft_print_voidptr(tab);
	if (format[pos] == 'd' || format[pos] == 'i')
		ft_print_integer(tab);
	if (format[pos] == 'u')
		ft_print_unsigned(tab);
	if (format[pos] == 'x')
		ft_print_hexadecimal(tab);
	if (format[pos] == 'X')
		ft_print_hexadecimal_caps(tab);
	if (format[pos] == '%')
		ft_print_percent(tab);
}
