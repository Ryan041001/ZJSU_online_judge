#include <stdio.h>
#include <string.h>
int is_prime(int n) /*判断素数*/
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int prime[100], count = 0;
int main()
{
    int n, p[100];
    for (int i = 2; i <= 100; i++) /*建立素数表*/
    {
        if (is_prime(i) > 0)
        {
            prime[count++] = i;
        }
    }
    while (scanf("%d", &n) == 1)
    {
        printf("%d!=", n);
        memset(p, 0, sizeof(p)); /*初始化数组*/
        int maxp = 0;
        for (int i = 1; i <= n; i++)
        {
            int m = i; /*不能直接修改i*/
            for (int j = 0; j < count; j++)
            {
                while (m % prime[j] == 0)
                {
                    m /= prime[j];
                    p[j]++;
                    if (j > maxp)
                        maxp = j; /*更新最大素因子下标*/
                }
            }
        }
        for (int i = 0; i <= maxp; i++)
        {
            printf(" %d", p[i]); /*不考虑最大素数以外的数字*/
        }
        printf("\n");
    }
}
