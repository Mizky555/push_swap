/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <tsirirak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 00:33:44 by tsirirak          #+#    #+#             */
/*   Updated: 2023/01/29 01:52:50 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

// int	main(int gc, char **gv)
// {
// 	char **str;
// 	int i = 0;

// 	if (gc == 2)
// 	{
// 		str = ft_split(gv[1], ' ');
// 		while (str[i])
// 		{
// 			printf("[%d] : %c\n", i, str[i][0]);
// 			i++;
// 		}
// 	}
// }

// int	main(int gc, char **gv)
// {
// 	char **str;
// 	int	i_gv;
// 	int	i;
// 	int	j;

// 	i_gv = 0;
// 	if (gc < 2)
// 		exit(1);
// 		printf("d");
// 	while (gv[i_gv])
// 	{
// 		i = 0;
// 		str = ft_split(gv[i], ' ');
// 		printf("gv[%d] = %s\n",i,gv[i]);
// 		while (ft_strlen(str[i]))
// 		{
// 			// j = 0;
// 			// while (ft_strlen(str[i][j]))
// 			// {
// 				if (ft_isdigit(str[i][j]) == 0)
// 					printf("ft_iddigit");
// 				// j++;
// 			// }
// 			i++;
// 		}
// 		i_gv++;
// 	}
// }

int	main(int gc, char	**gv) // ./a.out 3 "1 3 23" 5
{

	t_list *l;
	t_main	m; //
	int	k;
	int	i;
	int	j;

	i = 0;
	if (gc <= 2)
		printf("Error gc <= 2\n");
	create(gc, gv, &m);
	while (m.str[i])
	{
		j = 0;
		while (m.str[i][j])
		{
			k = 0;
			while (m.str[i][j][k])
			{
				printf("argv[%d] = %s\n", i, m.str[i]);
				k++;
			}
			j++;
		}
		i++;
	}
	c(&m);
	printf("%d\n",m.a->i);
	printf("%d\n",m.a->link->i);
	return (0);
}

void	create(int gc, char **gv, t_main *m)
{
	int	i;

	i = 0;
	m->str = (char ***)malloc(sizeof(char **) * (gc));
	if (!m->str)
		return ;
	gv++;
	while (i < gc - 1)
	{
		m->str[i] = ft_split(gv[i], ' ');
		i++;
	}
	m->str[i] = NULL;
}

t_list	*first_linkedlist(int i)//ตัวแรก
{
	t_list	*h;

	h = (t_list *)malloc(sizeof(t_list));
	h->i = i;
	h->link = NULL;
	return (h);
}

void	next_linkedlist(int i, t_main *h)//ตัวถัดๆไป int i คือค่าตัวเลขจาก atoi *h คือค่าของตัวแรก
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	p->link = NULL;
	p->i = i;
	while (h->a->link != NULL)
	{
		h->a = h->a->link;
	}
	h->a->link = p;
}

void	c(t_main *m)
{
	int	 i;
	int	j;

	i = 0;
	while (m->str[i])
	{
		j = 0;
		while (m->str[i][j])
		{
			if	(m->a == NULL)
				m->a = first_linkedlist(ft_atoi(m->str[i][j]));
			else
				next_linkedlist(ft_atoi(m->str[i][j]),m);
			j++;
		}
		i++;
	}
}
