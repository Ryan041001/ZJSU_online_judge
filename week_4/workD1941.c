#include <stdio.h>

int main()
{
    int a[6], sum1, sum2;
    for (int i = 0; i < 6; i++)
        scanf("%d", &a[i]);
    sum1 = a[0] + a[1] * 4 + a[2] * 9 + a[3] * 16 + a[4] * 25 + a[5] * 36;
    if (sum1 % 36 == 0)
        sum2 = sum1 / 36;
    else
        sum2 = (sum1 / 36) + 1;
    printf("%d", sum2);
}