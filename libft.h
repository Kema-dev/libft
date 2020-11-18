/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 23:09:27 by jjourdan          #+#    #+#             */
/*   Updated: 2020/11/18 14:12:58 by jjourdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

size_t				ft_strlen(const char *s);
void				ft_putchar(char c);
int					ft_isalpha(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
void 				ft_bzero(void *s, size_t n);
void 				*ft_memset(void *s, int c, size_t n);

#endif
