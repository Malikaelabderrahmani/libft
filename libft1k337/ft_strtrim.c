
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t    ft_strlen(const char *s)
{
    size_t i;
    
    i = 0;
    while(s[i])
    {
        i++;
    }
    return (i);
}

static size_t ft_helper1(const char *s1, const char *set)
{
    size_t    len;
    int    flag;
    size_t    i;
    size_t   j;

    flag = 1;
    len = 0;
    i = 0;
    while(s1[i] && flag == 1)
    {
        j = 0;
        while (set[j] && set[j] != s1[i])
        {
          j++;
        }
        if (set[j] == '\0')
            flag = 0;
        else
            len++;
        i++;   
    }
    return (len);
}

static size_t ft_helper2(const char *s1, const char *set)
{
    size_t    len;
    int    flag;
    size_t    i;
    size_t   j;

    flag = 1;
    len = 0;
    i = ft_strlen(s1) - 1;
    while(s1[i] && flag == 1)
    {
        j = 0;
        while (set[j] && set[j] != s1[i])
        {
          j++;
        }
        if (set[j] == '\0')
            flag = 0;
        else
            len++;
        i--;   
    }
    return (len);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t    i;
    size_t    len;
    size_t    l;
    char    *ch;
    size_t   k;

    i = 0;
    if (s1 == NULL || set == NULL)
        return (NULL);
    l = ft_strlen(s1);
    len = ft_helper1(s1, set);
    k = len;
    len = len + ft_helper2(s1, set);
    if (len > l)
      ch = malloc(1);
    else
    {
      ch = malloc(l - len + 1);
      if (ch == NULL)
        return (NULL);
      while (i < l - len)
      {
        ch[i] = s1[k];
        i++;
        k++;    
      }
    }
    ch[i] = '\0';
    return (ch);        
}
int main ()
{
    char *s1 = "hello hey";
    char *s2 = "hloye";
    char *ch = ft_strtrim(s1, s2);
    printf ("%s", ch);
    return 0;
}