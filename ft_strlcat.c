/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:36:25 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:20:19 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	i = 0;
	len_dst = 0;
	len_src = 0;
	while (dst[len_dst] != '\0' && len_dst < dstsize)
		len_dst++;
	while (src[len_src] != '\0')
		len_src++;
	if (dstsize == len_dst)
		return (dstsize + len_src);
	while (src[i] != '\0' && (dstsize - 1) > (len_dst + i))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_src + len_dst);
}
