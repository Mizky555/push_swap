#include <stdio.h>
#include "push.h"

int	check_dididigit(t_link *num)
{
	// while (a != NULL)
	// {
	// 	printf("%d\n",a->value);
	// 	a = a->link;
	// }
    t_link *num_run;
	while (num != NULL)
	{
        num_run = num->link;
		while (num_run != NULL)
		{
            if (num_run->value == num->value)
            {
                printf("----/n");
                return (1);

            }
            num_run = num_run->link;
		}
        num = num->link;
	}
	return(0);
}

int	check_digit(char *str)
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