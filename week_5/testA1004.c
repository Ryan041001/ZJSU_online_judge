/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int h1[80] = {0}, h2[80] = {0}, n = 0, i = 0, j = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        for (i = 0; i < n; i++)
            scanf("%d", &h1[i]);
        for (i = 0; i < n; i++)
            scanf("%d", &h2[i]);
        //将数组h1 h2内的数据依序排列
        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                if (h1[i] < h1[j])
                {
                    h1[i] = h1[i] ^ h1[j];
                    h1[j] = h1[i] ^ h1[j];
                    h1[i] = h1[i] ^ h1[j];
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                if (h2[i] > h2[j])
                {
                    h2[i] = h2[j] ^ h2[i];
                    h2[j] = h2[j] ^ h2[i];
                    h2[i] = h2[j] ^ h2[i];
                }
            }
        }
        //判断是否能获胜
        for (;;)
        {
            if ()
                printf("YES\n");
            else
                printf("NO\n");
            scanf("%d", &n);
        }
    }
}*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int i, j, k, N = 1, c = 0, temp;
	int a[1000], b[1000];
	while (N != 0)
	{
		scanf("%d", &N);
		if (N == 0)
			break;
		for (i = 0; i < N; i++)
			scanf("%d", &a[i]);

		for (j = 0; j < N; j++)
			scanf("%d", &b[j]);

		for (i = 0; i < N; i++)
			for (j = 1; j < N - i; j++)
			{
				if (a[j - 1] > a[j])
				{
					temp = a[j - 1];
					a[j - 1] = a[j];
					a[j] = temp;
				}
				if (b[j - 1] > b[j])
				{
					temp = b[j - 1];
					b[j - 1] = b[j];
					b[j] = temp;
				}
			}
		j = 0;
		for (i = 0; i < N; i++)
			if (a[i] > b[j])
			{
				j += 1;
				c += 1;
			}
		if (c > N / 2)
			printf("YES\n");
		else
			printf("NO\n");
		c = 0;
	}
}