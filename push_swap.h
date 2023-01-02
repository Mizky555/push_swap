/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:41:58 by tsirirak          #+#    #+#             */
/*   Updated: 2023/01/03 02:59:53 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"

typedef struct s_list
{
	int	i;
	struct s_list *link;
} t_list;

typedef struct s_main
{
	char ***str;
	t_list *a;
	t_list *b;
} t_main;

void	create(int gc, char **gv, t_main *m);
t_list	*first_linkedlist(int i);
void	c(t_main *m);
void	next_linkedlist(int i, t_main *h);
// void	check_type(t_ps *s,char **gv);


#endif
