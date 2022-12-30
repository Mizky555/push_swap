/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 00:33:44 by tsirirak          #+#    #+#             */
/*   Updated: 2022/12/31 02:30:02 by tsirirak         ###   ########.fr       */
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

	char ***s;
	int	d1;
	int	d2;
	int	d3;

	s = (char ***)malloc(sizeof(char **) * (gc));
	if (s == 0)
		return (0);
	d3 = 0;
	gv++;
	while (d3 < gc - 1)
	{
		s[d3] = ft_split(gv[d3], ' ');
		d3++;
	}
	s[d3] = NULL;
	d3 = 0;
	d2 = 0;
	while (s[d3])
	{
		d2 = 0;
		while (s[d3][d2])
		{
			printf("[%d][%d] = %s\n",d3,d2,s[d3][d2]);
			d2++;
		}
		d3++;
	}


	printf("ddd");
}
