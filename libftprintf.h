#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *ptr);
void	ft_putstr(char *txt, int *ptr);
void	ft_putnbr(int nb, int *count);
void	ft_puthexa(unsigned	int nbr, char check, int *size);
void	ft_point(unsigned long nbr, int *count);
int		ft_printf(const char *count, ...);
void	ft_putunsigned(unsigned long nb, int *count);
char	*ft_strchr(const char *s, int c);

#endif