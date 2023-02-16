/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:46:06 by tsirirak          #+#    #+#             */
/*   Updated: 2023/02/17 01:22:24 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push.h"



t_link *sprit(int argc, char **argv)
{
	t_link	*first;
	t_link	*tail;
	int i;
	int j;
	char **str;

	i = 0;
	first = NULL;
	while (i < argc && argv[i + 1] != NULL)
	{
		j = 0;
		str = ft_split(argv[i + 1], ' ');
		while (str[j])
		{
			if (check_digit(str[j]) == 0)
			{
				printf("check_digit\n");
				exit (1);
			}
			tail = ft_new_box(ft_atoi(str[j]));
			ft_add_tail(&first, tail);
			j++;
		}
		j = 0;
		while (str[j])
		{
			free(str[j++]);
		}
		free(str);
		i++;
	}
	return (first);
}



int main(int argc, char **argv)
{
	t_link	*a;
	t_link *tmp;
	
	a->count = 0;//opallllll
	if (argc < 2)
	{
		printf("argc < 2");
		return (0);
	}
	a = sprit(argc, argv);
	if (check_dididigit(a) == 1)
	{
		printf("check_dididigit\n");
		exit(1);
	}
	// while (a != NULL)
	// {
	// 	printf("%d\n",a->value);
	// 	a = a->link;
	// }
	while (a) // a!=NULL
	{
		tmp = a;
		a = a->link;
		free(tmp);
	}
}











// void add_numtolinka(int num)
// {
//     t_link *new_num;
//     t_link *tmp;
//     t_main m;

//     new_num = (t_link *)malloc(sizeof(t_link));
//     new_num->value = num;
//     new->link = NULL;
//     while (m->link != NULL)
//     {
		
//     }
// }

// t_main    *add_numtolinka_main(t_main *m)
// {
//     t_link  *link_a;
//     int i;
//     int j;

//     i = 0;
//     list_a = NULL;
//     while (m->num_str[i])
//     {
//         j = 0;
//         while (m->num_str[i][j])
//         {
//             if (m->num_str[i][j] == NULL)
//                 m->num_str[i][j] = create_link(m);
//             else
//                 add_link_a_2(ft_atoi(m->num_str[i][j]));
//             i++;
//         }
//         j++;
//     }
//     return (0);
	
//     // while (m->num_str[i])
//     // {
//     //     j = 0;
//     //     printf("");
//     //     while (m->num_str[i][j])
//     //     {
//     //         l = (t_link *)malloc(sizeof(t_link));
//     //         m->link_a->num = ft_atoi(m->num_str[i][j]);
//     //         printf("m->num_str = %d\n",m->link_a->num);
//     //         l = l->link;
//     //         j++;
//     //     }
//     //     i++;
//     // }
//     // return (m);
// }



// void    push_split(int argc, char **argv, t_main *m)//ยัดเข้า l->num_str
// {
//     int i;
//     int j;

//     i = 0;
//     m->num_str = (char ***)malloc(sizeof(char **) * (argc));//จองพื้นที่
//     while (i < argc)//argc = 5
//     {
//         m->num_str[i] = ft_split(argv[i], ' ');
//         i++;
//     }
//     m->num_str[i] = NULL;
//     add_link_a(m);
// }



// int main(int argc, char **argv)
// {
//     t_main  m;
	
//     if (argc <= 2)//เช็ค
//     {
//         printf("argc <= 2\n");
//         exit(1);
//     }

//     push_split(argc, argv, &m);//ยัดเข้า l->num_str
// }
