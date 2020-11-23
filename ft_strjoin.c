/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 02:00:50 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/23 02:00:50 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tot_len;
	char	*out;

	tot_len = ft_strlen(s1) + ft_strlen(s2);
	if (!(out = malloc(sizeof(char) * (tot_len + 1))))
		return ((char *)NULL);
	out = ft_memset(out, 0, tot_len);
	ft_strcat(out, (char *)s1);
	ft_strcat(out, (char *)s2);
	out[tot_len] = 0;
	return (out);
}
