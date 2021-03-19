/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_percent.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:48:44 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/19 11:18:45 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_print_percent(int i, t_flag *flag)
{
	if (flag->width > 0)
		i += flag->width;
	else
		i++;
	if (flag->minus != 0)
	{
		while (flag->width > 1)
			ft_printf_putchar_fd(flag->zero, flag);
		ft_printf_putchar_fd('%', flag);
	}
	else
	{
		ft_printf_putchar_fd('%', flag);
		while (flag->width > 0)
			ft_printf_putchar_fd(' ', flag);
	}
	return (i);
}
