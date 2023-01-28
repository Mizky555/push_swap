/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <tsirirak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:46:06 by tsirirak          #+#    #+#             */
/*   Updated: 2023/01/29 01:44:21 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push.h"
void    add_link_a(t_main *m)
{
    t_link *l;
    
    int i;
    int j;

    i = 0;
    j = 0;
    if (m->num_str[i] == NULL)
        
    while (m->num_str[i])
    {
        j = 0;
        while (m->num_str[i][j])
        {
            printf("m->num_str = %s\n",m->num_str[i][j]);
              
            j++;
        }
        i++;
    }
}

void    push(int argc, char **argv, t_main *m)//ยัดเข้า l->num_str
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

    push(argc, argv, &m);//ยัดเข้า l->num_str
}