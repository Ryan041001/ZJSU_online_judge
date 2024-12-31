/*
#include <stdio.h>
int zhishu();
int main()
{
    int m = 0, a = 0, b = 0, c = 0, i = 0;
    scanf("%d", &m);
    while (m != 0)
    {
        for (a = 3; a < m; a++)
        {
            for (b = a; b < m; b++)
            {
                c = m - a - b;
                if (c < b)
                {
                    continue;
                    continue;
                }
                if (zhishu(a) && zhishu(b) && zhishu(c))
                    i++;
            }
        }
        if (i == 0)
            printf("Error\n");
        else
            printf("%d\n", i);
        i = 0;
        scanf("%d", &m);
    }
}
int zhishu(int m)
{
    int flag = 0;
    for (int i = 2; i < m; i++)
    {
        if (m % i != 0)
            flag = 1;
        else if (m == i)
            flag = 1;
        else
            flag = 0;
        break;
    }
    return flag;
}
*/
#include <stdio.h>
#include <math.h>
int sushu(int n)
{
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    while (scanf("%d", &n), n != 0)
    {
        int cnt = 0;
        for (int i = 3; i < n; i += 2)
            if (sushu(i))
                for (int j = i; j < n - i; j += 2)
                    if (sushu(j))
                        for (int k = j; k <= n - i - j; k += 2)
                            if (sushu(k) && i + j + k == n)
                                cnt++;
        if (cnt == 0)
            printf("Error\n");
        else
            printf("%d\n", cnt);
    }
    return 0;
}