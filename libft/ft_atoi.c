/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:14:24 by rbourgea          #+#    #+#             */
/*   Updated: 2020/01/15 14:14:26 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	int		sign;
	int		result;
	int		i;

	result = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\r' || s[i] == '\n'
			|| s[i] == '\f' || s[i] == '\v')
		i++;
	sign = 1;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (ft_isdigit(s[i]))
		result = result * 10 + s[i++] - '0';
	return (sign * result);
}
