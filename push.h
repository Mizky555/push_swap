/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <tsirirak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:46:55 by tsirirak          #+#    #+#             */
/*   Updated: 2023/02/18 18:00:30 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"

typedef struct s_link
{
	int	value;
	int	rank;
	int	count;//opallllllll
	struct	s_link *link;
} t_link;


t_link *ft_new_box(int num);
void	ft_add_tail(t_link **mom, t_link *son);
void    ft_sort_rank(t_link *num);
int ft_rank_min(t_link *num);
int	check_digit(char *str);
int	check_dididigit(t_link *a);
// typedef struct s_link
// {
// 	int	value;
// 	struct s_link *link;
// } t_link;

// typedef struct s_main
// {
// 	char	***num_str;
// 	t_link *link_a;
// 	t_link *link_b;
// } t_main;

#endif