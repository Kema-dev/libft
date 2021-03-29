/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kema_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:29:56 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/29 14:51:52 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libkema.h"

int	ft_kema_error(int errcode, t_list **lst, void (*del)(void*))
{
	ft_lstclear(lst, del);
	if (errcode == SUCCESS)
		ft_dprintf(STDOUT_FILENO, STR_SUCCESS);
	else if (errcode = FAILURE)
		ft_dprintf(STDERR_FILENO, "Error %d: %s\n", errcode, STR_FAILURE);
	return (errcode);
}
