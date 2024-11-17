/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:44:25 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 19:21:54 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	slen;
	char			*p;

	i = 0;
	slen = 0;
	if (s == NULL)
		return (NULL);
	while (s[slen])
		slen++;
	if (slen < start)
		return (ft_calloc(1, 1));
	if (len > slen - start)
		len = slen - start;
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[len] = '\0';
	return (p);
}

// int main ()
// {
// 	char *s = "hello guys";
// 	char *p;
// 	p = ft_substr(s, 3, 4);
// 	printf("%s", p);
// }
