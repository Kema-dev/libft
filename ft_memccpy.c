/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:31:39 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/18 19:59:55 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	char	*d;
	char	*s;

	i = -1;
	d = (char *)dest;
	s = (char *)src;
	while (++i < n)
	{
		d[i] = s[i];
		if ((char)s[i] == (char)c)
			return ((char *)dest + i + 1);
	}
	return (NULL);
}