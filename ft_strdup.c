/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmezyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:25:17 by mmezyan           #+#    #+#             */
/*   Updated: 2023/11/01 12:54:36 by mmezyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s;
	size_t	i;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	s = ft_strlen(s1);
	str = (char *) malloc(s * sizeof(char));
	if (str)
	{
		i = 0;
		while (i < s)
		{
			str[i] = s1[i];
			i++;
		}
	}
	return (str);
}
