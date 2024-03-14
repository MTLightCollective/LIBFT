/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:21:02 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:48:57 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*destination;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
