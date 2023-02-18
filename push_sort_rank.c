#include <stdio.h>
#include "push.h"

int ft_rank_morethan_min(t_link *num, int min)
{
    int 
}

int ft_rank_min(t_link *num)
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
    int opal;
    t_link  *tmp;

    opal = 0;
    min = ft_rank_min(num);
    printf("min = %d\n",min);
    tmp = num;
    while (tmp)
    {
        if (tmp->value == min)//กำหนดตัวที่น้อยที่สุดเป็น rank 1
        {
            tmp->rank = 1;
            tmp = num;
            opal = 6;
        }
        else if(opal = 6)
        {
            while (tmp)
        }
        tmp = tmp->link;
    }
}