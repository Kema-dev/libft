/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:21:08 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/21 14:42:42 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int	ft_dprintf(int fd, const char *input, ...)
{
	va_list		args;
	t_flag		*flag;
	int			val;

	val = 0;
	flag = malloc(sizeof(t_flag));
	if (!flag)
		return (-1);
	flag->fd = fd;
	va_start(args, input);
	val = ft_dprintf_treat_input(input, args, flag);
	va_end(args);
	if (val == 0)
		val = flag->tot_len;
	free(flag);
	return (val);
}
