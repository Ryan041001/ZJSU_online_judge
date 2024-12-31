#include <stdio.h>
#include <stdlib.h>
//从小到大输出两个正整数m和n（m≥6，n≤5000）之间的亲密数对。
int factor(int x);
int main()
{
    int m = 0, n = 0, i;
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++)
        {
            if(factor(i)>i && i==factor(factor(i)))
                printf("%d %d\n", i, factor(i));
        }
}
int factor(int x)
{
    int i, plus = 0;
    for (i = 1; i < x; i++)
    {
        if (x % i == 0)
            plus += i;
    }
    return plus;
}