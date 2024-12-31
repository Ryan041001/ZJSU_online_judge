#include <stdio.h>
int main()
{
    int x = 0, m = 0;
    scanf("%d", &x);
    printf("%d=", x);
    m = x;
    for (int i = 2; i < x; i++)
        if (m % i == 0)
        {
            m = m / i;
            if (m == 1)
                printf("%d", i);
            else
                printf("%d*", i);
            while (m > 0)
                if (m % i == 0)
                {
                    m = m / i;
                    if (m == 1)
                        printf("%d", i);
                    else
                        printf("%d*", i);
                }
                else
                    break;
        }
}