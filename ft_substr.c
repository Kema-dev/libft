/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 02:01:42 by jjourdan          #+#    #+#             */
/*   Updated: 2020/12/05 15:43:25 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_out(size_t i, unsigned int start, unsigned char *str, \
				char *out)
{
	size_t	j;

	j = 0;
	while (j + start < i)
	{
		out[j] = str[j + start];
		j++;
	}
	out[j] = 0;
	return (out);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned char	*str;
	char			*out;

	if (!s)
		return (NULL);
	str = (unsigned char *)s;
	i = 0;
	i = ft_strlen(s);
	if (start >= i)
	{
		if (!(out = malloc(sizeof(char))))
			return (NULL);
		out[0] = 0;
		return (out);
	}
	if (i > start + len)
		i = start + len;
	if (!(out = malloc(sizeof(char) * (i - start + 1))))
		return (NULL);
	out = fill_out(i, start, str, out);
	return (out);
}
