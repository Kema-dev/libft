/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:12:24 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/18 22:39:33 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t   ft_strlcpy(char *dest, const char *src, size_t size)
{
        int		i;
        size_t	sz;
        size_t	source;

        sz = size;
        i = 0;
        source = 0;
        while (sz > 1)
        {
                dest[i] = src[i];
                i++;
                sz--;
        }
        dest[size] = 0;
        while (src[source] != 0)
                source++;
        source++;
        return (source);
}
