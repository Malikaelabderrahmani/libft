#include <string.h>
size_t ft_strlcat(char *dest, char *src, size_t l)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;	
	int	i;
	int	j;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (dest_len >= l)
		return (src_len + l);
	while (src[i] && (l - 1)> 0)
	{
		dest[dest_len + i] = src[i];
		i++;
		l++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}
