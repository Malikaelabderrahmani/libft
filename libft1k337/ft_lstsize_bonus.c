/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:52:04 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 11:45:31 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*void	delete(void *e)
{
	free(e);
}

int main ()
{
	t_list	*liste;
	t_list	*tmp;
	void (*p)(void *);
	int	i;

	i = 0;
	p = delete;
	liste = NULL;
	while (i < 5)
	{
		tmp = malloc(sizeof(t_list));
		if (tmp == NULL)
			return (-1);
		tmp -> content = malloc(sizeof(int));
		if (tmp->content == NULL)
			return (-1);
		*(int *)tmp->content = i;
		tmp -> next = NULL;
		ft_lstadd_front(&liste, tmp);
		i++;
	}
	printf("%d", ft_lstsize(liste));
	ft_lstclear(&liste, p);
}*/
