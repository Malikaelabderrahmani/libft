/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:29:57 by mel-abde          #+#    #+#             */
/*   Updated: 2024/10/26 19:29:41 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (needle[0] == '\0')
	{
		return (char *) (haystack);
	}
	while(haystack[i] && len > i)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			j = 1;
			while(needle[j] && needle[j] == haystack[k])
			{
				j++;
				k++;
			}
			if (needle[j] != '\0')
			{
				return (char *) (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
int main()
{
	char *s1 = "hello";
	char *s2 = "";
	char *ch = ft_strnstr(s1, s2, 8);
	printf("%s", ch);
}