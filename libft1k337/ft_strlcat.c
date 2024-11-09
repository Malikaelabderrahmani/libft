/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:18:33 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/06 16:28:59 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	i = 0;
	ldst = 0;
	lsrc = 0;
	while (src[lsrc])
	{
		lsrc++;
	}
	if (dstsize == 0)
	{
		return (lsrc);
	}
	while (dst[ldst])
	{
		ldst++;
	}
	if (ldst >= dstsize)
	{
		return (dstsize + lsrc);
	}
	i = ldst;
	while (i < dstsize - 1)
	{
		dst[i] = src[i - ldst];
		i++;
	}
	dst[i] = '\0';
	return (lsrc + ldst);	
}
int main()
{
	//char s1[20] = "hello";
	char *src = " world!";
	//printf("%zu\n", ft_strlcat(NULL, src, 0));
	printf("%lu\n", strlcat(NULL, src, 0));
}