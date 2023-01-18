#include<unistd.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i])
	{
		src[i] = dest[i];
		i++;
	}
	src[i] = '\0';
	return src;
}

int main(void)
{
	char arr1[5] = "hello";
	char arr2[5] = " ";
	ft_strcpy(arr1, arr2);

	for (int i = 0; arr2[i] != 0; i++ )
	{
		printf("%c", arr2[i]);
	}

	return 0;

}
