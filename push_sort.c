#include <stdio.h>
#include "push.h"


void    ft_sort(t_link **a, t_link **b)
{
    int count;
    int shift;

    shift = 0;
    while (check_sort(*a) == 0)
    {
        
            printf("--a--\n");
            print_list(*a);
            count = check_count(*a);
            printf("--a--count_a = %d\n\n",count);
            printf("--b--\n");
            print_list(*b);
            count = check_count(*b);
            printf("--b--count_b = %d\n\n",count);
            printf();
        count = check_count(*a);
        while (count > 0)
        {
            printf("===============\n");
            if ((((*a)->value >> shift) % 2) == 0)
                ft_pb(a, b);
            else
                ft_ra(a);
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

// void    ft_sort_three()
// {

// }

// void    ft_sort_five()
// {

// }