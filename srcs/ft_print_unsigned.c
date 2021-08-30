/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 16:09:50 by jpfuhl            #+#    #+#             */
/*   Updated: 2021/08/20 14:58:23 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_print_unsigned(t_print *tab)
{
	unsigned int	nbr;

	nbr = va_arg(tab->args, unsigned int);
	ft_putnbr_tl(nbr, tab);
}
