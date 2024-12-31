#include <stdio.h>
int f(int n);
int main()
{
    int n = 0, m = 0;
    while(scanf("%d", &m) != EOF)
    {
        n = f(m);
        printf("%d\n", n);
    }
}
int f(int n)
{
    int m = 0;
    if (n > 3)
        m = f(n - 1) + f(n - 2);
    else if (n == 2)
        m = 1;
    else if (n == 3)
        m = 2;
    return m;
}