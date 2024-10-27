/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:15:35 by mel-abde          #+#    #+#             */
/*   Updated: 2024/10/26 19:08:18 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pt;
	size_t	i;

	i = 0;
	pt = (unsigned char *) s;
	while (n > 0)
	{
		pt[i] = 0;
		i++;
		n--;
	}
}
int main()
{
	char s[6] = "hello";
	printf("%s\n", s);
	ft_bzero(s, 0);
	printf("%s", s);
	return 0;
}