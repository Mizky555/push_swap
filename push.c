/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <tsirirak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:46:06 by tsirirak          #+#    #+#             */
/*   Updated: 2023/02/05 17:41:37 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push.h"

int	check_atoi(  char *str)
{
	int	i;
	int	a;
	int	num;

	i = 0;
	a = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		a *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * a);
}

t_link *ft_new_box(int num)
{
	t_link *new;
	
	new = (t_link *)mallo(sizeof(t_link));
	new->value = num;
	new->link = NULL;
	return (new);
}

int	check_digit(char *str)
{
	
}

t_link *sprit(int argc, char **argv)
{
	t_link	*a;
	t_link	*new;
	int i;
	int j;
	char **str;

	i = 0;
	a = NULL;
	while (argc > i)
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[i])
		{
			if (check_digit(str[i]) == 0)
			{
				pritnf("check_digit\n");
				return (0);
			}
			new = ft_new_box(ft_atoi(av[j]));
			ft_addto_stack();
			j++;
		}
		i++;
	}
}



int main(int argc, char **argv)
{
	t_link	*a;
	if (argc < 2)
	{
		printf("argc < 2");
		return (0);
	}
	a = sprit(argc, argv);
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
