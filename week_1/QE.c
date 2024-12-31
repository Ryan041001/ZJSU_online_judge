#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	int i = 0;
	int sum = 0;
	int num = 0;
	scanf("%d\n", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		if (num % 2 == 0)
			sum = sum + num;
	}
	printf("%d\n", sum);
}