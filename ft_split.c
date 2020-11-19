/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 23:06:11 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/19 23:27:47 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	size_t	nb_sep;
	int		i;
	int		j;
	char	*str;
	char	**out;

	str = (char *)s;
	nb_sep = 0;
	i = -1;
	while (str[++i] != 0)
	{
		if (str[i] == c)
			nb_sep++;
	}
	out = 0;
	if (!(out = malloc(sizeof(char **) * (nb_sep + 2))))
		return ((char **) NULL);
	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		while (str[i] != c)
			i++;
		if (!(out[j] = malloc(sizeof(char *) * (i + 1))))
			return ((char **) NULL);
		ft_strlcpy(out[j], str, i);
		out[j][i] = 0;
		str += i;
		i = 0;
		j++;
	}
	out[j] = 0;
	return (out);
}
