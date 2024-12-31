#include <stdio.h>
#include <math.h>

int factorial_cnt(int n);
int main()
{
    int n, s[100] = {0};
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
            scanf("%d", &s[i]);
        int cnt = 0, cnt_max = 0, num_max = 0;
        for (int i = 0; i < n; i++)
        {
            cnt = factorial_cnt(s[i]);
            if (cnt > cnt_max)
            {
                cnt_max = cnt;
                num_max = s[i];
            }
            else if (cnt == cnt_max && s[i] < num_max)
            {
                num_max = s[i];
            }
        }
        printf("%d\n", num_max);
    }
}
int factorial_cnt(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cnt++;
    return cnt;
}