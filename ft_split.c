/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 02:00:12 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/23 02:00:13 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		sep_counter(const char *s, char c)
{
	int		pos;
	int		nb_sep;
	char	*str;

	str = (char *)s;
	nb_sep = 0;
	pos = 0;
	while (str[pos] == c)
		pos++;
	while (str[pos] != 0)
	{
		if (str[pos] == c)
		{
			while (str[pos] == c)
				pos++;
			if (str[pos] == 0)
				return (nb_sep);
			nb_sep++;
			pos--;
		}
		pos++;
	}
	return (nb_sep);
}

static int		get_word_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i);
}

static char		*fill_word(char *str, char *out, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		out[i] = str[i];
		i++;
	}
	out[i] = 0;
	return (out);
}

static char		**fill_tab_tab(char **out, char *str, char c, int nb_sep)
{
	int	i;

	i = 0;
	while (i < nb_sep + 1)
	{
		if (!(out[i] = malloc(sizeof(char) * (get_word_len(str, c) + 1))))
			return ((char **)NULL);
		out[i] = fill_word(str, out[i], get_word_len(str, c));
		str += get_word_len(str, c);
		while (str[0] == c)
			str++;
		i++;
	}
	out[i] = 0;
	return (out);
}

char			**ft_split(const char *s, char c)
{
	int		nb_sep;
	char	*str;
	char	**out;

	str = (char *)s;
	nb_sep = 0;
	out = 0;
	while (str[0] == c)
		str++;
	if (str[0] == 0)
	{
		if ((!(out = malloc(sizeof(char *) * (2)))))
			return ((char **)NULL);
		out[0] = 0;
		out[1] = 0;
		return (out);
	}
	nb_sep = sep_counter(s, c);
	if ((!(out = malloc(sizeof(char *) * (nb_sep + 2)))))
		return ((char **)NULL);
	out = fill_tab_tab(out, str, c, nb_sep);
	return (out);
}
