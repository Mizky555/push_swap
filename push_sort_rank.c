#include <stdio.h>
#include "push.h"

int ft_rank_morethan_min(t_link *num, int min)//หาตัวที่น้อยลำดับถัดไป
{
	int		morethan;

	morethan = ft_rank_morethan_min(num, 10);
	while (num)
	{
		if (num->value > min && num->value < morethan)
		{
			morethan = num->value;
		}
		num = num->link;
	}
	return (morethan);
    // int		more;
	// t_link	*tmp;

	// more = 0;
	// tmp = num;
	// while (tmp)
	// {
	// 	if (tmp->value > min)
	// 		more = tmp->value;
	// 	tmp = tmp->link;
	// }
	// while (num)
	// {
	// 	if (num->value > min && num->value < more)
	// 		more = num->value;
	// 	num = num->link;
	// }
	// return (more);
}

int ft_rank_minmax(t_link *num, int mode)
{
    int minmax;
    t_link  *tmp;

    tmp = num;
    minmax = tmp->value;
    while (tmp)
    {
        if (tmp->value < minmax && mode == 0)
            minmax = tmp->value;
        else if (tmp->value > minmax && mode == 10)
            minmax = tmp->value;
        tmp = tmp->link;
    }
    return (minmax);
}

void    ft_sort_rank(t_link *num)
{
    int min;
    int rank;
    t_link  *tmp;


    rank = 1;
    tmp = num;
    min = ft_rank_minmax(tmp, 0);
    while (tmp)
    {
        if (tmp->value == min)
        {
            tmp->rank = rank++;
            printf("----rank = %d----\n",tmp->rank);
            printf("tmp->value = %d\n",tmp->value);
            tmp = num;
            min = ft_rank_morethan_min(tmp, min);
        }
        else
            tmp = tmp->link;
    }
}