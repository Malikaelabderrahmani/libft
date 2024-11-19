#include "libft.h"

void *fd1(void *e)
{
    int a = ft_atoi(e);
    return (ft_itoa(-a));

}
void *fd2(void *e)
{
    int a = ft_atoi(e);
    return (ft_itoa(-a));

}

t_list *ft(int start, int count, void *(*f)(void *))
{
    t_list *tmp;
    t_list *lst;
    lst = NULL;
    while (count > 0)
    {
        tmp = ft_lstnew(f(ft_itoa(start)));
        ft_lstadd_back(&lst, tmp);
        start++;
        count--;
    }
    return (lst);
}
int main ()
{
    t_list *lst;
    t_list *(*l)(int , int, void *(*f)(void *));
    l = ft;
    void *(*f)(void *);
    f = fd1;
    lst = l(5, 10, f);
    int t;
    while (lst != NULL)
    {
        t = ft_atoi(lst->content);
        printf("%d\n", t);
        lst = lst->next;
    }
}