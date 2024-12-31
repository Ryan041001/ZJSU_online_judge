#include <stdio.h>
int nishun(int x);
int main()
{
    int m = 0, n = 0, i = 1, k = 0, sum = 0, hsum = 0, x = 0;
    scanf("%d%d", &m, &n);
    for (x = m; x <= n; x++)
    {
        sum = x;
        if (sum == nishun(sum))
        {
            printf("%d(0):%d\n", x, sum);
            continue;
        }
        for (i = 1; i < 15; ++i)
        {
            sum += nishun(sum);
            //判断求和后是否为回文数
            if (sum == nishun(sum))
            {
                printf("%d(%d):%d\n", x, i, sum);
                break;
            }
        }
        if (sum != nishun(sum))
            printf("%d(?):\n", x);
    }
}
int nishun(int x)
{
    int y = 0;
    while (x > 0)
    {
        y = y * 10 + x % 10;
        x = x / 10;
    }
    return (y);
}