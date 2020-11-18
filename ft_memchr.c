/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:16:14 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/18 19:59:27 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*src;

	i = -1;
	src = (char *)s;
	while (++i < n)
	{
		if (src[i] == c)
			return ((void *)(s + i));
	}
	return (NULL);
}
