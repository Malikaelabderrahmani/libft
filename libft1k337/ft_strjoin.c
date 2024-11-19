/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:08:49 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/10 15:32:01 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ch;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ch = malloc(len_s1 + len_s2 + 1);
	if (ch == NULL)
		return (NULL);
	len_s1 = 0;
	while (s1[len_s1])
	{
		ch[len_s1] = s1[len_s1];
		len_s1++;
	}
	len_s2 = 0;
	while (s2[len_s2])
	{
		ch[len_s1++] = s2[len_s2];
		len_s2++;
	}
	ch[len_s1] = '\0';
	return (ch);
}
