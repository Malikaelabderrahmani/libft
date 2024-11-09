/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:28:48 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/08 12:39:41 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

static	int	ft_helper1(const char *s, char c)
{
	int	nb;
	int	i;
	
	nb = 0;
	i = 0;
	while(s[i] == c)
        i++;
    while (s[i])
    {
        if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
            nb++;
        i++;
    }
	return (nb);
}
char    **ft_split(const char *s, char c)
{
    int    nb;
    int    i;
    int    j;
    int    k;
    int    h;
    int    l;
    char **ch;

	
	if (s == NULL)
		return (NULL);
    h = 0;
	j = 0;
    while(s[j] == c && s[j])
        j++;
	if (!s[j])
		return (NULL);
	nb = ft_helper1(s, c);
    ch = malloc((nb + 2) * sizeof(char *));
    if (ch == NULL)
        return (NULL);
    i = 0;
    while (s[j] && s[j] != c)
    {
        j++;
        i++;
    }
    ch[h] = malloc(i + 1);
    if (ch[h] == NULL)
        return (NULL);
    k = j - i;
    i = 0;
    while(s[k] && s[k] != c)
    {
        ch[0][i] = s[k];
        i++;
        k++;
    }
    ch[0][i] = '\0';
	h++;
    j = k;
    while(s[j] && h < nb + 1)
    {
        if (s[j] == c && s[j + 1] != c && s[j + 1] != '\0')
        {
            j++;
            i = 0;
            while(s[j] != '\0' && s[j] != c)
            {
                i++;
                j++;    
            }
            ch[h] = malloc(i + 1);
            if (ch[h] == NULL)
            {
                while(h >= 0)
                {
                    free(ch[h]);
                    h--;
                }
                free(ch);
            }
			return (NULL);
            l = j - i;
            k = 0;
            while(s[l] != '\0' && s[l] != c)
            {
                ch[h][k] = s[l];
                k++;
                l++;
            }
            ch[h][k] = '\0';
            h++;
        }    
    }
    ch[h] = NULL;
    return (ch);
}

int main ()
{
    char *s = NULL;
    char **ch;
    int i;
    int j;
    ch = ft_split(s, ' ');
    i = 0;
    while(ch[i] != NULL)
    {
        j = 0;
        while (ch[i][j])
        {
            printf("%c", ch[i][j]);
            j++;
        }
		printf("\n");
        i++;
    }
	printf("%s", ch[i]);
	free(ch);
    return (0);
}