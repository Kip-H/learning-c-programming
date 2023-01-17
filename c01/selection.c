#include<stdio.h>

void	swap(int *tab2, int k, int mi_idx)
{
	int	temp;

	temp = tab2[mi_idx];
	tab2[mi_idx] = tab2[k];
	tab2[k] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	min_idx;

	i = 0;
	while (i < size)
	{
		min = tab[i];
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < min)
			{
				min = tab[j];
				min_idx = j;
			}
			j++;
		}
		swap(tab, i, min_idx);
		i++;
	}
}

int	main(void)
{
	int arr[5] = {5,3,2,1,4};
	int size = 5;

	for (int i =0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	ft_sort_int_tab(arr, size);

	printf("정렬:");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
