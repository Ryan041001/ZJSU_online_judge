#include <stdio.h>
int main()
{
    int n = 0, s[100] = {0}, sum = 1, minus = 0, t[100] = {0};
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
            scanf("%d", &s[i]);
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 0)
                sum *= s[i];
            else
            {
                sum *= s[i];
                minus += 1;
                t[j] = s[i];
                j++;
            }
        }
        if (minus % 2 != 0)
        {
            int min = t[0];
            for (j = 0; j < minus; j++)
                if (t[j] > min)
                    min = t[j];
            sum /= min;
        }
        printf("%d\n", sum);
    }
}