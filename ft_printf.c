/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:28:50 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/25 11:30:03 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
void check_flags(char c, va_list args, int *count)
{
    char *s;

    if (c == 's')
    {
        s = va_arg(args, char *);
        ft_putstr(s, count);
    }
    else if(c == 'c')
        ft_putchar(va_arg(args,int), count);
    else if(c=='d' || c =='i')
        ft_putnbr(va_arg(args,int), count);
    else if(c == 'p')
        ft_point(va_arg(args , unsigned long), count);
    else if(c == 'x')
        ft_puthexa(va_arg(args,unsigned int), 'x', count);
    else if(c=='X')
        ft_puthexa(va_arg(args,unsigned int), 'X', count);
    else if(c =='u')
        ft_unsig(va_arg(args,unsigned int), count);
    else if (c =='%')
        ft_putchar('%', count);
    else
		*count = -1;
}
int ft_printf(const char *format, ...)
{
    int count;
    va_list args;
    int i;

    count = 0;
    va_start(args, format);
    i = 0;
    while (format[i])
    {
        if (format[i] == '%' && ft_strchr("cspduixX%",format[i+1]))
        {
            check_flags(format[i+1], args, &count);
            i++;
        }
        else
            ft_putchar(format[i], &count);
       i++;
    }
    return (count);
}