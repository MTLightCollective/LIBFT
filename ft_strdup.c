/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:55:40 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:51:08 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newptr;
	int		i;

	i = 0;
	newptr = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (newptr == NULL)
		return (NULL);
	while (s1[i])
	{
		newptr[i] = s1[i];
		i++;
	}
	newptr[i] = '\0';
	return (newptr);
}
