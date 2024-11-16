#include "libft.h"

void ft_lstadd_front(t_list **ch, t_list *new)
{
	ch -> next = new;
}
