#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a = 0, b = 0, i, j, k;
    scanf("%d,%d", &a, &b);
    for (i = a; i <= b; i++)
    {
        for (j = i; j <= b; j++)
        {
            for (k = j; k <= b; k++)
            {
                if (pow(i, 2) + pow(j, 2) == pow(k, 2))
                printf("%d^2+%d^2=%d^2\n", i, j, k);
            }
        }
    }
}