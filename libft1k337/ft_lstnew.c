#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
	t_list *tmp;
	tmp = malloc(sizeof(t_list));
	tmp -> content = content;
	tmp -> next = NULL;
	return (tmp);
}

int main()
{
	t_list *liste;
	liste = ft_lstnew("hello");
	printf("%p", liste -> content);
}
