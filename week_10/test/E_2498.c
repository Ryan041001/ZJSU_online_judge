#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0, m = 0, i = 0;
    scanf("%d", &n);
    m = n * n;
    int x = n;
    while (x > 0)
    {
        x /= 10;
        i++;
    }
    m %= (int)pow(10, i);
    if (m == n)
    {
        printf("是守形数");
    }
    else
    {
        printf("不是守形数");
    }
}