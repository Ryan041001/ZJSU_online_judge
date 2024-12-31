#include <stdio.h>
int main()
{
    int n = 0, a[100] = {0};
    int i = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for (i = 0; i < n - 1; i++)
    {
        if (min > a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
}