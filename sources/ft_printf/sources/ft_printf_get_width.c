/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_get_width.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:21:01 by jjourdan          #+#    #+#             */
/*   Updated: 2021/01/23 12:10:59 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_get_width(const char *input, va_list args, t_flag *flag)
{
	size_t	i;

	i = 0;
	if (((input[i] >= '0') && (input[i] <= '9')) || (input[i] == '*'))
	{
		if (input[i] != '*')
		{
			flag->width = ft_printf_atoi(&input[i]);
			while ((input[i] >= '0') && (input[i] <= '9'))
				i++;
		}
		else if ((flag->width == -1) && (input[i] == '*'))
		{
			flag->width = va_arg(args, int);
			i++;
		}
	}
	return (i);
}
