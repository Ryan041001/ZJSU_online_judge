#include <stdio.h>

int zh(int m, int n);
int main()
{
    int m = 0, n = 0, c = 0;
    scanf("%d%d", &m, &n);
    c = zh(m, n);
    printf("%d", c);
}
int zh(int m, int n)
{
    int c = 0;
    if (n > m - n)
        n = m - n;
    if (n == 0)
        return 1;
    else if (n == 1)
        return m;
    else
        c = zh(m - 1, n - 1) + zh(m - 1, n);
}