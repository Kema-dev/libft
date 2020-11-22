/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:40:12 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/22 19:29:01 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_size(int n)
{
	int		size;
	long	num;

	size = 0;
	num = n;
	if (num < 0)
		num *= -1;
	while (num >= 10)
	{
		num /= 10;
		size++;
	}
	return (size + 1);
}

static int		get_pow(long n)
{
	int		pow;
	int		pow_ten;

	pow = 0;
	pow_ten = 1;
	while (n >= 10)
	{
		n /= 10;
		pow++;
	}
	while (pow != 0)
	{
		pow_ten *= 10;
		pow--;
	}
	return (pow_ten);
}

static char		*out_fill(char *out, long num, int neg, int n)
{
	int	last;
	int	curr;

	last = 0;
	curr = 0;
	if (neg == 1)
	{
		out[curr] = '-';
		curr++;
	}
	while (curr != (get_size(n) - 1 + neg))
	{
		last = num / get_pow(num);
		num -= last * get_pow(num);
		out[curr] = last + 48;
		curr++;
	}
	last = num / get_pow(num);
	num -= last * get_pow(num);
	out[curr] = last + 48;
	return (out);
}

char			*ft_itoa(int n)
{
	long	num;
	int		neg;
	char	*out;

	num = n;
	neg = 0;
	if (num < 0)
	{
		neg = 1;
		num *= -1;
	}
	if (!(out = malloc(sizeof(char) * (get_size(num) + 1 + neg))))
		return ((char *)NULL);
	ft_memset(out, 0, get_size(num));
	out[get_size(num)] = 0;
	out_fill(out, num, neg, n);
	return (out);
}
