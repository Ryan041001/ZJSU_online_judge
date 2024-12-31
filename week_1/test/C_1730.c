#include <stdio.h>
int main()
{
    int a[100] = {0};
    int i = 0, j = 0;
    int temp = 0;
    scanf("%d", &temp);
    while (temp != -1)
    {
        a[i] = temp;
        i++;
        scanf("%d", &temp);
    }
    for (i = 0; a[i] != 0; i++)
    {
        for (j = i + 1; a[j] != 0; j++)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] ^ a[j];
                a[j] = a[i] ^ a[j];
                a[i] = a[i] ^ a[j];
            }
        }
    }
    for (i = 0; a[i] != 0; i++)
    {
        printf("%d ", a[i]);
    }
}