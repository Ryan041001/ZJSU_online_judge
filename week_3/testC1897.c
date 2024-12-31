#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, b = 0;
	scanf("%d", &a);
	b = a % 8;
	if (b > 3)
		printf("1");
	else
		printf("0");
}