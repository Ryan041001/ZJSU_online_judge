#include <stdio.h>
#include <math.h>
#include <string.h>

int prime(int n);
int inv(int n);
void num(int s[], int m, int n);
int main()
{
    int m, n, len = 0, s[1000] = {0};
    scanf("%d%d", &m, &n);
    num(s, m, n);
    len = sizeof(s) - 1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 0)
            break;
        if ((i + 1) % 10 == 0)
            printf("%5d\n", s[i]);
        else
            printf("%5d", s[i]);
    }
}
void num(int s[], int m, int n)
{
    int j = 0;
    for (int i = m; i <= n; i++)
        if (prime(i) && prime(inv(i)))
        {
            s[j] = i;
            j++;
        }
}
int prime(int n)
{
    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
        else
            flag = 1;
    return flag;
}
int inv(int n)
{
    int m = 0;
    while (n > 0)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}