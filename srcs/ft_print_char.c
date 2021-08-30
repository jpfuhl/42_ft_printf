/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:19:45 by jpfuhl            #+#    #+#             */
/*   Updated: 2021/08/20 14:29:57 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_print_char(t_print *tab)
{
	unsigned char	c;

	c = va_arg(tab->args, int);
	tab->total_length += write(1, &c, 1);
}
