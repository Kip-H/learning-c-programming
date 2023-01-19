#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	int state;

	state=0;
	i=0;
	while(str[i])
	{
		if (str[i] < 65 || (str[i] >= 91 && str[i] <= 96) || str[i] >= 123)
			state = 1;
		i++;
	}
	if (state == 1)
		return (0);
	else
		return (1);
}

int main(void)
{
		printf("< ex02 >\n");
	printf("-----------answer------------\n");
	printf("1 1 0\n");
	printf("-------------------------------\n");
	printf("%d %d %d\n", ft_str_is_alpha("afwrA"), ft_str_is_alpha(""), ft_str_is_alpha("asA \n"));
	printf("-----------output------------\n\n");
}
