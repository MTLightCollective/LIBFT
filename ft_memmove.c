/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:05:01 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:13:23 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	i = 0;
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	if (destination < source)
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else if (destination > source)
	{
		while (len > 0)
		{
			len--;
			destination[len] = source[len];
		}
	}
	return (dst);
}
