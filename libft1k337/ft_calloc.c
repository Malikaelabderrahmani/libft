/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:11:43 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 18:12:03 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;
	size_t			tmp;


	i = 0;
	if (count == 0 || size == 0)
		return (malloc(0));
	tmp = count * size;
	if ((tmp / size) != count)
		return (NULL);
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	while (i < (size * count))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

// int main ()
// {
// // 	char *ch;
// // 	ch = ft_calloc(2, 1);
// // 	printf("%s", ch);
// // 	return (0);
// int *t;
// t = ft_calloc(2, sizeof(int));
// printf("%d", t[0]);
// printf("%d", t[1]);
// }
