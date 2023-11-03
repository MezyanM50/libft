/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmezyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:50:30 by mmezyan           #+#    #+#             */
/*   Updated: 2023/11/03 13:55:30 by mmezyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	ft_countword(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (ft_check(s[i], c))
			i++;
		if (s[i])
			count++;
		while (s[i] && !ft_check(s[i], c))
			i++;
	}
	return (count);
}

char	*ft_worddup(char const *s, int finish, int start)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = finish - start;
	str = (char *)malloc(len * sizeof(char) + 1);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = 1;
	str = (char **) malloc(ft_countword(s, c) * sizeof(char *) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		while (ft_check(s[i], c))
			i++;
		start = i;
		while (s[i] && !ft_check(s[i], c))
			i++;
		if (start >= 0)
		{
			str[j++] = ft_worddup(s, i, start);
			start = -1;
		}
	}
	str[i] = "\0";
	return (str);
}
