#include <stdio.h>
int main()
{
    int score[10] = {0}, num[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &score[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        num[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (score[num[i]] < score[num[j]])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (score[num[i]] == score[num[0]])
        {
            printf("%d\n", num[i]);
        }
    }
}