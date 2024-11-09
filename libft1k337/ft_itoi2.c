/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:24:37 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/08 18:09:00 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>


static int	ft_helper1(int n)
{
	int	len;
	
	len = 1;
	while(n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void ft_helper2(char *ch, int n)
{
	int	flag = 0;
	int	len;

	if (n < 0)
	{
		flag = 1;
		n = n * (-1);
	}
	len = ft_helper1(n);
	if (flag == 0)
    {
        while(n > 0)
        {
          ch[len] = (n % 10) + 48;;
          n = n / 10;
          len--;
        }
    }
    else 
    {
        while(len > 0)
        {
          ch[0] = '-';
          ch[len] = (n % 10) + 48;;
          n = n / 10;
          len--;
        }
    }	
}
char    *ft_itoi(int n)
{
    int    len;
    char *ch;

    len = 0;
    if (n == -2147483648)
    {
      ch = strdup("-2147483648");
      return (ch);
    }
    else if (n < 0)
    {
        n = n * (-1);
        len++;
    }
	len = len + ft_helper1(n);
    ch = malloc(len + 1); 
	ft_helper2(ch, n);
    ch[len] = '\0';
    return (ch);
}
int main ()
{
    printf("%s", ft_itoi(147483648));
    return (0);
}