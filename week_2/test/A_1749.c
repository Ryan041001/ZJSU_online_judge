#include <stdio.h>
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

int CompareList(int *a, int *b, int size1, int size2)
{
    int flag = 0;
    int i = 0, j = 0;
    for (j = 0; j < size2; j++)
    {
        for (i = 0; i < size1; i++)
        {
            if (b[j] == a[i])
            {
                flag = 1;
                break;
            }
            else
            {
                if (i == size1 - 1)
                {
                    flag = 0;
                    return flag;
                }
            }
        }
    }
    return flag;
}

int cnt(int *a)
{
    int lenth = 0;
    int i = 0;
    while (a[i] != 0)
    {
        lenth++;
        i++;
    }
    return lenth;
}
int main()
{
    int a1[100] = {0}, a2[100] = {0}, a3[100] = {0};
    int i = 0, j = 0;
    ScanfList(a1);
    ScanfList(a2);
    printf(CompareList(a1, a2, cnt(a1), cnt(a2)) ? "Yes" : "No");
}