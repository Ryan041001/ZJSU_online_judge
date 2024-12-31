#include <stdio.h>
int main()
{
    int m = 0, s[6][6] = {0}, max = 0, min = 0, col = 0, row = 0, flag = 1;
    int i = 0, j = 0;
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &s[i][j]);
    for (i = 0; i < m; i++)
    {
        max = s[i][0];
        for (j = 0; j < m; j++)
            if (s[i][j] > max)
            {
                max = s[i][j];
                col = j;
            }
        min = s[i][col];
        for (j = 0; j < m; j++)
            if (s[j][col] < min)
            {
                max = s[j][col];
                row = j;
                flag = 0;
            }
        if (max == min)
        {
            flag = 1;
            for (j = 0; j < m; j++)
                if (s[i][j] == s[i][col] && j != col)
                    flag = 0;
        }
        else
            flag = 0;
    }
    if (flag == 1)
        printf("%d %d", col, row);
    else
        printf("NO");
}
/*#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, n = 0, arr[6][6] = {0}, max = 0, min = 0, row = 0, col = 0, flag = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    for (i = 0; i < n; i++)
    {
        max = arr[i][0];
        for (j = 0; j < n; j++)
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                col = j;
            }
        min = arr[i][col];
        for (j = 0; j < n; j++)
            if (arr[j][col] < min)
            {
                min = arr[j][col];
                row = j;
                flag = 0;
            }
        if (max == min)
        {
            flag = 1;
            for (j = 0; j < n; j++)
            {
                if (arr[i][j] == arr[i][col] && j != col)
                {
                    flag = 0;
                }
            }
            break;
        }
        else
            flag = 0;
    }
    if (flag == 1)
        printf("%d %d", row, col);
    else
        printf("NO");
}*/