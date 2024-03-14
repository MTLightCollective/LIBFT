/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 08:53:55 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:13:32 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	c2;

	i = 0;
	ptr = (unsigned char *)b;
	c2 = (unsigned char)c;
	if (len == 0)
		return (ptr);
	else
	{
		while (i < len)
		{
			ptr[i] = c2;
			i++;
		}
		return (ptr);
	}
}
