#include<stdio.h>
int func(int n, int m);
int main()
{
    int N;
    scanf("%d", &N);
    {
        int num = 0;
        num = func(N, 4);
        printf("%d\n", num);
    }
}
int func(int n, int m)
{
    int p = 0;
    for (int i = 2; i <= n; i++)
    {
        p = (p + m) % i;
    }
    return p + 1;
}