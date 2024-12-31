#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int num = 0, a = 0, n = 0, i = 0, sum = 0;
	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++)
	{
		num = num + a * pow(10, i);
		sum = sum + num;
	}
	printf("%d", sum);
}