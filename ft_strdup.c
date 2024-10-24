#include <stdlib.h>
char *ft_strdup(char *ch)
{
	int	i;
	char	*s;

	i = 0;
	while (ch[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1))
	i = 0;
	while (ch[i] != '\0')
	{
		s[i] = ch[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

