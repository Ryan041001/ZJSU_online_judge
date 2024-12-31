#include <stdio.h>
#include <math.h>

void Prime(int n, int m, int *num);
int is_prime(int n);
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[1000] = {0};
    for (int i = 0; i < n - m + 1; i++)
    {
        a[i] = m + i;
    }
    Prime(n, m, &a[0]);
}
void Prime(int n, int m, int *num)
{
    int p[1000] = {0};
    int j = 0;
    for (; *num != 0; *num++)
    {
        if (is_prime(*num))
        {
            p[j] = *num;
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d\n", p[i]);
    }
}
int is_prime(int n)
{
    int flag = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}