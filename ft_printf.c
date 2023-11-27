/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:28:50 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/27 02:47:19 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_format_specifier(const char **format, va_list args, int *len)
{
	unsigned long	p;

	if (**format == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (**format == 'c')
		ft_putchar((char)va_arg(args, int), len);
	else if (**format == 'u')
		ft_putuns(va_arg(args, int), len);
	else if (**format == 'd' || **format == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (**format == 'x' || **format == 'X')
		ft_puthex(va_arg(args, unsigned int), **format, len);
	else if (**format == '%')
		ft_putchar('%', len);
	else if (**format == 'p')
	{
		p = va_arg(args, unsigned long);
		ft_point(p, len);
	}
	(*format)++;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			handle_format_specifier(&format, args, &len);
		}
		else
		{
			ft_putchar(*format, &len);
			format++;
		}
	}
	va_end(args);
	return (len);
}
