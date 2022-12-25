/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:13:04 by tsirirak          #+#    #+#             */
/*   Updated: 2022/12/25 23:50:00 by tsirirak         ###   ########.fr       */
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

int	main(int gc, char **gv)
{
	char **str;
	int	i_gv;
	int	i;
	int	j;

	i_gv = 0;
	if (gc < 2)
		exit(1);
		printf("d");
	while (gv[i_gv])
	{
		i = 0;
		str = ft_split(gv[i], ' ');
		printf("gv[%d] = %s\n",i,gv[i]);
		while (ft_strlen(str[i]))
		{
			// j = 0;
			// while (ft_strlen(str[i][j]))
			// {
				if (ft_isdigit(str[i][j]) == 0)
					printf("ft_iddigit");
				// j++;
			// }
			i++;
		}
		i_gv++;
	}
}

