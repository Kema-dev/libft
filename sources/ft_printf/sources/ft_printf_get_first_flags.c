/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_get_first_flags.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:15:46 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/19 11:02:49 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_get_first_flags(const char *input, t_flag *flag, va_list args)
{
	size_t	i;

	i = 0;
	while ((input[i] == '-') || (input[i] == '+') || (input[i] == ' ') \
		 || (input[i] == '0') || (input[i] == '#'))
	{
		if (input[i] == '-')
			flag->minus = 0;
		else if (input[i] == '+')
			flag->plus = 0;
		else if (input[i] == ' ')
			flag->space = 0;
		else if (input[i] == '0')
			flag->zero = '0';
		else if (input[i] == '#')
			flag->hashtag = 0;
		else if (input[i] == '*')
			flag->width = ft_printf_get_width(input, args, flag);
		i++;
	}
	return (i);
}
