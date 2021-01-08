/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:12:51 by rbourgea          #+#    #+#             */
/*   Updated: 2020/01/18 13:22:52 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putchar(char c, t_flags flags)
{
	int		spaces;
	char	*disp;

	spaces = 0;
	disp = (flags.prefix == F_ZERO || flags.prefix == F_ZERO_SPACE) ? "0" : " ";
	if (flags.alignment == F_RIGHT)
	{
		while (spaces < flags.length - 1)
		{
			write(1, disp, 1);
			spaces++;
		}
		write(1, &c, 1);
	}
	else
	{
		write(1, &c, 1);
		while (spaces < flags.length - 1)
		{
			write(1, (flags.prefix == 1) ? "0" : " ", 1);
			spaces++;
		}
	}
	return (flags.length ? flags.length : 1);
}
