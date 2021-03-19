/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_c.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:56:18 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/19 11:18:04 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_print_c(va_list args, t_flag *flag)
{
	if (flag->minus != 0)
	{
		while (flag->width > 1)
			ft_printf_putchar_fd(' ', flag);
		ft_printf_putchar_fd(va_arg(args, int), flag);
	}
	else
	{
		ft_printf_putchar_fd(va_arg(args, int), flag);
		while (flag->width > 0)
			ft_printf_putchar_fd(' ', flag);
	}
}
