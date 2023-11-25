#include "libftprintf.h"

void	ft_putstr(char *txt, int *ptr)
{
	int	i;

	i = 0;
	if (txt == NULL)
	{
		ft_putstr("(null)", ptr);
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