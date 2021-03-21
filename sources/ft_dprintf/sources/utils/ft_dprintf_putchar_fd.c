/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_putchar_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:35:55 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/21 14:39:05 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

void	ft_dprintf_putchar_fd(char c, t_flag *flag)
{
	write(flag->fd, &c, 1);
	flag->tot_len++;
	flag->width--;
}
