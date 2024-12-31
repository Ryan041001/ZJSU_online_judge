#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0, j = 0, x = 0;
	int num[15][15] = {0};
	scanf("%d", &x);
	for (i = 0; i < x; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
				num[i][j] = 1;
			if (i == j)
				num[i][j] = 1;
			if (i >= 2 && j >= 1)
				num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
		}
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d", num[i][j]);
			if (j != i)
				printf(" ");
		}
		printf("\n");
	}
}
