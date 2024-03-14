/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:21:09 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:22:31 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*answer;

	i = 0;
	if (!s || !f)
		return (NULL);
	answer = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!answer)
		return (NULL);
	while (s[i])
	{
		answer[i] = f(i, (char)s[i]);
		i++;
	}
	answer[i] = '\0';
	return (answer);
}
