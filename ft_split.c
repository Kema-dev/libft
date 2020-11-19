/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 23:06:11 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/20 00:39:57 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*next_word(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] == c)
		str++;
	return (str);
}

int		count_sep(char *str, char c)
{
	int nb_sep;
	int i;

	nb_sep = 0;
	i = -1;
	while (str[++i] != 0)
	{
		if (str[i] == c)
		{
			nb_sep++;
			while (str[i] == c)
				i++;
		}
	}
	return (nb_sep);
}

char	**ft_split(const char *s, char c)
{
	int		nb_sep;
	int		i;
	int		j;
	char	*str;
	char	**out;

	str = (char *)s;
	str = next_word(str, c);
	nb_sep = count_sep(str, c);
	if (!(out = malloc(sizeof(char **) * (nb_sep + 2))))
		return ((char **) NULL);
	while ((j <= nb_sep) && (str[i] != 0))
	{
		while ((str[i] != c) && (str[i] != 0))
			i++;
		if (!(out[j] = malloc(sizeof(char *) * (i + 1))))
			return ((char **) NULL);
		ft_strlcpy(out[j], str, i + 1);
		str += i + 1;
		i = 0;
		str = next_word(str, c);
		j++;
	}
	out[j] = 0;
	
	printf("%s\n", out[0]);
	printf("%c\n", out[1]);
	/*printf("%s\n", out[2]);
	printf("%s\n", out[3]);*/
	printf("%d\n", j);
	printf("%d\n", nb_sep);
	
	return (out);
}

int	main(void)
{
	ft_split("aaaaaaaaaaaaaaa", 'a');
}
