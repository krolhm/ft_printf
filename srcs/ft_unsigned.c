/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:13:10 by rbourgea          #+#    #+#             */
/*   Updated: 2020/01/18 13:23:02 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_print_prec_null(t_flags flags)
{
	int		spaces;

	if (flags.length_def)
		return ;
	spaces = 0;
	while (spaces < flags.length)
	{
		write(1, " ", 1);
		spaces++;
	}
}

void			ft_unsigned(unsigned int n, int *size, t_flags flags)
{
	int		len;
	int		precision;

	precision = (flags.precision == F_DEF_PREC) ? 1 : flags.precision;
	len = ft_size_base(n, 0, 10);
	if (flags.alignment == F_RIGHT && (precision != 0 || n != 0))
	{
		ft_print_prefix(flags, len);
		ft_print_zeroes(len, precision);
		ft_print_nbr(n);
	}
	else if (flags.alignment == F_LEFT && (precision != 0 || n != 0))
	{
		ft_print_zeroes(len, precision);
		ft_print_nbr(n);
		ft_print_prefix(flags, len);
	}
	else
		ft_print_prec_null(flags);
	if (precision == 0 && n == 0)
		*size = (flags.length_def) ? 0 : flags.length;
	else if (len >= precision)
		*size = (flags.length <= len) ? len : flags.length;
	else
		*size = (precision <= flags.length) ? flags.length : precision;
}
