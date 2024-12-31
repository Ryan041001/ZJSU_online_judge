#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int *f, *g;
    f = (int *)malloc(m * sizeof(int));
    g = (int *)malloc(n * sizeof(int));
    int i, j;
    for (i = 0; i < m; i++)
    {
        scanf("%d", &f[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &g[i]);
    }
    int cnt = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (f[i] > g[j])
            {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    free(f);
    free(g);
}