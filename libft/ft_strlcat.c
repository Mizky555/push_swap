/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 03:01:45 by tsirirak          #+#    #+#             */
/*   Updated: 2022/12/31 02:07:39 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst,   char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(dst);
	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (i < dstsize - 1 && *src)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (ft_strlen(src) + i);
}
