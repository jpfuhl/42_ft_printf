/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:04:26 by jpfuhl            #+#    #+#             */
/*   Updated: 2021/08/21 15:54:47 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static t_print	*ft_initialise_tab(t_print *tab);

int	ft_printf(const char *format, ...)
{
	int		pos;
	int		ret;
	t_print	*tab;

	tab = malloc(sizeof(t_print));
	if (tab == NULL)
		return (0);
	ft_initialise_tab(tab);
	va_start(tab->args, format);
	pos = -1;
	ret = 0;
	while (format[++pos] != '\0')
	{
		if (format[pos] == '%')
			pos = ft_eval_format(tab, format, pos + 1);
		else
			ret += write(1, &format[pos], 1);
	}
	va_end(tab->args);
	ret += tab->total_length;
	free (tab);
	return (ret);
}

static t_print	*ft_initialise_tab(t_print *tab)
{
	tab->total_length = 0;
	return (tab);
}
