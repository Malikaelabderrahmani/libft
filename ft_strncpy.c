#include <string.h>
char *ft_strncpy(char *dest, char *src, size_t n)
{
	int	i;

	i = 0;
	while (n > 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	if (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
