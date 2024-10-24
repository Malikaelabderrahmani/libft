#include <string.h>
char *ft_strchr(char *ch, char c)
{
	int	i;

	i = 0;
	while (ch[i])
	{
		if (ch[i] == c)
			return (ch + i);
		i++;
	}
	if (ch[i] == c)
		return (ch + i);
	else
		return (NULL);
}
