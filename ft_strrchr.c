/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:08:44 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:25:24 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c2;
	int		i;
	char	*position;

	c2 = (char) c;
	i = 0;
	position = NULL;
	while (s[i])
	{
		if (s[i] == c2)
			position = (char *)&s[i];
		i++;
	}
	if (c2 == '\0')
		return ((char *)&s[i]);
	return (position);
}
