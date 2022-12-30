/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:32:33 by tsirirak          #+#    #+#             */
/*   Updated: 2022/12/31 02:07:39 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(  void *s, int c, size_t n)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		n--;
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (0);
}
