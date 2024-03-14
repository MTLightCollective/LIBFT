/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:20:11 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/07 14:15:28 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nb;
	long	n2;

	n2 = n;
	if (fd == -1)
		return ;
	if (n2 < 0)
	{
		write(fd, "-", 1);
		n2 = -n2;
	}
	if (n2 < 10)
	{
		nb = '0' + n2;
		write(fd, &nb, 1);
	}
	if (n2 >= 10)
	{
		ft_putnbr_fd(n2 / 10, fd);
		ft_putnbr_fd(n2 % 10, fd);
	}
}
