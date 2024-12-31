#include <stdio.h>
#include <string.h>
#include <math.h>

void num(int m, int k, int xx[]);
int prime(int n);
int main()
{
    int m, k, xx[800] = {0};
    scanf("%d%d", &m, &k);
    num(m, k, xx);
    for (int i = 0; i < k; i++)
        printf("%d\n", xx[i]);
}
void num(int m, int k, int xx[])
{
    int j = 0;
    for (int i = 0; i < 500; i++)
    {
        if (prime(m + i + 1))
        {
            xx[j] = m + i + 1;
            j++;
            if (j == k)
                break;
        }
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