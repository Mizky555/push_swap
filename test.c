#include <stdio.h>
#include <stdlib.h>
# include "./libft/libft.h"


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
		if (str[i] <= '0' || str[i] >= '9')
			return (0);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * a);
}

int main()
{
    printf("test split = %d\n",check_digit("-3"));
}



// typedef struct s_link
// {
//     int num;
//     struct s_link *link;
// } t_link;

// t_link *ft_new(int i)
// {
//     t_link *new;
//     new = (t_link *)malloc(sizeof(t_link));
//     new->num = i;
//     new->link = NULL;
//     return (new);
// }

// void ft_list_back(t_link **head, t_link **lst)
// {
//    t_link *tmp;

//    if ((*head) == NULL)
//    {
//         (*head) = (*lst);
//         return ;
//    }
//    tmp = (*head);
//    while (tmp->link!= NULL)
//         tmp = tmp->link;
//     tmp->link = (*lst);
// }

// int main()
// {
//     t_link *lst;
//     t_link *head;
//     int num;

//     num = 0;
//     head = NULL;
//     while(num <= 100)
//     {
//         lst = ft_new(num);
//         num = num + 10;
//         ft_list_back(&head,&lst);
//     }
//     t_link *tmp;
//     tmp = head;
//    while (tmp != NULL)
//    {
//         printf("%d\n", tmp->num);
//         tmp = tmp->link;
//    }

//     return (0);
// }

// int main()
// {
//     t_link *l;
//     t_link *ll;

//     l = (t_link *)malloc(sizeof(t_link));
//     l->link = NULL;
//     l->num = 10;

//     ll = (t_link *)malloc(sizeof(t_link));
//     ll->link = NULL;
//     ll->num = 20;

//     l->link = ll;

//     printf("%d\n",l->num);
//     printf("%d\n",l->link->num);
// }