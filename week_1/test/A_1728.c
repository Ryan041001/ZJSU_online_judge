#include <stdio.h>
int main()
{
    int len = 0, a[100] = {0}, p = 0;
    scanf("%d", &len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &p);
    a[p - 1] = a[p - 1] ^ a[p];
    a[p] = a[p - 1] ^ a[p];
    a[p - 1] = a[p - 1] ^ a[p];
    for (int i = 0; i < len; i++)
        printf("%d ", a[i]);
}