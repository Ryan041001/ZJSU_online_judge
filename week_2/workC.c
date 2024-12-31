#include <stdio.h>
#include <stdlib.h>

int main()
{
	int feet = 0, chicken = 0, rabbit = 0, min = 32768 / 2, max = 0;
	scanf("%d", &feet);
	for (chicken = 0; chicken < 32768 / 2; chicken++)
	{
		for (rabbit = 0; rabbit < 32768 / 4; rabbit++)
		{
			if (chicken * 2 + rabbit * 4 == feet)
			{
				if (min > chicken + rabbit)
					min = chicken + rabbit;
				if (max < chicken + rabbit)
					max = chicken + rabbit;
			}
		}
	}
	if (min == 32768 / 2)
		printf("0 0");
	else
		printf("%d %d", min, max);
}