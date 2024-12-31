/*#include <stdio.h>
void swap(int *m, int *n);
int main()
{
    int s1[5][5] = {0}, s2[5][5] = {0};
    int i = 0, j = 0;
    // 输入
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &s1[i][j]);
        }
    }
    // 初始化s2
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            s2[i][j] = s1[i][j];
        }
    }
    int *max = &s2[2][2], *min = &s2[0][0], *m2 = &s2[0][4], *m3 = &s2[4][0], *m4 = &s2[4][4];
    // 找到最大值，与中间值交换
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (*max < s1[i][j])
            {
                max = &s2[i][j];
            }
        }
    }
    swap(max, &s2[2][2]);
    // 找到最小值，与s1[0][0]交换
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (*min > s1[i][j])
            {
                min = &s2[i][j];
            }
        }
    }
    swap(min, &s2[0][0]);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if ((*m2 > s1[i][j]) && (s1[i][j] < *min))
            {
                m2 = &s2[i][j];
            }
        }
    }
    swap(m2, &s2[0][4]);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if ((*m3 > s1[i][j]) && (s1[i][j] < *m2))
            {
                m3 = &s2[i][j];
            }
        }
    }
    swap(m3, &s2[4][0]);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if ((*m4 > s1[i][j]) && (s1[i][j] < *m3))
            {
                m4 = &s2[i][j];
            }
        }
    }
    swap(m4, &s2[4][4]);
    // 输出
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j != 4)
                printf("%d ", s2[i][j]);
            else
                printf("%d\n", s2[i][j]);
        }
    }
    printf("\n");
}
void swap(int *m, int *n)
{
    int temp = 0;
    temp = *m;
    *m = *n;
    *n = temp;
}
*/
#include <stdio.h> //2246
#include <stdlib.h>
int main()
{
    int compare(int a, int b);
    void change(int *a, int *b);
    int num[25], *max, *min, i, j, n, temp, decrease, *tmp;
    while (scanf("%d", &num[0]) != EOF)
    {
        max = &num[0];
        min = &num[0];
        for (i = 1; i < 25; i++)
        {
            scanf("%d", &num[i]);
            if (compare(*max, num[i]) < 0)
                max = &num[i];
            if (compare(*min, num[i]) > 0)
                min = &num[i];
        }
        if (min == &num[12])
            min = max;
        if (max != &num[12])
            change(max, &num[12]);
        change(min, &num[0]);
        min = &num[0];
        for (i = 1; i < 4; i++)
        {
            decrease = num[12] - num[0];
            for (j = 0; j < 25; j++)
                if (compare(num[j], *min) > 0 && decrease > compare(num[j], *min))
                {
                    decrease = compare(num[j], *min);
                    tmp = &num[j];
                }
            if (i == 1)
            {
                change(tmp, &num[4]);
                min = &num[4];
            }
            else if (i == 2)
            {
                change(tmp, &num[20]);
                min = &num[20];
            }
            else if (i == 3)
            {
                change(tmp, &num[24]);
                min = &num[24];
            }
        }
        for (i = 0; i < 25; i++)
        {
            printf("%d ", num[i]);
            if ((i + 1) % 5 == 0)
                printf("\n");
        }
        printf("\n");
    }
    return 0;
}
int compare(int a, int b)
{
    return a - b;
}
void change(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
