/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:00:47 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/27 02:39:00 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, char check, int *size)
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
		ft_puthex(nbr / 16, check, size);
		ft_puthex(nbr % 16, check, size);
	}
}
