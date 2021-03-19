/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:19:20 by jjourdan          #+#    #+#             */
/*   Updated: 2021/03/19 11:16:55 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>

typedef struct s_flag
{
	int		fd;
	int		minus;
	int		plus;
	int		space;
	char	zero;
	int		hashtag;
	int		width;
	int		prec;
	char	add_flags;
	char	type;
	size_t	tot_len;
}	t_flag;

int					ft_printf_atoi(const char *nptr);
void				*ft_printf_calloc(size_t nmemb, size_t size);
char				*ft_printf_itoa(int n);
void				*ft_printf_memset(void *s, int c, size_t n);
char				*ft_printf_ptoa(unsigned long long ull, t_flag *flag);
void				ft_printf_putchar_fd(char c, t_flag *flag);
void				ft_printf_putstr_fd(char *str, t_flag *flag);
size_t				ft_printf_strlen(const char *s);
char				*ft_printf_utoa(unsigned int n);
char				*ft_printf_xtoa(unsigned int n, t_flag *flag);
int					ft_printf(int fd, const char *input, ...);
t_flag				*ft_printf_flag_init(t_flag *flag);
t_flag				*ft_printf_flag_reset(t_flag *flag);
int					ft_printf_get_add_flags(const char *input, \
									t_flag *flag);
int					ft_printf_get_first_flags(const char *input, \
									t_flag *flag, va_list args);
int					ft_printf_get_flag(const char *input, va_list args, \
									t_flag *flag);
int					ft_printf_get_prec(const char *input, va_list args, \
									t_flag *flag);
int					ft_printf_get_type(const char *input, t_flag *flag);
int					ft_printf_get_width(const char *input, va_list args, \
									t_flag *flag);
void				ft_printf_print_c(va_list args, t_flag *flag);
void				ft_printf_print_s(va_list args, t_flag *flag);
void				ft_printf_print_x(va_list args, t_flag *flag);
int					ft_printf_treat_flag(va_list args, t_flag *flag);
int					ft_printf_treat_input(const char *input, va_list args, \
									t_flag *flag);
int					ft_printf_print_normal(const char *input, int i, \
									t_flag *flag);
int					ft_printf_print_percent(int i, t_flag *flag);
void				ft_printf_print_p(va_list args, t_flag *flag);

#endif
