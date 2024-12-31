#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, b = 0, c = 0, sum = 0, n = 0;
	float mean = 0.0;
	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	n = a * b * c;
	mean = sum / 3.0;
	printf("%d %d %.2f", sum, n, mean);
}