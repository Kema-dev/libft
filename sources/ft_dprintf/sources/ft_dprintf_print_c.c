/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_print_c.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:56:18 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/21 14:40:44 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

void	ft_dprintf_print_c(va_list args, t_flag *flag)
{
	if (flag->minus != 0)
	{
		while (flag->width > 1)
			ft_dprintf_putchar_fd(' ', flag);
		ft_dprintf_putchar_fd(va_arg(args, int), flag);
	}
	else
	{
		ft_dprintf_putchar_fd(va_arg(args, int), flag);
		while (flag->width > 0)
			ft_dprintf_putchar_fd(' ', flag);
	}
}
