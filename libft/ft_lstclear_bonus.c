/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:20:25 by rbourgea          #+#    #+#             */
/*   Updated: 2020/01/15 14:20:27 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;

	if (!lst || !*lst || !del)
		return ;
	next = (*lst)->next;
	while (next)
	{
		ft_lstdelone(*lst, del);
		*lst = next;
		next = next->next;
	}
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
