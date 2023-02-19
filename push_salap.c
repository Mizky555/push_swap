# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"
#include "push.h"

void ft_sa(t_link **a)
{
    t_link *tmp;

    tmp = (*a);
    (*a) = (*a)->link;
    tmp->link = tmp->link->link;
    (*a)->link = tmp;
    print_list(*a);
}

void ft_sb(t_link **b)
{
    t_link *tmp;

    tmp = (*b);
    (*b) = (*b)->link;
    tmp->link = tmp->link->link;
    (*b)->link = tmp;
    print_list(*b);
}

void ft_ss(t_link **a, t_link **b)
{
    ft_sa(a);
    ft_sb(b);
}

void    ft_ra(t_link **a)
{
    t_link *tmp;
    t_link *last;

    tmp = (*a);
    (*a) = (*a)->link;
    last = ft_last_link(*a);
    last->link = tmp;
    tmp->link = NULL;
}

void    ft_rb(t_link **b)
{
    t_link *tmp;
    t_link *last;

    tmp = (*b);
    (*b) = (*b)->link;
    last = ft_last_link(*b);
    last->link = tmp;
    tmp->link = NULL;
}

void    ft_rr(t_link **a, t_link **b)
{
    ft_ra(a);
    ft_rb(b);
}

void    ft_rra(t_link **a)
{
    t_link *tmp;
    t_link *last;
    t_link *before_last;

    last = ft_last_link(*a);
    before_last = ft_before_last_link(*a);
    tmp = (*a);
    (*a) = last;
    last->link = tmp;
    before_last->link = NULL;
}

void    ft_rrb(t_link **b)
{
    t_link *tmp;
    t_link *last;
    t_link *before_last;

    last = ft_last_link(*b);
    before_last = ft_before_last_link(*b);
    tmp = (*b);
    (*b) = last;
    last->link = tmp;
    before_last->link = NULL;
}

void    ft_rrr(t_link **a, t_link **b)
{
    ft_rra(a);
    ft_rrb(b);
}

void    ft_pb(t_link **a,t_link **b
)
{
    t_link *tmp;

    tmp = (*a);
    (*a) = (*a)->link;
    (*b) = tmp;
    tmp->link = NULL;
}

t_link  *ft_before_last_link(t_link *a)
{
    while (a && a->link->link)
    {
        a = a->link;
    }
    return (a);
}

t_link    *ft_last_link(t_link *a)
{
    while (a && a->link)
    {
        a = a->link;
    }
    return (a);
}