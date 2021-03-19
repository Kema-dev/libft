/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:34:16 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/19 11:16:16 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_putstr_fd(char *str, t_flag *flag)
{
	size_t	len;

	len = ft_printf_strlen(str);
	write(flag->fd, str, len);
	flag->tot_len += len;
}
