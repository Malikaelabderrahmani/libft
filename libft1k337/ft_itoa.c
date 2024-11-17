/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:24:37 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 19:21:44 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_helper1(int n)
{
	int	len;

	len = 1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_helper2(char *ch, int n, int len)
{
	if (n == 0)
	{
		ch[len - 1] = n + 48;
		return ;
	}
	if (n < 0)
		n = n * (-1);
	while (n > 0)
	{
		ch[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	if (len == 1)
		ch[0] = '-';
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ch;

	len = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n < 0)
	{
		n = n * (-1);
		len++;
	}
	len = len + ft_helper1(n);
	ch = malloc(len + 1);
	if (ch == NULL)
		return (NULL);
	ft_helper2(ch, n, len);
	ch[len] = '\0';
	return (ch);
}

// int main ()
// {
// 	printf ("%s", ft_itoa(123488007));
// }
