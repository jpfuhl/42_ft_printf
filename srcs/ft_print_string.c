/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:58:48 by jpfuhl            #+#    #+#             */
/*   Updated: 2021/08/24 20:31:48 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_print_string(t_print *tab)
{
	const char	*str;
	int			index;

	index = 0;
	str = va_arg(tab->args, char *);
	if (str == NULL)
	{
		tab->total_length += write(1, "(null)", 6);
		return ;
	}
	while (str[index] != '\0')
	{
		tab->total_length += write(1, &str[index], 1);
		index++;
	}
}
