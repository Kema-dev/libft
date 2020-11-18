/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:13:12 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/18 20:01:30 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
        size_t			i;
		unsigned char 	*src1;
		unsigned char	*src2;

        i = 0;
		src1 = (unsigned char *)s1;
		src2 = (unsigned char *)s2;
        if (n == 0)
                return (0);
        while (src1[i] != 0 && src2[i] != 0 && src1[i] == src2[i] && i < n - 1)
                i++;
        if (src1[i] == src2[i])
                return (0);
        return ((unsigned int)src1[i] - (unsigned int)src2[i]);
}
