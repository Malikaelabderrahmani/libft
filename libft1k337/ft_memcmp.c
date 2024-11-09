/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:52:07 by mel-abde          #+#    #+#             */
/*   Updated: 2024/10/27 19:03:26 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char *p1;
	const unsigned char *p2;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while(p1[i] == p2[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (p1[i] - p2[i]);
}
int main ()
{
	const char *s1 = "hellbh";
	const char *s2 = "hella";
	printf("%d\n", ft_memcmp(s1, s2, 12));
	printf("%d", memcmp(s1, s2, 12));
	return 0;
}