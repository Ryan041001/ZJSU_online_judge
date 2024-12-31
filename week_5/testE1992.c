#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m = 0, n = 0, i, j, k = 1, s[1000] = {0}, x = 0, y = 0, flag = 0;
	scanf("%d%d", &m, &n);
	for (i = m; i < n + 1; i++)
	{
		//判断是否为回文数
		x = i / 10;
		y = i % 10;
		while (x > 0)
		{
			y = y * 10 + x % 10;
			x = x / 10;
		}
		if (y == i)
			flag = 1;
		else
			continue;
		//判断是否为素数
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
			else
				continue;
		}
		//按要求输出
		if (flag == 1)
		{
			s[k] = i;
			if (k % 5 == 0)
			{
				printf("%6d\n", s[k]);
				k++;
			}
			else
			{
				printf("%6d", s[k]);
				k++;
			}
		}
		else
			continue;
	}
}
