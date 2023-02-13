#include <stdio.h>
#include "push_swap.h"

t_list	*create_list(int data)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->num = data;
	new->next = NULL;
	return (new);
}

void	list_last(t_list **list, int num)
{
	t_list *new;
	t_list *tmp;

	tmp = (*list);
	new = create_list(num);
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}


int main(void)
{
	t_list	*list_a;
	int	i;

	i = 0;
	list_a = NULL;
	while(i < 10)
	{
		if (list_a == NULL)
			list_a = create_list(i);
		else
			list_last(&list_a,i);
		i++;
	}

	while (list_a != NULL)
	{
		printf("%d\n",list_a->num);
		list_a = list_a->next;
	}

	return(0);



	// NODE *n;
	// int i;
	// int a;
	// int b;

	// i = 2;
	// a = 3;
	// b = 4;
	// n = create_link(i);
	// n = next_link(n, a);
	// n = next_link2(n, b);
	// while (n != NULL)
	// {
	// 	printf("%d\n",n->value);
	// 	n = n->link;
	// }
	


	// NODE a;
	// NODE b;
	// NODE c;
	// NODE *temp;
	
	// a.value = 1;
	// a.link = NULL;
	// b.value = 2;
	// b.link = NULL;
	// c.value = 3;
	// c.link = NULL;

	// temp = &a;
	// a.link = &b;
	// b.link = &c;
	

	// while (temp->link != NULL)
	// {
	// 	printf("%d\n",temp->value);
	// 	temp = temp->link;
	// }
    // printf("a.value = %d\n", a.value);
	// printf("a.link->value = %d\n", a.link->value);
    // printf("b.value = %d\n", b.value);
    // printf("b.link->value = %d\n", b.link->value);
    // printf("b.link->link->value = %d\n", b.link->link->value);
    // printf("c.value = %d\n", c.value);
    // printf("c.link->value = %d\n", c.link->value);
    // printf("c.link->link->value = %d\n", c.link->link->value);
}

