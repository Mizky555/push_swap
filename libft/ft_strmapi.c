/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:28:33 by tsirirak          #+#    #+#             */
/*   Updated: 2022/04/22 23:53:01 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sss;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	sss = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!sss)
		return (NULL);
	while (s[i])
	{
		sss[i] = f(i, s[i]);
		i++;
	}
	sss[i] = '\0';
	return (sss);
}
