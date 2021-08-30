/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_voidptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 16:11:38 by jpfuhl            #+#    #+#             */
/*   Updated: 2021/08/20 14:38:52 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_putaddress(unsigned long long nbr, t_print *tab);

void	ft_print_voidptr(t_print *tab)
{
	unsigned long long	nbr;

	nbr = (unsigned long long)va_arg(tab->args, void *);
	tab->total_length += write(1, "0x", 2);
	ft_putaddress(nbr, tab);
}

static void	ft_putaddress(unsigned long long nbr, t_print *tab)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr >= 16)
		ft_putaddress(nbr / 16, tab);
	tab->total_length += write(1, &hex[nbr % 16], 1);
}
