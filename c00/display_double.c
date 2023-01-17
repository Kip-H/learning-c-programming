#include<unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	print_t_to_c(int trc)
{
	char	ch_1;
	char	ch_2;

	ch_2 = trc / 10 + '0';
	ch_1 = trc % 10 + '0';
	ft_putchar(ch_2, ch_1);
}

void	ready(int first, int second)
{
	print_t_to_c(first);
	write(1, " ", 1);
	print_t_to_c(second);
	if (first != 98)
		ft_putchar(',', ' ');
}

void	ft_print_comb2(void)
{
	int	f_f;
	int	f_s;

	f_f = -1;
	f_s = 0;
	while (++f_f <= 98)
	{
		f_s = f_f;
		while (++f_s <= 99)
		{
			ready(f_f, f_s);
		}
	}
}
