/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_calloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:10:05 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/21 14:19:47 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

void	*ft_dprintf_calloc(size_t nmemb, size_t size)
{
	char	*tab;

	tab = malloc(size * nmemb);
	if (!tab)
		return (NULL);
	ft_dprintf_memset(tab, 0, size * nmemb);
	return (tab);
}
