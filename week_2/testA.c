#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0, a = 0, b = 0, c = 0, sum = 0;
	scanf("%d", &i);
	a = i / 100;
	b = (i - a * 100) / 10;
	c = i - a * 100 - b * 10;
	if (a % 2 == 0)
		sum += a;
	if (b % 2 == 0)
		sum += b;
	if (c % 2 == 0)
		sum += c;
	printf("%d", sum);
}