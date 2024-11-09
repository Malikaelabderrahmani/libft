/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:16:23 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/09 12:38:43 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	test(unsigned int	i, char *c)
{
	*c = *c + i;
}
void	ft_striteri(char *s, void	(*f)(unsigned	int, char *))
{
	unsigned	int	i;
	
	if (s == NULL)
		return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}	
}

int	main()
{
	char *ch = NULL;
	void (*pt)(unsigned int, char *);
	pt = test;
	ft_striteri(ch, pt);
	printf("%s", ch);	
}