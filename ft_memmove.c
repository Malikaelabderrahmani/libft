/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:12:54 by mel-abde          #+#    #+#             */
/*   Updated: 2024/10/27 16:55:12 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char *d;
	const unsigned char *s;
	unsigned char tmp[len];

	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (len > i)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (len > i)
	{
		d[i] = tmp[i];
		i++;
	}
	return (dst);	
}
int main()
{
	char s1[] = "Hello world!";
	char s2[] = "Hello world!";
	printf("%s\n", ft_memmove(s1, s1+5, 12));
	printf("%s", memmove(s2, s2+5, 12));
	/*char s1[] = "hello";
    char *s2 = "hey";
    char s3[] = "hello";
    char *s4 = "hey";
    printf("%s\n", memmove(s1, s2, 12));
    printf("%s", ft_memmove(s3, s4, 12));*/
	return 0;
}