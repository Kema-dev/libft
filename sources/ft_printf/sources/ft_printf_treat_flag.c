/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_treat_flag.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:37:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/19 11:19:33 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_treat_flag(va_list args, t_flag *flag)
{
	if (flag->type == '%')
		ft_printf_print_percent(1, flag);
	else if (flag->type == 'c')
		ft_printf_print_c(args, flag);
	else if ((flag->type == 'x') || (flag->type == 'X') || (flag->type == 'u') \
								 || (flag->type == 'd') || (flag->type == 'i'))
		ft_printf_print_x(args, flag);
	else if (flag->type == 'p')
		ft_printf_print_p(args, flag);
	else if (flag->type == 's')
		ft_printf_print_s(args, flag);
	else
		return (-1);
	return (0);
}
