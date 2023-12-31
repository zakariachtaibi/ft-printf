/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:22:43 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/27 02:32:57 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *txt, int *ptr)
{
	int	i;

	i = 0;
	if (txt == NULL)
	{
		ft_putstr("(null)", ptr);
		return ;
	}
	else
	{
		while (txt[i])
		{
			ft_putchar(txt[i], ptr);
			i++;
		}
	}
}
