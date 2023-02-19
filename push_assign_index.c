#include <stdio.h>
#include "push.h"

int find_min(t_link *num)
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

int find_max(t_link *num)
{
    int max;
    t_link  *tmp;

    tmp = num;
    max = tmp->value;
    while (tmp)
    {
        if (tmp->value > max)
            max = tmp->value;
        tmp = tmp->link;
    }
    return (max);
}

int find_next_min(t_link *num, int min)
{
	int		nextmin;
    t_link  *tmp;

    tmp = num;
	nextmin = find_max(num);
	while (tmp)
	{
		if (tmp->value > min && tmp->value < nextmin)
		{
			nextmin = tmp->value;
		}
		tmp = tmp->link;
	}
	return (nextmin);
}


void    ft_assign_rank(t_link *num)
{
    t_link *tmp;
    int index;
    int min;

    tmp = num;
    index = 1;
    min = find_min(tmp);
    ft_assign(tmp, min, index);
    index = index + 1;
    while (index <= tmp->count)
    {
        min = find_next_min(tmp, min);
        ft_assign(tmp, min, index);
        index = index + 1;
    }
}



void	ft_assign(t_link *num,int value, int index)//ใส่ค่า index เข้าไปใน tmp->rank
{
    t_link  *tmp;

    tmp = num;
    while (tmp)    
    {
        if (tmp->value == value)
        {
            tmp->rank = index;
            return ;
        }
        tmp = tmp->link;
    }
}


// ft_assingn(a, 4, 3)
//  4 1 3 2
//  3 0 0 0

// ft_assingn(a, 1, 1)
//  4 1 3 2
//  0 1 0 0