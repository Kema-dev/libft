/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 02:01:42 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/23 13:56:05 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*str;
	char			*out;

	str = (unsigned char *)s;
	i = 0;
	j = 0;
	while (str[i] != 0)
		i++;
	if (i > start + len)
		i = start + len;
	if (!(out = malloc(sizeof(char) * (i - start + 1))))
		return ((char *)NULL);
	while (j + start < i)
	{
		out[j] = str[j + start];
		j++;
	}
	out[j] = 0;
	return (out);
}
