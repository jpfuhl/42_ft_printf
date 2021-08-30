/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_tl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:59:56 by jpfuhl            #+#    #+#             */
/*   Updated: 2021/08/20 16:23:59 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_putnbr_tl(long int nbr, t_print *tab)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		tab->total_length += write(1, "-", 1);
	}
	if (nbr > 9)
	{
		ft_putnbr_tl(nbr / 10, tab);
		ft_putnbr_tl(nbr % 10, tab);
	}
	if (0 <= nbr && nbr <= 9)
	{
		nbr += '0';
		tab->total_length += write(1, &nbr, 1);
	}
}
