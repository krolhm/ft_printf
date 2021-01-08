/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:21:35 by rbourgea          #+#    #+#             */
/*   Updated: 2020/01/15 14:21:38 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned int	l;
	unsigned char	*s;
	unsigned char	*o;

	if (len == 0)
		return (0);
	l = 0;
	s = (unsigned char*)s1;
	o = (unsigned char*)s2;
	while (l < len)
	{
		if (s[l] != o[l])
			return (s[l] - o[l]);
		l++;
	}
	return (0);
}
