#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 0, s[6][6] = {0}, i, j, flag = 1;
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &s[i][j]);
    /*for (i = 1; i < m; i++)
    {
        for (j = 0; j < m; j++)

            if (s[i][j] != s[i - 1][j - 1])
            {
                flag = 0;
                break;
            }
    }*/
    for (i = 1; i < m; i++)
    {
        for (j = 0; j < i; j++)

            if (s[i][j] != 0)
            {
                flag = 0;
                break;
            }
    }
    if (flag == 0)
        printf("NO");
    else
        printf("YES");
}