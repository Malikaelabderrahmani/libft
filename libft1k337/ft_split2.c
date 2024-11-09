#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

static int ft_helper1(const char *s, char c) {
    int nb = 0;
    int i = 0;

    while (s[i] == c && s[i])
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

char **ft_split(const char *s, char c) 
{
    int nb;
	int	i;
	int	k;
	int	h;
	int	l;
    char **ch;

    if (!s)
        return NULL;
    h = 0;
    i = 0;
    while (s[i] == c && s[i])
        i++;
    nb = ft_helper1(s, c);
    ch = malloc((nb + 1) * sizeof(char *));
    if (ch == NULL)
        return NULL;
    while (s[i] && h < nb) {
        k = 0;
        while (s[i] == c)
            i++;
        while (s[i + k] && s[i + k] != c)
            k++;
        ch[h] = malloc(k + 1);
        if (ch[h] == NULL) {
            while (h >= 0) {
                free(ch[h]);
                h--;
            }
            free(ch);
            return NULL;
        }
        l = 0;
        while (l < k) {
            ch[h][l] = s[i + l];
            l++;
        }
        ch[h][l] = '\0';
        h++;
        i += k;
    }
    ch[h] = NULL;
    return ch;
}

int main() {
    char *s = "";
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
