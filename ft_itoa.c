/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:40:12 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/20 18:44:05 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_size(int n)
{
	int		size;
	long 	num;

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

int		get_pow(int n)
{
	int		pow;
	long 	num;

	pow = 0;
	num = n;
	if (num < 0)
		num *= -1;
	while (num >= 10)
	{
		num /= 10;
		pow++;
	}
	return (pow);
}

char	*ft_itoa(int n)
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
	out[get_size(num)] = 0;
	while (num - num % get_pow(num) * 10 > 0)
	{
		printf("%d\n", (num - (num % (get_pow(num) / 10) * get_pow(num))));
		num /= 10;
	}
	return (out);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-123456));
}