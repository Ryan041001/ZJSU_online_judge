#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(int *point[], int n)
{
    int i, j;
    int *temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (**(point + j) > **(point + j + 1))
            {
                temp = *(point + j);
                *(point + j) = *(point + j + 1);
                *(point + j + 1) = temp;
            }
        }
    }
}
int main()
{
    int *s1[20];
    int i, n;
    while (scanf("%d", &n) && n != 0)
    {
        for (i = 0; i < n; i++)
        {
            s1[i] = (int *)malloc(4);
            scanf("%d", s1[i]);
        }
        sort(s1, n);
        for (i = 0; i < n; i++)
        {
            printf("%d ", *s1[i]);
        }
        printf("\n");
    }
}
