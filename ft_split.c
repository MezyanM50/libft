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

int	ft_count_words(char *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	oldi;
	int	count;

	len = ft_strlen(s);
	i = 0;
	count = 0 ;
	while (i < len)
	{
		while (i < len && s[i] == c)
			i++;
		oldi = i;
		while (i < len && s[i] != c)
			i++;
		if (i > oldi)
			count++;
	}
	return (count);
}

char	*ft_worddup(char *s,size_t start,size_t end)
{
	char	*str;
	size_t	len;
	int	i;
	
	len = end - start;
	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (start < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	oldi;
	int	j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	split =(char **)malloc(sizeof(char *) * (ft_count_words((char *)s,c) + 1));
	if (split == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		while (i < ft_strlen(s) && s[i] == c)
			i++;
		oldi = i;
		while (i < ft_strlen(s) && s[i] != c)
			i++;
		if (i > oldi)
			 split[j++] = ft_worddup((char *)s, oldi, i);
	}
	split[j] = 0;
	return (split);
}
