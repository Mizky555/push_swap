/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <tsirirak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:46:06 by tsirirak          #+#    #+#             */
/*   Updated: 2023/01/29 23:29:44 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push.h"


void add_numtolinka(int num)
{
    t_link *new_num;
    t_link *tmp;
    t_main m;

    new_num = (t_link *)malloc(sizeof(t_link));
    new_num->value = num;
    new->link = NULL;
    while (m->link != NULL)
    {
        
    }
}

t_main    *add_numtolinka_main(t_main *m)
{
    t_link  *link_a;
    int i;
    int j;

    i = 0;
    list_a = NULL;
    while (m->num_str[i])
    {
        j = 0;
        while (m->num_str[i][j])
        {
            if (m->num_str[i][j] == NULL)
                m->num_str[i][j] = create_link(m);
            else
                add_link_a_2(ft_atoi(m->num_str[i][j]));
            i++;
        }
        j++;
    }
    return (0);
    
    // while (m->num_str[i])
    // {
    //     j = 0;
    //     printf("");
    //     while (m->num_str[i][j])
    //     {
    //         l = (t_link *)malloc(sizeof(t_link));
    //         m->link_a->num = ft_atoi(m->num_str[i][j]);
    //         printf("m->num_str = %d\n",m->link_a->num);
    //         l = l->link;
    //         j++;
    //     }
    //     i++;
    // }
    // return (m);
}



void    push_split(int argc, char **argv, t_main *m)//ยัดเข้า l->num_str
{
    int i;
    int j;

    i = 0;
    m->num_str = (char ***)malloc(sizeof(char **) * (argc));//จองพื้นที่
    while (i < argc)//argc = 5
    {
        m->num_str[i] = ft_split(argv[i], ' ');
        i++;
    }
    m->num_str[i] = NULL;
    add_link_a(m);
}



int main(int argc, char **argv)
{
    t_main  m;
    
    if (argc <= 2)//เช็ค
    {
        printf("argc <= 2\n");
        exit(1);
    }

    push_split(argc, argv, &m);//ยัดเข้า l->num_str
}
