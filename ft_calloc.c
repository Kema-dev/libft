/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:27:42 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/23 11:27:44 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;

	if (nmemb == 0)
		return (NULL);
	else if (size == 0)
	{
		if (!(tab = malloc(0)))
			return (NULL);
		else
			return (tab);
	}
	else if (!(tab = malloc(size * (nmemb + 1))))
		return (NULL);
	else
		ft_memset(tab, 0, size * nmemb + 1);
	return (tab);
}
