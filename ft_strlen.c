#include <string.h>
size_t	ft_strlen(char *ch)
{
	size_t	i;

	i = 0;
	while (ch[i] != '\0')
	{
		i++;
	}
	return (i);
}
