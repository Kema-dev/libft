/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:11:56 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/25 13:21:41 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_front(t_list **alst, t_list *new);
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
