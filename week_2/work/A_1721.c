#include <stdio.h>
int main()
{
    int size = 0;
    int a[100] = {0};
    int i = 0;
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}