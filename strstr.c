#include <string.h>
char *ft_strstr(char *ch, char *pch)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (pch[0] == '\0')
		return (ch);
	while (ch[i])
	{
		if (ch[i] == pch[j])
		{
			while (pch[j] && ch[i] == pch[j])
			{
				j++;
				i++;
			}
			if (pch[j] == '\0')
				return (ch + i - j);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
				
				
			
