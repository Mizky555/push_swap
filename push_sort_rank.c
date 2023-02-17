#include <stdio.h>
#include "push.h"


int ft_check_rank_min(t_link *num)
{
    int min;
    t_link  *tmp;

    tmp = num;
    min = tmp->value;
    while (tmp)
    {
        if (tmp->value < min)
            min = tmp->value;
        tmp = tmp->link;
    }
    return (min);
}

void    ft_sort_rank(t_link *num)
{
    int min;
    t_link  *tmp;

    min = ft_check_rank_min(num);
    printf("min = %d\n",min);
    // tmp = num;
    // while (tmp)
    // {
    //     if (tmp->value == min)
    //         tmp->rank = min;
    //     else
    //         ft_check_rank_other(num);
    //     tmp = tmp->link;
    // }
}