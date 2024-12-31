#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 0, s[10][10] = {0}, i, j;
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &s[i][j]);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d", s[j][i]);
            if (j == m - 1)
                printf("\n");
            else
                printf(" ");
        }
    }
}