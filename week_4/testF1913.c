#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time1 = 0, time2 = 0, h1 = 0, h2 = 0, m1 = 0, m2 = 0, h3 = 0, m3 = 0;
    scanf("%d%d", &time1, &time2);
    h1 = time1 / 100;
    h2 = time2 / 100;
    m1 = time1 % 100;
    m2 = time2 % 100;
    m3 = m2 - m1;
    h3 = h2 - h1;
    if (m3 < 0)
    {
        m3 += 60;
        h3--;
    }
    printf("%d hrs %02d mins", h3, m3);
}