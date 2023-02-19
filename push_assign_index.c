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
        if (tmp->value < max)
            max = tmp->value;
        tmp = tmp->link;
    }
    return (max);
}

int find_next_min(t_link *num, int min)
{
	int		nextmin;

	nextmin = find_max(num);
	while (num)
	{
		if (num->value > min && num->value < nextmin)
		{
			nextmin = num->value;
		}
		num = num->link;
	}
	return (nextmin);
}

void    ft_sort_rank(t_link *num)
{
    t_link  *tmp;
    int index;
    int min;

    index = 0;
    tmp = num;
    min = find_min(tmp);
    while (tmp)
    {
        ft_assign(tmp, min, index);
        min = find_next_min(tmp, min);
        index++;
        tmp = tmp->link;
    }
}



void	*ft_assign(t_link *num,int value, int index)
{
    t_link  *tmp;

    while (tmp)    
    {
        if (tmp->value == value)
        {
            tmp = num;
            tmp->rank = index;
        }
        else
            tmp = tmp->link;
    }
}


// ft_assingn(a, 4, 3)
//  4 1 3 2
//  3 0 0 0

// ft_assingn(a, 1, 1)
//  4 1 3 2
//  0 1 0 0