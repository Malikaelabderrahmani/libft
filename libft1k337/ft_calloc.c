/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:11:43 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 17:30:36 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;
	size_t			tmp;

	i = 0;
	tmp = count * size;
	if (count == 0 || size == 0)
		return (malloc(0));
	if ((tmp / size) != count)
		return (NULL);
	p = malloc(count * size);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < (size * count))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
