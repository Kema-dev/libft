/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:32:40 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/18 22:38:10 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        unsigned int i;

        i = 0;
        if (n == 0)
                return (0);
        while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i] && i < n - 1)
                i++;
        return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}
