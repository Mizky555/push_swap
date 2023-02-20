/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <tsirirak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:46:55 by tsirirak          #+#    #+#             */
/*   Updated: 2023/02/21 03:39:22 by tsirirak         ###   ########.fr       */
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
int ft_rank_minmax(t_link *num, int mode);
int ft_rank_morethan_min(t_link *num, int min);
int	check_digit(char *str);
int	check_dididigit(t_link *a);
int find_min(t_link *num);
int find_max(t_link *num);
int	find_next_min(t_link *next, int min);
void	ft_assign(t_link *num,int value, int index);
void	print_list(t_link *lst);
void    ft_assign_rank(t_link *num);
int	check_sort(t_link *num);
int	check_count(t_link *num);

t_link    *ft_last_link(t_link *a);
t_link  *ft_before_last_link(t_link *a);
void ft_sa(t_link **a);
void    ft_ra(t_link **a);
void    ft_rra(t_link **a);
void    ft_pb(t_link **a,t_link **b);
void    ft_pa(t_link **a,t_link **b);
void ft_sb(t_link **b);
void    ft_rb(t_link **b);
void    ft_rrb(t_link **b);
void ft_sb(t_link **b);
void ft_ss(t_link **a, t_link **b);
void    ft_rr(t_link **a, t_link **b);
void    ft_rrr(t_link **a, t_link **b);

void    ft_sort(t_link **a, t_link **b);
int	check_sort(t_link *num);
void    ft_sort_two(t_link **a);

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