#include <stdio.h>
#include "push.h"

t_link *ft_new_box(int num)
{
	t_link *new;

	new = (t_link *)malloc(sizeof(t_link));
	new->value = num;
	new->link = NULL;
	return (new);
}

void	ft_add_tail(t_link **mom, t_link *son) //มาจาก libftbonus
{
	t_link	*tmp;


	if (mom != NULL && son != NULL)
	{
		if (*mom == NULL)
			*mom = son;
		else if (*mom != NULL)
		{
			tmp = *mom;
			while (tmp && tmp->link != NULL)//ต่อตูด
			{
				tmp = tmp->link;
			}
			tmp->link = son;
		}
	}	
}