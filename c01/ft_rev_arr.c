#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i;

	i = 0;
	while(i < size/2)
	{
		temp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}

int main(void)
{
	int arr2[6] = {1,2,3,4,5,6};
	int size;

	size = 5;

	for(int i=0; i < size; i++)
	{
		printf("%d",arr2[i]);
	}

	printf("\n");

	ft_rev_int_tab(arr2, size);

	for (int i=0; i < size; i++)
	{
		printf("%d",arr2[i]);
	}

	return 0;
}
