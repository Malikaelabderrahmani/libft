/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:35:13 by mel-abde          #+#    #+#             */
/*   Updated: 2024/10/25 19:46:19 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t len;

	i = 0;
	len = 0;
	while(src[len])
	{
		len++;
	}
	while (dstsize - 1 > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}