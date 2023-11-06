/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmezyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:51:02 by mmezyan           #+#    #+#             */
/*   Updated: 2023/11/05 12:36:56 by mmezyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	
	if (!content)
		return (0);
	new = (t_list *)malloc(sizeof(t_list));
	if(!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}