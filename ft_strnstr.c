#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i] == little[j])
		{
			i += j;
			j++;
		}
		if (j == ft_strlen(little))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
