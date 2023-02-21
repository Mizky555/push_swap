#include <stdio.h>
#include "push_swap.h"


void    ft_sort(t_link **a, t_link **b)
{
    int count;
    int shift;

    shift = 0;
    while (check_sort(*a) == 0)
    {
        count = check_count(*a);
        while (count > 0)
        {
            if ((((*a)->value >> shift) % 2) == 0)
            {
                ft_pb(a, b);
            }
            else
            {
                ft_ra(a);
            }
            count--;
        }
        count = check_count(*b);
        while (count > 0)
        {
            ft_pa(a, b);
            count--;
        }
        shift++;
    }

}

void    ft_sort_two(t_link **a)
{
    if ((*a)->value > (*a)->link->value)
        ft_sa(a);
}


int find_first_pos(t_link *lst)
{
    return (lst->value);
}
int find_sec_pos(t_link *lst)
{
    return (lst->link->value);
}
int find_last_pos(t_link *lst)
{
    while (lst)
    {
        lst = lst->link;
        if (lst->link)
            return (lst->link->value);
    }
    return (0);
}

void    ft_sort_three(t_link **a, t_link **b)
{
    if (find_first_pos(*a) < find_sec_pos(*a))
    {
        if (find_first_pos(*a) < find_last_pos(*a))
        {
            ft_sa(a);
            ft_ra(a);
        }
        else
        {
            ft_rra(a);
        }
    }
    else if(find_first_pos(*a) > find_sec_pos(*a))
    {
        if (find_first_pos(*a) > find_last_pos(*a))
        {
            if (find_sec_pos(*a) > find_last_pos(*a))
            {
                ft_sa(a);
                ft_rra(a);
            }
            else
                ft_ra(a);
        }
        else
            ft_sa(a);
    }
}
void    ft_sort_five(t_link **a,t_link **b)
{
    while (check_count(*a) != 3)
    {
        // printf("value = %d rank = %d\n\n",tmp->value,tmp->rank);
        if ((*a)->rank == 1 || (*a)->rank == 2)
            ft_pb(a, b);
        else
            ft_ra(a);
    }
    if ((*b)->value < (*b)->link->value)
        ft_sb(b);
    ft_sort_three(a, b);
    ft_pa(a, b);
    ft_pa(a, b);
}

