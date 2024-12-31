#include <stdio.h>

int main()
{
    int len1, len2, len3, ar1[100], ar2[100], ar3[100];
    scanf("%d", &len1);
    for (int i = 0; i < len1; i++)
    {
        scanf("%d", &ar1[i]);
    }
    scanf("%d", &len2);
    for (int i = 0; i < len2; i++)
    {
        scanf("%d", &ar2[i]);
    }
    scanf("%d", &len3);
    for (int i = 0; i < len3; i++)
    {
        scanf("%d", &ar3[i]);
    }
    int i = 0, j = 0, len4 = 0, ar4[100];
    while (i < len1 && j < len2)
    {
        if (ar1[i] == ar2[j])
        {
            ar4[len4++] = ar1[i];
            i++;
            j++;
        }
        else if (ar1[i] > ar2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    int k = 0, m = 0, idx = 0, ans[100];
    while (k < len3 && m < len4)
    {
        if (ar3[k] == ar4[m])
        {
            ans[idx++] = ar3[k];
            k++;
            m++;
        }
        else if (ar3[k] > ar4[m])
        {
            m++;
        }
        else
        {
            k++;
        }
    }
    for (int i = 0; i < idx; i++)
    {
        printf("%d ", ans[i]);
    }
}