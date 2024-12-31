#include <stdio.h>
#include <math.h>
int huiwen(int m);
int main()
{
    int m = 0;
    scanf("%d", &m);
    if (huiwen(m) && huiwen(pow(m, 2)) && huiwen(pow(m, 3)))
        printf("%d是三重回文数", m);
    else
        printf("%d不是三重回文数", m);
}
int huiwen(int m)
{
    int flag = 0, n = 0, x = m;
    while (m > 0)
    {
        n = n * 10 + m % 10;
        m /= 10;
    }
    if (x == n)
        flag = 1;
    else
        flag = 0;
    return flag;
}