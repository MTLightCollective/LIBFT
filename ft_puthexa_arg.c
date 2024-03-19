/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauss <mamauss@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:11:04 by mamauss           #+#    #+#             */
/*   Updated: 2024/03/19 15:12:50 by mamauss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_puthexa_arg(va_list args)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)va_arg(args, char);
	while (i < 2)
	{
		ft_putchar(str[i]);
		i++;
	}
	while str[i]
	{
	ft_putchar(str[i]);
	i++;
}
}
