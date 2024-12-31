#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score[10] = {0};
    int i, min = 0, max = 0;
    float grade = 0;
    for (i = 0; i < 10; i++)
    {
        if (i == 9)
            scanf("%d", &score[i]);
        else
            scanf("%d\n", &score[i]);
    }
    min = score[0];
    max = score[0];
    for (i = 0; i < 10; i++)
    {
        if (score[i] > max)
            max = score[i];
        if (score[i] < min)
            min = score[i];
        grade = grade + score[i];
    }
    grade = (grade - max - min) / 8;
    printf("%.3f", grade);
}