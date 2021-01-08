/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:12:42 by rbourgea          #+#    #+#             */
/*   Updated: 2020/01/18 13:25:23 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define F_DEF_PREC		-1
# define F_NO_PREFIX	0
# define F_ZERO			1
# define F_SPACE		2
# define F_ZERO_SPACE	3
# define F_RIGHT		4
# define F_LEFT			5

# define W_NOTHING		0
# define W_LENGTH		1
# define W_PRECISION	2
# define W_POINT		3
# define W_FIRST_FLAG	4

typedef struct	s_flags
{
	int			alignment;
	int			length;
	int			length_def;
	int			precision;
	int			prefix;
	char		conversion;
}				t_flags;

int				ft_putchar(char c, t_flags flags);
int				ft_putstrr(const char *str, t_flags flags);
void			ft_unsigned(unsigned int n, int *size, t_flags flags);
int				ft_putnbr(int n, t_flags flags);
void			ft_puthexa(int mode, unsigned long n, int *size, t_flags flags);
int				ft_ptr(void *ptr, t_flags flags);

void			ft_print_nbr(unsigned int n);
int				ft_size_base(long long n, size_t size, int base);
void			ft_print_prefix(t_flags flags, int len);
void			ft_print_zeroes(int len, int precision);
int				ft_size_prefix(t_flags flags, int len);

void			ft_flag_numbers(t_flags *flags, const char **str, int *waiting);
void			ft_prefix(t_flags *flags, char current);
void			ft_alignment(t_flags *flags);
void			ft_star(t_flags *flags, int *waiting, va_list args);
t_flags			ft_parse(const char **str, va_list args);
void			ft_update_flags(t_flags *flags, int waiting);

int				ft_isformat_or_flag(char c);
int				ft_isformat(char c);
int				ft_isflag(char c);

int				ft_printf(const char *str, ...);

#endif
