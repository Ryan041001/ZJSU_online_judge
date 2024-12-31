#include <stdio.h>
#include <string.h>

char a[500], b[500];
int c[500], d[500], e[500], g[500], sum[500], sum1[500];

int main(void)
{
    while (~scanf("%s %s", a, b))
    {
        memset(c, 0, 500);
        memset(d, 0, 500);
        memset(e, 0, 500);
        memset(g, 0, 500);
        memset(sum, 0, 500);
        memset(sum1, 0, 500);
        int a0 = strlen(a), b0 = strlen(b), ca = 0, cb = 0, i, j, m, k = 0, k1 = 0;
        for (i = 0; a[i] != '\0'; i++)
        {
            if (a[i] == '.')
            {
                ca = 1;
                break;
            }
        }
        m = 0;
        for (j = i - 1; j >= 0; j--)
        {
            c[m++] = a[j] - '0';
        }
        m = 0;
        for (j = i + 1; j < a0; j++)
        {
            d[m++] = a[j] - '0';
        }
        for (i = 0; b[i] != '\0'; i++)
        {
            if (b[i] == '.')
            {
                ca = 1;
                break;
            }
        }
        m = 0;
        for (j = i - 1; j >= 0; j--)
        {
            e[m++] = b[j] - '0';
        }
        m = 0;
        for (j = i + 1; j < b0; j++)
        {
            g[m++] = b[j] - '0';
        }
        m = 0;
        for (i = 499; i >= 0; i--)
        {
            sum[i] += d[i] + g[i];
            if (i == 0 && sum[i] >= 10)
            {
                sum[i] -= 10;
                sum1[0]++;
            }
            if (i != 0 && sum[i] >= 10)
            {
                sum[i] -= 10;
                sum[i - 1]++;
            }
        }
        for (i = 0; i <= 499; i++)
        {
            sum1[i] += c[i] + e[i];
            if (sum1[i] >= 10)
            {
                sum1[i] -= 10;
                sum1[i + 1]++;
            }
        }
        for (i = 499; i >= 0; i--)
        {
            if (sum1[i] != 0)
            {
                break;
            }
        }
        if (i == -1)
            k1 = 1;
        if (k1 == 1)
        {
            printf("0");
            for (i = 499; i >= 0; i--)
            {
                if (sum[i] != 0)
                    break;
            }
            if (i >= 0)
                printf(".");
            for (j = 0; j <= i; j++)
            {
                printf("%d", sum[j]);
            }
            printf("\n");
        }
        else
        {
            for (j = i; j >= 0; j--)
                printf("%d", sum1[j]);
            for (i = 499; i >= 0; i--)
            {
                if (sum[i] != 0)
                    break;
            }
            if (i >= 0)
                printf(".");
            for (j = 0; j <= i; j++)
            {
                printf("%d", sum[j]);
            }
            printf("\n");
        }
    }
    return 0;
}