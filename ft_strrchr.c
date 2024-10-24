#include <string.h>
char *ft_strrchr(char *ch, char c)
{
	int	i;
	
	i = 0;
	while(ch[i])
	{
		i++;
	}
	while (i > 0)
	{
		if (ch[i] == c)
			return (ch + i);
		i++;
	}
	return (NULL);
}
