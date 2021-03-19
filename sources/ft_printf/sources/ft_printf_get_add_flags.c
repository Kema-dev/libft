/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_get_add_flags.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:29:04 by jjourdan          #+#    #+#             */
/*   Updated: 2021/01/23 12:09:20 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_get_add_flags(const char *input, t_flag *flag)
{
	size_t	i;

	i = 0;
	if ((input[i] == 'l') && (input[i + 1] != 'l'))
	{
		flag->add_flags = 'l';
		i++;
	}
	else if ((input[i] == 'h') && (input[i + 1] != 'h'))
	{
		flag->add_flags = 'h';
		i++;
	}
	else if ((input[i] == 'l') && (input[i + 1] == 'l'))
	{
		flag->add_flags = 'L';
		i += 2;
	}
	else if ((input[i] == 'h') && (input[i + 1] == 'h'))
	{
		flag->add_flags = 'H';
		i += 2;
	}
	return (i);
}
