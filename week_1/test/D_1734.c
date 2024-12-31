#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int item = 0;
    scanf("%d", &item);
    for (int i = 0; i < n; i++)
    {
        if (i == item - 1)
        {
            continue;
        }
        else
        {
            printf("%d ", a[i]);
        }
    }
}