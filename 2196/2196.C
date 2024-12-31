#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int judge(char *m, char *n)
{
    int len1 = strlen(m);
    int len2 = strlen(n);
    int i, j;
    int flag = 0;
    for (i = 0; i < len1; i++)
    {
        if (m[i] == n[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int m;
        scanf("%d", &m);
        int i;
        char num[100][11] = {'\0'};
        for (i = 0; i < m; i++)
        {
            scanf("%s", num[i]);
        }
        int j;
        int flag = 1;
        for (i = 0; i < m; i++)
        {
            for (j = i + 1; j < m; j++)
            {
                int len1 = strlen(num[i]);
                int len2 = strlen(num[j]);
                if (len1 > len2)
                {
                    char temp[11] = {'\0'};
                    strcpy(temp, num[i]);
                    strcpy(num[i], num[j]);
                    strcpy(num[j], temp);
                }
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = i + 1; j < m; j++)
            {
                if (judge(num[i], num[j]))
                {
                    flag = 0;
                    break;
                }
            }
        }
        flag ? printf("YES\n") : printf("NO\n");
    }
}