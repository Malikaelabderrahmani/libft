/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:15:35 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 19:21:34 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pt;
	size_t			i;

	i = 0;
	pt = (unsigned char *)s;
	while (n > 0)
	{
		pt[i] = 0;
		i++;
		n--;
	}
}

// int main()
// {
// 	int ch1[] = {1337, 2, 3, 4};
// 	ft_bzero(ch1, 2);
// 	int ch2[] = {1337, 2, 3, 4};
// 	bzero(ch2, 2);
// 	printf("%d", ch1[0]);	
// 	printf("%d", ch1[1]);
// 	printf("%d", ch1[2]);
// 	printf("%d", ch1[3]);

// printf("---------------------");
// 	printf("%d", ch2[0]);
// 	printf("%d", ch2[1]);
// 	printf("%d", ch2[2]);
// 	printf("%d", ch2[3]);
	
// }
