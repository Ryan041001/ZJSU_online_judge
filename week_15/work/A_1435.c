#include <stdio.h>
#include <math.h>
int isprime(int m);
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int sum = 0;
    int i;
    for (i = m; i <= n; i++)
    {
        if (isprime(i))
        {
            sum += i;
        }
    }
    printf("%d", sum);
}
int isprime(int m)
{
    int i;
    if (m == 1)
    {
        return 0;
    }
    for (i = 2; i <= sqrt(m); i++)
    {
        if (m % i == 0)
        {
            return 0;
        }
    }
    return 1;
}