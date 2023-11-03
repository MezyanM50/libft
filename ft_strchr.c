/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmezyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:44:11 by mmezyan           #+#    #+#             */
/*   Updated: 2023/10/31 15:50:18 by mmezyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char		*str;
	unsigned char	ch;

	i = 0;
	str = (char *)s;
	ch = (unsigned char)c;
	while (str[i] )
	{
		if (ch == (unsigned char)str[i])
			return (str + i);
		i++;
	}
	return (NULL);
}
int main(void)
{
	char *s = "tripouille";
	char *c = ft_strchr(s,0);
	printf ("%c",*c);
	return (0);
}
