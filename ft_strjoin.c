/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:20:59 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:20:07 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*answer;
	size_t	total_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	answer = malloc(sizeof(char) * total_len);
	if (!answer)
		return (NULL);
	while (s1[i] != '\0')
	{
		answer[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		answer[i + j] = s2[j];
		j++;
	}
	answer[i + j] = '\0';
	return (answer);
}
