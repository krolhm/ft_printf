/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:23:34 by rbourgea          #+#    #+#             */
/*   Updated: 2020/01/15 14:23:36 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*strr;

	strr = (char*)str + ft_strlen(str);
	while (strr != str && *strr != (char)c)
		strr--;
	return ((*strr != (char)c) ? NULL : strr);
}
