#include<unistd.h>

void	print_num(char m, char p, char z)
{
	write(1, &m, 1);
	write(1, &p, 1);
	write(1, &z, 1);
	if (m != '7' || p != '8' || z != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '0';
	k = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				print_num(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
