/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 10:38:50 by jjourdan          #+#    #+#             */
/*   Updated: 2021/04/21 18:39:19 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "my_project.h"

int	main(int argc, char **argv, char **envp)
{
	char	*str;

	(void)argc;
	(void)argv;
	(void)envp;
	str = kemalloc(14, sizeof(char));
	ft_memcpy(str, "Hello,world!", 13);
	ft_dprintf(STDOUT_FILENO, "%s\n", str);
	exit(kemaexit(SUCCESS));
}
