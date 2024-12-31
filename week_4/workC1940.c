#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, lenth = 0, L = 0, M = 0, start[100] = {0}, end[100] = {0};
    scanf("%d%d", &L, &M);
    for (i = 0; i < M; i++)
        scanf("%d%d", &start[i], &end[i]);
    for (i = 0; i < M; i++)
    {
        lenth = lenth + end[i] - start[i] + 1;
        for (j = i + 1; j < M; j++)
        {
            if (start[i] > start[j] && start[i] < end[j])
                lenth = lenth - end[j] + start[i] - 1;
            else if (start[j] > start[i] && start[j] < end[i])
                lenth = lenth - end[i] + start[j] - 1;
        }
    }
    printf("%d", L - lenth + 1);
}