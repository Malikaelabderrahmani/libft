/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:00:05 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 19:23:53 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	nb;
	int				i;
	int				flag;

	nb = 0;
	i = 0;
	flag = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			flag = flag * (-1);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((nb > 922337203685477580 || ((nb == 922337203685477580)
			&& ((str[i] - '0') > 7))) && flag == 1)
			return (-1);
		if ((nb > 922337203685477580 || ((nb == 922337203685477580)
			&& ((str[i] - '0') > 8))) && flag == -1)
			return (0);
		nb = (nb * 10) + (str[i++] - '0');
	}
	return (flag * nb);
}
// int main ()
// {
// 	char *s = "922337203685477580";
// 	printf("%d\n", ft_atoi(s));
// 	printf("%d", atoi(s));
// 	return (0);
// }
