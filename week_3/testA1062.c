#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 1, i = 0, j = 1, all = 1;
	scanf("%d", &n);
	while (n != 0)
	{
		j = 1;
		for (i = 1; i < n; i++)
		{
			j = (j + 1) * 2;
		}
		all = j;
		printf("%d\n", all);
		scanf("%d", &n);
	}
}