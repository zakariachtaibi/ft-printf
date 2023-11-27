/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:22:50 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/26 22:06:59 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, int *ptr);
void	ft_putstr(char *txt, int *ptr);
void	ft_putnbr(int nb, int *ptr);
void	ft_puthex(unsigned int nbr, char check, int *size);
void	ft_point(unsigned long nbr, int *ptr);
int		ft_printf(const char *count, ...);
void	ft_putuns(int nb, int *len);

#endif