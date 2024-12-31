#include <stdio.h>
int main()
{
    float A[80][80] = {0.0}, B[80][80] = {0.0};
    int m = 0;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            scanf("%f", &A[i][j]);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            B[i][j] = A[i][j] / A[i][i] * 1.0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
        {
            if (j == m - 1)
                printf("%.2f\n", B[i][j]);
            else
                printf("%.2f ", B[i][j]);
        }
}