#include <unistd.h>

void	whereami(char *box, int i, int j, int x)
{
	if (j == 0)
	{
		if (i == 0)
			*box = 'A';
		else
			*box = 'C';
	}
	else if (j == x - 1)
	{
		if (i == 0)
			*box = 'C';
		else
			*box = 'A';
	}
	else
		*box = 'B';
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
				whereami(&box, i, j, x);
			else
			{
				if (j == 0 || j == x - 1)
					box = 'B';
				else
					box = ' ';
			}
			write(1, &box, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	rush(3, 0);
	rush(0, 3);
}
