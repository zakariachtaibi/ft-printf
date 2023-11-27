/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:03:26 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/27 02:40:05 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_addrhex(unsigned long nbr, char check, int *size)
{
	char	*str;

	if (check == 'x')
		str = "0123456789abcdef";
	else if (check == 'X')
		str = "0123456789ABCDEF";
	if (nbr < 16)
		ft_putchar(str[nbr], size);
	else
	{
		ft_addrhex(nbr / 16, check, size);
		ft_addrhex(nbr % 16, check, size);
	}
}

void	ft_point(unsigned long nbr, int *count)
{
	if (!nbr)
		ft_putstr("0x0", count);
	else
	{
		ft_putstr("0x", count);
		ft_addrhex(nbr, 'x', count);
	}
}
