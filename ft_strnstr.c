/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:08:26 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/19 17:50:56 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	pos;
	char	*little;
	char	*big;

	big = (char *)s1;
	little = (char *)s2;
	i = 0;
	pos = 0;
	if (little[0] == 0)
		return ((char *)big);
	while ((big[i] != 0) && (pos < len))
	{
		while ((big[i] == little[i]) && (big[i] != 0) && (pos + i < len))
		{
			if (little[i + 1] == 0)
				return ((char *)big);
			i++;
		}
		big++;
		pos++;
		i = 0;
	}
	return ((char *)NULL);
}
