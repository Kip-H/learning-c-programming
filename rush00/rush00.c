#include<unistd.h>
#include "ft_putchar.c"

void	whereami(char *box, int j, int x)
{
	if (j == 0 || j == x - 1)
			*box = 'o';
	else
		*box = '-';
}

void	rush(int x, int y)
{
	char	box;
	int		i;
	int		j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (i == 0 || i == y - 1)
				whereami(&box, j, x);
			else
			{
				if (j == 0 || j == x - 1)
					box = '|';
				else
					box = ' ';
			}
			ft_putchar(box);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
