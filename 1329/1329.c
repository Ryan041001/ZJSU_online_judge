#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        int i = 0;
        int sum[600] = {0};
        int res[100] = {0};
        scanf("%d%d", &n, &k);
        for (i = 0; i < k; i++)
        {
            scanf("%d%d", &sum[2 * i], &sum[2 * i + 1]);
        }
        for (i = 0; i < 2 * k; i++)
        {
            res[sum[i]]++;
        }
        int flag = 0;
        for (i = 1; i <= n; i++)
        {
            if (res[i] == 0 || res[i] % 2 != 0)
            {
                flag = 0;
                break;
            }
            else if (res[i] % 2 == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}