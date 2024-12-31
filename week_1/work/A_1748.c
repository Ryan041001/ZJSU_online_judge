#include <stdio.h>
int main()
{
    int N = 0, a[100] = {0}, flag = 1;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < N; i++)
    {
        if (a[i] == (i + 1) * (i + 1) - a[i - 1])
        {
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    printf("%s", flag ? "true" : "false");
}