int	ft_atoi(char *str)
{
	int	idx;
	int	res;
	int	neg;

	idx = 0;
	res = 0;
	neg = 1;
	while ((str[idx] >= 9 && str[idx] <= 13) || str[idx] == 32)
		idx++;
	if (str[idx] == '-')
		neg = -1;
	else if (str[idx] == '+')
		idx++;
	while (str[idx] >= '0' && str[idx] <= '9')
	{
		res = 10 * res + str[idx] - '0';
		idx++;
	}
	return (neg * res);
}
