#include <stdio.h>
void InitList(int *l)
{
    int temp = 0;
    scanf("%d", &temp);
    while (temp != -1)
    {
        *l = temp;
        l++;
        scanf("%d",&temp);
    }
}
void DeleteElement(int *l, int pos)
{
    int i = 0;
    for (i = pos; l[i] != 0; i++)
    {
        l[i] = l[i + 1];
    }
}
int main()
{
    int a1[100] = {0}, a2[100] = {0};
    int i = 0, j = 0;
    InitList(a1);
    InitList(a2);
    for (i = 0; a1[i] != 0; i++)
    {
        for (j = 0; a2[j] != 0; j++)
        {
            if (a1[i] == a2[j])
            {
                int k = i;
                DeleteElement(a1, k);
            }
        }
    }
    for (i = 0; a1[i] != 0; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n%d", i);
}