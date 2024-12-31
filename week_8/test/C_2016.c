#include <stdio.h>
#include <math.h>

int main()
{
    int num[800][3];
    int a = 0, b = 0, s;
    int i = 0, j = 0, p = 0;
    scanf("%d", &s);
    for (i = 1; i <= s / 3; i++)
    {
        for (j = i + 1; j <= (s - i) / 2; j++)
        {
            num[p][0] = i;
            num[p][1] = j;
            num[p][2] = s - i - j;
            p++;
        }
    }
    a = 0;
    while (a < p)
    {
        b = a + 1;
        while (b < p)
        {
            if ((num[a][0] * num[a][0] + num[a][1] * num[a][1] + num[a][2] * num[a][2]) == (num[b][0] * num[b][0] + num[b][1] * num[b][1] + num[b][2] * num[b][2]))
                printf("(%d,%d,%d):(%d,%d,%d)\n", num[a][0], num[a][1], num[a][2], num[b][0], num[b][1], num[b][2]);
            b++;
        }
        a++;
    }
}