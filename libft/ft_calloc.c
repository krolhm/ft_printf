/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:18:58 by rbourgea          #+#    #+#             */
/*   Updated: 2020/01/15 14:19:36 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*result;
	size_t	i;

	if (!(result = (char*)malloc(size * nitems)))
		return (NULL);
	i = 0;
	while (i < (nitems * size))
		result[i++] = 0;
	return (result);
}
