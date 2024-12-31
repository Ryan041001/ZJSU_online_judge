#include <stdio.h>

int main()
{
    int a[80] = {0};
    int i = 0;
    scanf("%d", &a[0]);
    while (a[i] != 0)
    {
        i++;
        scanf("%d", &a[i]);
    }
    int len = i;
    for (i = len - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}