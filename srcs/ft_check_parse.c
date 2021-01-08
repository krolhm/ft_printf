/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_parse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:12:15 by rbourgea          #+#    #+#             */
/*   Updated: 2020/01/18 13:22:42 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isformat_or_flag(char c)
{
	return (ft_isformat(c) || ft_isflag(c));
}

int		ft_isformat(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
			c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int		ft_isflag(char c)
{
	return (c == '.' || c == '-' || c == '*' || c == ' ' || ft_isdigit(c));
}
