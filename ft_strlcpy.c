/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:12:24 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/18 23:15:48 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t   ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	char 	*s;
	char	*d;

	if (size == 0)
		return((size_t)NULL);
	i = 0;
	s = (char *)src;
	d = (char *)dest;
	while ((i < size - 1) && (s[i] != 0))
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}
