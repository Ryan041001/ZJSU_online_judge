#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0, i = 0;
    float num[50];
    float max = 0, min = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%f", &num[i]);
    max = num[0];
    min = num[0];
    for (i = 0; i < n; i++)
    {
        if (num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }
    for (i = 0; i < n; i++)
    {
        num[i] = (num[i] - min) / (max - min);
        printf("%.3f ", num[i]);
    }
}