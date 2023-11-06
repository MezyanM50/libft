/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmezyan <mmezyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:39:00 by mmezyan           #+#    #+#             */
/*   Updated: 2023/11/06 15:36:40 by mmezyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;

	if (count > ((size_t)(-1) / size))
		return (0);
	if (size == 0 || count == 0)
	{
		a = (char *)malloc (1 * sizeof(char));
		a[0] = 0;
		return (a);
	}
	a = (char *) malloc(count * size);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, size * count);
	return (a);
}
