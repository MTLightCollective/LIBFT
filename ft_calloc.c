/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:06:37 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:44:04 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*string;
	unsigned char	*bytestring;
	size_t			i;
	size_t			totalsize;

	i = 0;
	totalsize = size * count;
	string = (void *) malloc(totalsize);
	if (!string)
		return (0);
	if (string != NULL)
	{
		bytestring = (unsigned char *)string;
		while (i < totalsize)
		{
			bytestring[i] = '\0';
			i++;
		}
	}
	return (string);
}
