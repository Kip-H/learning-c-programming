#include<unistd.h>
#include<stdio.h>

int	ft_strl(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int length;

	i = 0;
	length = ft_strl(dest);
	if ( n >= length )
	{
		while (i < n)
		{
			src[i] = dest[i];
			i++;
		}
		src[length] = '\0';
	}
	else
	{
		while (i < n)
		{
			src[i] = dest[i];
			i++;
		}
	}
	return (src);
}

int main(void)
{
	char arr1[5] = "hello";
	char arr2[5] = " ";


	ft_strncpy(arr1, arr2, 1);

	for (int i=0; i<5; i++)
	{
		printf("%c",arr2[i]);
	}
}
