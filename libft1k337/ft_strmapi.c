/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:38:04 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/09 12:02:05 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/*size_t	strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}*/
char ft_test(unsigned int i, char c)
{
	return (c + i);
}
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char *ch;
	unsigned int i;
	
	if (s == NULL)
		return (NULL);
	ch = malloc(strlen(s) + 1);
	if (ch == NULL)
		return (NULL);
	i = 0;
	while(s[i])
	{
		ch[i] = f(i, s[i]);
		i++;
	}
	ch[i] = '\0';
	return (ch);	
}
int main()
{
	char (*pt)(unsigned int, char);
	char *s = "hello";
	char *ch;
	pt = ft_test;
	ch = ft_strmapi(s, pt);
	printf("%s", ch);
	free(ch);
}