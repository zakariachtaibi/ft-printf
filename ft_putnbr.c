/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:22:32 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/26 10:22:32 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', count);
	}
	if (n > 9)
		ft_putnbr(n / 10, count);
	ft_putchar((n % 10) + 48, count);
}
