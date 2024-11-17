/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:02:34 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 11:59:34 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*supp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		supp = *lst;
		*lst = (*lst)->next;
		del(supp->content);
		free(supp);
	}
	*lst = NULL;
}
