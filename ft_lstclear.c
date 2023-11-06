/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmezyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:19:48 by mmezyan           #+#    #+#             */
/*   Updated: 2023/11/05 15:20:08 by mmezyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = NULL;
	if (!lst && !del)
		return ;
	while (tmp)
	{
		tmp = (*lst)->next;
		(*del)((*lst)->content);
		free((*lst));
		(*lst) = tmp;
	}
}
