/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:00:05 by mel-abde          #+#    #+#             */
/*   Updated: 2024/10/27 10:17:48 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	nb;
	int	i;
	int	flag;
	
	nb = 0;
	i = 0;
	flag = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			flag = flag * (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (flag*nb);
}

int main ()
{
	printf ("%d\n", ft_atoi("1231234567890"));
	printf ("%d", atoi("1231234567890"));
	return (0);
}
