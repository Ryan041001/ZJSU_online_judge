#include <stdio.h>
int main()
{
    int a[1001], n, start, m, k = 0, count = 0, i, j;
    scanf("%d %d %d", &n, &start, &m);
    count = n;
    for (i = 0; i <= n; i++)
        a[i] = i;
    for (i = start;; i++)
    {
        if (i > n)
            i = i - n;
        if (a[i] != 0)
        {
            k++;
            if (k == m)
            {
                a[i] = 0;
                k = 0;
                count -= 1;
            }
        }
        if (count == 1)
            break;
    }
    for (i = 0; i <= n; i++)
        if (a[i] != 0)
            printf("%d", a[i]);
    return 0;
}