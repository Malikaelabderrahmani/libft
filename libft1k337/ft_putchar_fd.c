/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:47:17 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/09 12:58:38 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h> 

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main()
{
	int	fd;

	fd = open("test.txt", O_RDWR);
	ft_putchar_fd('M', fd);
	
	return (0);
}