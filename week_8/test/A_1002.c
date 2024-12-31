#include <stdio.h>

int main()
{
    int m, d;
    int day[63];
    int i = 1, t = 1, j;
    for (j = 1; j <= 62; j++)
    {
        day[j] = 1;
    }
    while (i <= 62)
    {
        day[i] = 0;
        t++;
        i += t;
    }
    while (scanf("%d/%d", &m, &d))
    {
        if (m == 0 && d == 0)
            break;
        int td = 0;
        if (m == 7)
        {
            int k;
            for (k = 1; k < d; k++)
            {
                if (day[k] == 0)
                {
                    td++;
                }
            }
        }
        else if (m == 8)
        {
            td = 7;
            int k;
            for (k = 1; k < d; k++)
            {
                if (day[k + 31] == 0)
                {
                    td++;
                }
            }
        }
        else
        {
            td = 10;
        }
        printf("%d\n", 10 - td);
    }
}
