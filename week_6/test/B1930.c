#include <stdio.h>
int main()
{
    int m = 0, n = 0, GCD = 0, LCM = 0;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        if (m > n)
        {
            m = m ^ n;
            n = m ^ n;
            m = m ^ n;
        }
        for (int i = n; i > 0; i--)
        {
            if (m % i == 0 && n % i == 0)
            {
                GCD = i;
                LCM = m * n / GCD;
                printf("%d %d\n", GCD, LCM);
                break;
            }
            else
                continue;
        }
    }
}