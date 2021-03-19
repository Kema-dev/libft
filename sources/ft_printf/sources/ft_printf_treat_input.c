/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_treat_input.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:28:16 by jjourdan          #+#    #+#             */
/*   Updated: 2021/01/23 12:19:37 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_treat_input(const char *input, va_list args, t_flag *flag)
{
	int		i;
	int		buf;

	i = 0;
	buf = 0;
	flag = ft_printf_flag_init(flag);
	while (input[i] != 0)
	{
		flag = ft_printf_flag_reset(flag);
		if (input[i] != '%')
			i = ft_printf_print_normal(input, i, flag);
		else if ((input[i] == '%') && (input[i + 1] != 0))
		{
			buf = ft_printf_get_flag(&input[i + 1], args, flag);
			if ((ft_printf_treat_flag(args, flag)) && (input[i + buf] != 0))
				i = ft_printf_print_percent(i, flag);
			else if (input[i + buf] != 0)
				i += buf + 1;
			else
				return (-1);
		}
		else
			break ;
	}
	return (0);
}
