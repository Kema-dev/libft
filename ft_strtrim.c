/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 22:04:22 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/20 15:17:32 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*out;
	size_t	num;

	str = (char *)s1;
	num = 0;
	out = 0;
	while ((str = ft_strnstr(str, 0, ft_strlen(str))))
		num++;
	if (!(malloc(sizeof(char) * (ft_strlen(s1) - (num * ft_strlen(set)) + 1))))
		return ((char *)NULL);
	out = ft_memset(out, 0, (ft_strlen(s1) - (num * ft_strlen(set)) + 1));
	while ((str = ft_strnstr(str, 0, ft_strlen(str))))
	{
		out = ft_strcat(out, str + ft_strlen(set));
	}
	return (out);
}
