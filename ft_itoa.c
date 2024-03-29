/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:19:40 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/06 15:10:15 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	sign_check(int n)
{
	int	is_negative;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	return (is_negative);
}

size_t	digit_counter(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		n = -n;
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

void	answer_writer(int n, char *num_str, size_t len, int is_negative)
{
	if (is_negative)
	{
		*num_str = '-';
		num_str++;
		n = -n;
	}
	num_str[len] = '\0';
	while (len--)
	{
		num_str[len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*num_str;
	int		is_negative;

	if (n == -2147483648)
	{
		num_str = malloc(sizeof(char) * 12);
		if (num_str)
			ft_strlcpy(num_str, "-2147483648", 12);
		return (num_str);
	}
	is_negative = sign_check(n);
	len = digit_counter(n);
	num_str = malloc(sizeof(char) * (len + 1 + is_negative));
	if (!num_str)
		return (0);
	answer_writer(n, num_str, len, is_negative);
	return (num_str);
}
