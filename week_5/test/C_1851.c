#include <stdio.h>
#define N 400

int dp[N][N];

int w[N];

int v[N];

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int total;
    int maxWeight;
    scanf("%d%d", &total, &maxWeight);
    for (int i = 1; i <= total; i++)
    {
        scanf("%d%d", &w[i], &v[i]);
    }
    for (int i = 1; i <= total; i++)
    {
        for (int j = 1; j <= maxWeight; j++)
        {
            if (j < w[i])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    printf("%d\n", dp[total][maxWeight]);
}