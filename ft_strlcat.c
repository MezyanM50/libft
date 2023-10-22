#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!dst || size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[j] && i < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
int main()
{
	char *src = " mezyan";
	char dst[10] = "mouad";
	printf("%ld \n%s",ft_strlcat(dst,src,10),dst);
}
