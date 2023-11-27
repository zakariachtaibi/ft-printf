/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:01:51 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/27 02:39:13 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuns(int nb, int *len)
{
	unsigned int	n;

	n = (unsigned int)nb;
	if (n > 9)
		ft_putuns(n / 10, len);
	ft_putchar((n % 10) + 48, len);
}
