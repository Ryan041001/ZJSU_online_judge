#include <stdio.h>
#include <stdlib.h>
void ScanfList(int *l)
{
    int temp = 0;
    scanf("%d", &temp);
    while (temp != -1)
    {
        *l = temp;
        l++;
        scanf("%d", &temp);
    }
}

int main()
{
    int a1[100] = {0}, a2[100] = {0}, a3[100] = {0};
    int i = 0, j = 0;
    ScanfList(a1);
    ScanfList(a2);
    for (i = 0; a1[i] != 0; i++)
    {
        for (j = 0; a2[j] != 0; j++)
        {
            if (a1[i] == a2[j])
            {
                static int k = 0;
                a3[k] = a1[i];
                k++;
                break;
            }
        }
    }
    for (i = 0; a3[i] != 0; i++)
    {
        printf("%d ", a3[i]);
    }
}