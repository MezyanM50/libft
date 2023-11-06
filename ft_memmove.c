/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmezyan <mmezyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:07:18 by mmezyan           #+#    #+#             */
/*   Updated: 2023/11/06 17:27:57 by mmezyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	if (!dst && !src)
		return (dst);
	s = (char *)src;
	d = (char *)dst;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
		ft_memcpy(d, s, len);
	return (d);
}
