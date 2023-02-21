/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_salap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <tsirirak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 04:11:23 by tsirirak          #+#    #+#             */
/*   Updated: 2023/02/22 04:11:23 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_link **a)
{
    t_link *tmp;

    tmp = (*a);
    (*a) = (*a)->link;
    tmp->link = tmp->link->link;
    (*a)->link = tmp;
    ft_putendl_fd("sa", 1);
}

void ft_sb(t_link **b)
{
    t_link *tmp;

    tmp = (*b);
    (*b) = (*b)->link;
    tmp->link = tmp->link->link;
    (*b)->link = tmp;
    ft_putendl_fd("sb", 1);
}

void ft_ss(t_link **a, t_link **b)
{
    ft_sa(a);
    ft_sb(b);
    ft_putendl_fd("ss", 1);
}

void    ft_ra(t_link **a)
{
    t_link *tmp;
    t_link *last;

    if ((*a)->link == NULL)
        return;
    tmp = (*a);
    (*a) = (*a)->link;
    last = ft_last_link(*a);
    last->link = tmp;
    tmp->link = NULL;
    ft_putendl_fd("ra", 1);
}



void    ft_rb(t_link **b)
{
    t_link *tmp;
    t_link *last;

    if ((*b)->link == NULL)
        return;
    tmp = (*b);
    (*b) = (*b)->link;
    last = ft_last_link(*b);
    last->link = tmp;
    tmp->link = NULL;
    ft_putendl_fd("rb", 1);
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
    ft_putendl_fd("rra", 1);
}
void    ft_rr(t_link **a, t_link **b)
{
    ft_ra(a);
    ft_rb(b);
    ft_putendl_fd("rr", 1);
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
    ft_putendl_fd("rrb", 1);
}

void    ft_rrr(t_link **a, t_link **b)
{
    ft_rra(a);
    ft_rrb(b);
    ft_putendl_fd("rrr", 1);
}

void    ft_pb(t_link **a,t_link **b)
{
	t_link	*tmp;

    if (*b)
    {
        tmp = *a;
        *a = (*a)->link;
        tmp->link = *b;
        *b = tmp;
    }
    else
    {
        *b = *a;
        *a = (*a)->link;
        (*b)->link = NULL;
    }
    ft_putendl_fd("pb", 1);
}

void    ft_pa(t_link **a,t_link **b)
{
	t_link	*tmp;

    if (*a)
    {
        tmp = *b;
        *b = (*b)->link;
        tmp->link = *a;
        *a = tmp;
    }
    else
    {
        *a = *b;
        *b = (*b)->link;
        (*a)->link = NULL;
    }
    ft_putendl_fd("pa", 1);
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

