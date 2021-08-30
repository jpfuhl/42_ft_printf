/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 16:05:38 by jpfuhl            #+#    #+#             */
/*   Updated: 2021/08/20 14:58:30 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_print_integer(t_print *tab)
{
	long int	nbr;

	nbr = va_arg(tab->args, int);
	ft_putnbr_tl(nbr, tab);
}
