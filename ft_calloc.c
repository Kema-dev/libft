/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:52:32 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/19 18:26:12 by jjourdan         ###   ########.fr       */
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
	else if (!(tab = malloc(size * nmemb + 1)))
		return (NULL);
	else
		ft_memset(tab, 0, size * nmemb + 1);
	return (tab);
}
