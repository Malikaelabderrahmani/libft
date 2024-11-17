/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:38:04 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 12:03:10 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*ch;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	ch = malloc(ft_strlen(s) + 1);
	if (ch == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ch[i] = f(i, s[i]);
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
