/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:08:49 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/06 13:58:39 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t i;
	
	i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ch;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	j = 0;
	ch = malloc(len_s1 + len_s2 + 1);
	if (ch == NULL)
		return (NULL);
	while(s1[j])
	{
		ch[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while(s2[j])
	{
		ch[i] = s2[j];
		i++;
		j++;
	}
	ch[i] = '\0';
	return (ch);	
}
int main()
{
	char *s1 = "HEY HEY HEY";
	char *s2 = " world!";
	char *s = ft_strjoin(s1, s2);
	printf("%s", s);
	return (0);
}