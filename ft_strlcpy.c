/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 02:01:02 by jjourdan          #+#    #+#             */
/*   Updated: 2020/12/05 16:15:50 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	int	size_src;

	i = 0;
	size_src = 0;
	while (src[size_src] != 0)
		size_src++;
	while (((int)i < (int)size - 1) && (src[i] != 0))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (size_src);
}
