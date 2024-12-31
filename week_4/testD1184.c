#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 0, n = 0, gbs = 0, gys = 0;
    scanf("%d%d", &m, &n);
    if (n > m)
    {
        m = m ^ n;
        n = m ^ n;
        m = m ^ n;
    }
    if (m % n == 0)
    {
        gbs = m;
        gys = n;
    }
    else
    {
        gys = m;
        while (!(m % gys == 0 && n % gys == 0))
            gys--;
        gbs = m;
        while (!(gbs % m == 0 && gbs % n == 0))
            gbs++;
    }
    printf("%d %d", gbs, gys);
}