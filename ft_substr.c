/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmezyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:27:44 by mmezyan           #+#    #+#             */
/*   Updated: 2023/11/02 16:19:18 by mmezyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *) malloc(len + 1);
	if (str == NULL || !s || len == 0)
		return (NULL);
	while (i < len )
	{
		str[i] = s[start + (unsigned int) i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
