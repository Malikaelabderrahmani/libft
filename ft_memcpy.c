/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:45:32 by mel-abde          #+#    #+#             */
/*   Updated: 2024/10/27 17:17:47 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t			i;
	
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
int main()
{
	char s1[] = "hello";
	char *s2 = "hey";
	//printf("%s\n", ft_memcpy(s1, s2, 18));
	printf("%s", memcpy(s1, s2, 8));
}