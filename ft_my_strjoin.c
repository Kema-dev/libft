/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 01:59:06 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/23 01:59:07 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_my_strjoin(int size, char **strs, char *sep)
{
	char	*rtrn;
	int		i;
	int		j;
	int		total_len;

	i = 0;
	j = -1;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (size - 1) * ft_strlen(sep);
	if (size == 0)
		return (malloc(sizeof(NULL)));
	rtrn = malloc(sizeof(char) * (total_len + 1));
	rtrn[0] = 0;
	while (++j < size - 1)
	{
		ft_strcat(rtrn, strs[j]);
		ft_strcat(rtrn, sep);
	}
	ft_strcat(rtrn, strs[j]);
	return (rtrn);
}
