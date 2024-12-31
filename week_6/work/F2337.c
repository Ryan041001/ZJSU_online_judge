#include <stdio.h>
int jinzhizhuanhuan(int m);
int huiwenzhuanhuan(int m);
int main()
{
    int s = 0;
    while (scanf("%d", &s) != EOF)
    {
        if (jinzhizhuanhuan(s) == huiwenzhuanhuan(jinzhizhuanhuan(s)))
            printf("Yes\n");
        else
            printf("No\n");
    }
}
int jinzhizhuanhuan(int m)
{
    int n = 0;
    while (m > 0)
    {
        n = n * 10 + m % 2;
        m /= 2;
    }
    return n;
}
int huiwenzhuanhuan(int m)
{
    int n = 0;
    while (m > 0)
    {
        n = n * 10 + m % 10;
        m /= 10;
    }
    return n;
}