/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:20:56 by jpfuhl            #+#    #+#             */
/*   Updated: 2021/08/24 20:44:19 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

/* ************************************************************************** */

# include <stdarg.h>
# include "../libft/libft.h"

/* ************************************************************************** */

typedef struct s_print
{
	va_list	args;
	int		total_length;
}	t_print;

/* ************************************************************************** */

int		ft_printf(const char *format, ...);

int		ft_eval_format(t_print *tab, const char *format, int pos);

void	ft_print_char(t_print *tab);
void	ft_print_string(t_print *tab);
void	ft_print_voidptr(t_print *tab);
void	ft_print_integer(t_print *tab);
void	ft_print_unsigned(t_print *tab);
void	ft_print_hexadecimal(t_print *tab);
void	ft_print_hexadecimal_caps(t_print *tab);
void	ft_print_percent(t_print *tab);

void	ft_putnbr_tl(long int nbr, t_print *tab);

#endif
