/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:21:20 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:25:58 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	start_count(const char *s1, const char *set)
{
	size_t	count;

	count = 0;
	while (s1[count] && ft_strchr(set, s1[count]))
	{
		count++;
	}
	return (count);
}

size_t	end_count(const char *s1, const char *set, size_t len)
{
	size_t	count;

	count = 0;
	while (len > 0 && ft_strchr(set, s1[len - 1]))
	{
		len--;
		count++;
	}
	return (count);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*answer;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = start_count(s1, set);
	end = end_count(s1, set, len);
	if (start >= len)
	{
		return (ft_strdup(""));
	}
	answer = ft_substr(s1, start, len - start - end);
	return (answer);
}
