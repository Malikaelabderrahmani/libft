/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:10:15 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/10 11:05:07 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*pt;

	pt = (unsigned char *)b;
	i = 0;
	while (len > 0)
	{
		pt[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}

