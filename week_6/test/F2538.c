#include <stdio.h>
#include <math.h>
int prime(int m);
int main()
{
    int a = 0, b = 0;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        if (a > b)
        {
            a = a ^ b;
            b = a ^ b;
            a = a ^ b;
        }
        int res = 0;
        for (int i = a + 1; i < b; i++)
            if (prime(i) && i != 1)
                res += i;
        printf("%d\n", res);
    }
}
int prime(int m)
{
    for (int i = 2; i <= sqrt(m); i++)
    {
        if (m % i == 0)
            return 0;
        if(i == sqrt(i))
            return 1;
    }
    return 1;
}