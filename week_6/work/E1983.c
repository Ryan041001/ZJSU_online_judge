#include <stdio.h>
int main()
{
    int a[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100}, s = 0;
    scanf("%d", &s);
    a[10] = s;
    for (int i = 10; i > 0; i--)
    {
        if (a[i - 1] > a[i])
        {
            a[i] = a[i] ^ a[i - 1];
            a[i - 1] = a[i] ^ a[i - 1];
            a[i] = a[i] ^ a[i - 1];
        }
    }
    for (int i = 0; i < 11; i++)
        printf("%d\n", a[i]);
}