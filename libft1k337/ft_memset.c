/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:10:15 by mel-abde          #+#    #+#             */
/*   Updated: 2024/10/25 19:11:55 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char *pt;
	
	pt = (unsigned char *)b;
	i = 0;
	while (len > 0)
	{
		pt[i] = (unsigned char) c;
		len--;
		i++;	
	}
	return (b);
}
#include <stdio.h>

int main() {
    int b;
	b = 0 ;
	// 560 = 10   00110000;

   //printf("%d",b);
	printf("%d",*(int *)memset(&b, -8 ,1 ));
    return 0;
}


