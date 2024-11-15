#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

static int ft_helper1(const char *s, char c) 
{
    int nb = 0;
    int i = 0;

    while (s[i] && s[i] == c)
        i++;
    if (s[i] != '\0')
	    nb = 1;
    while (s[i]) {
        if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
            nb++;
        i++;
    }
    return nb;
}

static char	*ft_helper2(const char *s, int len, int i)
{
	char	*ch;
	int	j;
	
	j = 0;
	ch = malloc(len + 1);
	if (ch == NULL)
		return (NULL);
	while (j < len)
	{
		ch[j] = s[i + j];
		j++;
	}
	ch[j] = '\0';
	return (ch);
}
static int	ft_helper3(const char *s, char c, int i)
{
	while(s[i] && s[i] == c)
		i++;
	return (i);
}

static void	ft_helper4(char **ch, int h)
{
	if (ch[h] == NULL)
	{
		while (h > 0)
			free(ch[--h]);
		free(ch);
		return ;
	}
}

char **ft_split(const char *s, char c) 
{
	int	i;
	int	k;
	int	h;
    char **ch;

    if (!s)
        return NULL;
    h = 0;
    i = 0;
    ch = malloc((ft_helper1(s, c) + 1) * sizeof(char *));
    if (ch == NULL)
        return NULL;
    i = ft_helper3(s, c, i);
    while (s[i] && h < ft_helper1(s, c)) {
        k = 0;
	i = ft_helper3(s, c, i);
        while (s[i + k] && s[i + k] != c)
            k++;
        ch[h] = ft_helper2(s, k, i);
        ft_helper4(ch, h);
        h++;
        i += k;
    }
    ch[h] = NULL;
    return ch;
}

int main() {
    char *s = "hello       my friend    h   ow are you";
    char **ch;
    int i, j;

    ch = ft_split(s, ' ');
    if (ch == NULL) {
        printf("Erreur d'allocation ou chaîne vide.\n");
        return 1;
    }
    i = 0;
    while (ch[i] != NULL) {
        j = 0;
        while (ch[i][j]) {
            printf("%c", ch[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    i = 0;
    while (ch[i] != NULL) {
        free(ch[i]);
        i++;
    }
    free(ch);
    return 0;
}
