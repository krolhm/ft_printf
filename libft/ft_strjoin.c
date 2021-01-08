/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:22:53 by rbourgea          #+#    #+#             */
/*   Updated: 2020/01/15 14:22:56 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	size;
	char	*result;
	char	*s;

	size = 0;
	if (s1)
		size += ft_strlen(s1);
	if (s2)
		size += ft_strlen(s2);
	if (!(result = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	s = result;
	if (s1)
		while (*s1)
			*s++ = *s1++;
	if (s2)
		while (*s2)
			*s++ = *s2++;
	*s = 0;
	return (result);
}
