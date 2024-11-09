/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:44:25 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/06 13:30:39 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned	int	i;
	unsigned	int	j;
	unsigned	int k;
	
	char	*p;

	i = 0;
	j = start;
	k = 0;
	if(s == NULL)
	{
		return (NULL);
	}
    while(s[k])
    {
      k++;
    }
    if (k < start)
    {
      return (NULL);
    }
	while (s[j] && start < len)
	{
		j++;
		i++;	
	}
	if (i < len)
	{
		len = i;
	}
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
int	 main()
{
	//char *s = "hello world!";
	char *p = ft_substr(NULL, 2, 15);
	printf("%s", p);
	return 0;
	
}