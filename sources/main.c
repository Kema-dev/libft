/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 10:38:50 by jjourdan          #+#    #+#             */
/*   Updated: 2021/04/22 14:16:41 by jjourdan         ###   ########lyon.fr   */
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
	ft_dprintf(STDOUT_FILENO, "Enter a string : ");
	get_next_line(STDIN_FILENO, &str);
	ft_dprintf(STDOUT_FILENO, "You entered \"%s\" which is %d chars long\n", str, ft_strlen(str));
	exit(kemaexit(SUCCESS));
}
