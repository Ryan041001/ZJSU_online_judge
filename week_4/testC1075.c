#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m = 0, n = 0, abs = 100, i, j, res = 0;
    int f[1000] = {0}, g[1000] = {0};
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
        scanf("%d", &f[i]);
    for (j = 0; j < n; j++)
        scanf("%d", &g[j]);
    res = abs;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            abs = fabs(f[i] - g[j]);
            if (res > abs)
                res = abs;
        }
    }
    printf("%d", res);
}