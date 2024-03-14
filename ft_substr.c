/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:21:32 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:28:01 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	len_calculator(const char *s, unsigned int start, size_t len)
{
	size_t	string_len;
	size_t	right_len;

	string_len = ft_strlen(s);
	if (start >= string_len)
		return (0);
	right_len = string_len - start;
	if (right_len > len)
		right_len = len;
	return (right_len);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*answer;
	size_t	answer_len;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	answer_len = len_calculator(s, start, len);
	answer = malloc(sizeof(char) * (answer_len + 1));
	if (answer == NULL)
		return (NULL);
	while (i < answer_len)
	{
		answer[i] = s[start + i];
		i++;
	}
	answer[i] = '\0';
	return (answer);
}
