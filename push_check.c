#include <stdio.h>
#include "push_swap.h"

int	check_dididigit(t_link *num)//6
{
    t_link *num_run;
	while (num != NULL)
	{
        num_run = num->link;
		while (num_run != NULL)
		{
            if (num_run->value == num->value)
            {
                ft_putendl_fd("error", 2);
                return (1);

            }
			num->count++;
            num_run = num_run->link;
		}
        num = num->link;
	}
	return(0);
}

int	check_digit(char *str)//3
{
	int	i;
	int	a;
	int	num;

	i = 0;
	a = 1;
	num = 0;
	if (str[i] == '-')
	{
		a *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (1);
}

int	check_count(t_link *num)
{
	t_link *tmp;
	int count;

	tmp = num;
	count = 0;
	while (tmp)
	{
		count++;
		tmp = tmp->link;
	}
	return (count);
}

int	check_sort(t_link *num)
{
	t_link	*tmp;
	int	i;

	i = 1;
	tmp = num;
	while (tmp)
	{
		if (tmp->rank != i)//ยังไม่เรียง
			return (0);
		tmp = tmp->link;
		i++;
	}
	return (1);//เรียงแล้ว
}