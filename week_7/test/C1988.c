#include <stdio.h>
int factorsum(int m);
int main()
{
    int m = 0, n = 0;
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; i++)
        if (i == factorsum(i))
            printf("%d ", i);
}
int factorsum(int m)
{
    int sum = 0;
    for (int i = 1; i < m; i++)
        if (m % i == 0)
            sum += i;
    return sum;
}