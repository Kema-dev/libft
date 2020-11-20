/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 23:01:46 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/20 15:16:04 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_separator(char *str, char *sep)
{
	while (*sep)
	{
		if (*str == *sep++)
			return (1);
	}
	return (0);
}

int		ft_word_len(char *str, char *sep)
{
	int i;

	i = 0;
	while (str[i] && (ft_is_separator(str + i, sep) == 0))
		i++;
	return (i);
}

int		ft_word_count(char *str, char *sep)
{
	int i;
	int j;

	j = 0;
	while (*str)
	{
		while (*str && ft_is_separator(str, sep))
			str++;
		i = ft_word_len(str, sep);
		str += i;
		if (i != 0)
			j++;
	}
	return (j);
}

char	*ft_word_copy(char *src, int n)
{
	char *dest;

	if (!(dest = malloc((n + 1) * sizeof(char))))
		return (NULL);
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char	**ft_my_split(char *str, char *charset)
{
	char	**c;
	int		size;
	int		i;
	int		j;

	size = ft_word_count(str, charset);
	if (!(c = malloc((size + 1) * sizeof(char *))))
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && ft_is_separator(str, charset))
			str++;
		j = ft_word_len(str, charset);
		c[i] = ft_word_copy(str, j);
		str += j;
	}
	c[size] = 0;
	return (c);
}
