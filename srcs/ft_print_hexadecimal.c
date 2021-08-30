/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 16:04:45 by jpfuhl            #+#    #+#             */
/*   Updated: 2021/08/20 14:38:36 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_puthex(unsigned int nbr, t_print *tab);

void	ft_print_hexadecimal(t_print *tab)
{
	unsigned int	nbr;

	nbr = va_arg(tab->args, unsigned int);
	ft_puthex(nbr, tab);
}

static void	ft_puthex(unsigned int nbr, t_print *tab)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr >= 16)
		ft_puthex(nbr / 16, tab);
	tab->total_length += write(1, &hex[nbr % 16], 1);
}
