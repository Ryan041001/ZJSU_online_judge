#include <stdio.h>

int f(int m, int n);
int main()
{
    int m, n, t = 0;
    scanf("%d,%d", &m, &n);
    t = f(m, n);
    printf("%d", t);
}
int f(int m, int n)
{
    int t = 0;
    if (n == 0)
        t = 1;
    else if (m < n)
        t = 0;
    else
        t = f(m - 1, n) + f(m, n - 1);
    return t;
}