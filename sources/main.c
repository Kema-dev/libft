/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 10:38:50 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/29 14:42:50 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "my_project.h"

int	main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;
	t_list	*mem;
	char	*str;

	mem = NULL;
	str = kemalloc(&mem, 10, sizeof(char));
	str[0] = 'T';
	str[1] = 'e';
	str[2] = 's';
	str[3] = 't';
	ft_kema_error(ENOMEM, &mem, &free);
	return (SUCCESS);
}
