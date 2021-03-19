/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_p.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 18:35:45 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/19 11:18:30 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_print_p_left(char *str, t_flag *flag)
{
	if (str[0] == '-')
	{
		ft_printf_putchar_fd('-', flag);
		str++;
	}
	ft_printf_putstr_fd("0x", flag);
	while (flag->prec > (int)ft_printf_strlen(str))
	{
		ft_printf_putchar_fd('0', flag);
		flag->prec--;
	}
	while (str[0] != 0)
	{
		ft_printf_putchar_fd(str[0], flag);
		str++;
	}
	while (flag->width > 0)
		ft_printf_putchar_fd(' ', flag);
}

static void	ft_printf_print_p_right(char *str, t_flag *flag)
{
	int	neg;

	neg = 0;
	if (str[0] == '-')
		neg = 1;
	while ((flag->width > flag->prec + neg) && \
						(flag->width > (int)ft_printf_strlen(str)))
		ft_printf_putchar_fd(' ', flag);
	ft_printf_putstr_fd("0x", flag);
	if (str[0] == '-')
	{
		ft_printf_putchar_fd('-', flag);
		str++;
	}
	while (flag->prec > (int)ft_printf_strlen(str))
	{
		ft_printf_putchar_fd('0', flag);
		flag->prec--;
	}
	while (str[0] != 0)
	{
		ft_printf_putchar_fd(str[0], flag);
		str++;
	}
}

void	ft_printf_print_p(va_list args, t_flag *flag)
{
	char	*str;

	str = ft_printf_ptoa(va_arg(args, unsigned long long), flag);
	flag->width -= 2;
	if ((str[0] == '0') && (!str[1]) && (flag->prec == 0))
		str[0] = 0;
	if (flag->minus == 0)
		ft_printf_print_p_left(str, flag);
	else
		ft_printf_print_p_right(str, flag);
	free(str);
}
