#include <stdio.h>
#include <stdlib.h>
//鸡兔同笼
int main()
{
    int n = 0, m = 0, rab = 0, chi = 0;
    scanf("%d%d", &n, &m);
    while (n != 0 && m != 0)
    {
        if (m % 2 == 0)
        {
            rab = (m - 2 * n) / 2;
            chi = n - rab;
            if ((rab >= 0 && chi > 0) || (chi >= 0 && rab > 0))
                printf("%d %d\n", chi, rab);
            else
                printf("Error\n");
            scanf("%d%d", &n, &m);
        }
        else
        {
            printf("Error\n");
            scanf("%d%d", &n, &m);
        }
    }
}