/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:09:22 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:11:59 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	c2;

	i = 0;
	ptr = (unsigned char *)s;
	c2 = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == c2)
			return ((unsigned char *)&ptr[i]);
		i++;
	}
	return (NULL);
}
