#include <stdio.h>
#include "push.h"


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
            printf("count_a = %d\n",count);
            if ((((*a)->value >> shift) % 2) == 0)
                ft_pb(a, b);
            else
                ft_ra(a);
            count--;
        }
        count = check_count(*b);
        while (count > 0)
        {
            printf("count_b = %d\n",count);
            ft_pa(a, b);
            count--;
        }
        shift++;
    }

}

// void    ft_sort_three()
// {

// }

// void    ft_sort_five()
// {

// }