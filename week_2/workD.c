#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1, num = 0, j = 0, k = 0;
	scanf("%d", &num);
	for (j = 1; j <= num; j++)
	{
		for (k = num - j; k > 0; k--)
			printf(" ");
		while (i <= j)
		{
			printf("%d", i);
			i++;
		}
		i--;
		while (i > 1)
		{
			i--;
			printf("%d", i);
		}
		printf("\n");
	}
	for (j = num; j > 0; j--)
	{
		for (k = num - j + 1; k > 0; k--)
			printf(" ");
		while (i < j)
		{
			printf("%d", i);
			i++;
		}
		i--;
		while (i > 1)
		{
			i--;
			printf("%d", i);
		}
		printf("\n");
	}
}
