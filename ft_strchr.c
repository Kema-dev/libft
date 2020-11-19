/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:51:35 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/19 15:54:04 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strchr(const char *s, int c)
{
	int i;

	i = -1;
	while (s[++i] != 0)
	{
		if (s[i] == c)
			return ((void *)s + i);
	}
	if (s[i] == c)
		return ((void *)s + i);
	return (NULL);
}
