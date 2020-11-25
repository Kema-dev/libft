/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:55:42 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/25 19:08:37 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*buf;

	if (!(buf = malloc(sizeof(t_list))))
		return (NULL);
	while (lst->next != 0)
		lst = lst->next;
	buf = lst;
	return (buf);
}
