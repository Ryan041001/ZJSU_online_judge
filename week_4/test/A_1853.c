#include <stdio.h>
int LCM(int m, int n);
int main()
{
    int a, b;
    int res = 0, lcm = 0;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        lcm = LCM(a, b);
        res = a * b / lcm;
        printf("%d\n", res);
    }
}
int LCM(int m, int n)
{
    if (!n)
    {
        return m;
    }
    else if (m < n)
    {
        m = m ^ n;
        n = m ^ n;
        m = m ^ n;
    }
    int temp = m;
    m = n;
    n = temp % m;
    LCM(m, n);
}