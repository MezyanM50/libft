/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmezyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:06:15 by mmezyan           #+#    #+#             */
/*   Updated: 2023/11/01 14:58:02 by mmezyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	set_check(char c, char const*set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	strcpy_len(char const*s1, char const*set)
{
	int	i;
	int	count;
	int	len;

	len = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] && set_check(s1[i], set))
		i++;
	while (len > 0 && set_check(s1[len], set))
	{
		i++;
		len--;
	}
	count = ft_strlen(s1) - i;
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;
	int		len;
	int		j;

	len = ft_strlen(s1) - 1;
	i = 0;
	j = 0;
	str = (char *)malloc((strcpy_len(s1, set) * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	while (len > 0 && set_check(s1[len], set))
		len--;
	while (s1[i] && set_check(s1[i], set))
		i++;
	while (s1[i] && i <= len)
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
