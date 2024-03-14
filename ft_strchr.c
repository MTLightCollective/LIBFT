/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:51:32 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:19:12 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c2;
	int		i;

	c2 = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c2)
			return ((char *)&s[i]);
		i++;
	}
	if (c2 == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
