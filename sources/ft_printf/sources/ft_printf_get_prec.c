/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_get_prec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:26:57 by jjourdan          #+#    #+#             */
/*   Updated: 2021/01/23 12:10:00 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_get_prec(const char *input, va_list args, t_flag *flag)
{
	size_t	i;

	i = 0;
	if (input[i] == '.')
	{
		i++;
		if (input[i] != '*')
		{
			flag->prec = ft_printf_atoi(&input[i]);
			while ((input[i] >= '0') && (input[i] <= '9'))
				i++;
		}
		else
		{
			flag->prec = va_arg(args, int);
			i++;
		}
	}
	return (i);
}
