/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_caps.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:59:09 by jpfuhl            #+#    #+#             */
/*   Updated: 2021/08/20 14:21:32 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_puthexcaps(unsigned int nbr, t_print *tab);

void	ft_print_hexadecimal_caps(t_print *tab)
{
	unsigned int	nbr;

	nbr = va_arg(tab->args, unsigned int);
	ft_puthexcaps(nbr, tab);
}

static void	ft_puthexcaps(unsigned int nbr, t_print *tab)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (nbr >= 16)
		ft_puthexcaps(nbr / 16, tab);
	tab->total_length += write(1, &hex[nbr % 16], 1);
}
