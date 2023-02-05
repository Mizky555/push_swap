/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <tsirirak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:46:55 by tsirirak          #+#    #+#             */
/*   Updated: 2023/02/05 16:47:55 by tsirirak         ###   ########.fr       */
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
	struct	s_link *link;
} t_link;

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