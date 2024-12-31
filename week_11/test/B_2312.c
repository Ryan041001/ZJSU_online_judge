#include <stdio.h>

void sort(int s[]);
int main()
{
    int s[10] = {0};
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &s[i]);
    }
    sort(s);
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", s[i]);
    }
}
void sort(int s[])
{
    int *p = s, i = 0, j = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            if (*(p + i) < *(p + j))
            {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}