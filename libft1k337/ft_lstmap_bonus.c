/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:14:31 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 12:40:19 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;
	t_list	*par;
	void	*p;

	newlst = NULL;
	par = lst;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (par != NULL)
	{
		p = f(par->content);
		tmp = malloc(sizeof(t_list));
		if (tmp == NULL)
		{
			del(p);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		tmp->content = p;
		tmp->next = NULL;
		ft_lstadd_back(&newlst, tmp);
		par = par->next;
	}
	return (newlst);
}
