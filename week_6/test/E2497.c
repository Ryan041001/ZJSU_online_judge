#include <stdio.h>
int main()
{
    int b = 0;
    float a = 0.0, c = 0.0, x = 0.0;
    scanf("%f%d%f", &a, &b, &c);
    for (x = 0.0; x < 1.0; x = x + 0.00001)
    {
        float m = a * 1.0;
        for (int i = 0; i < b; i++)
            m = m * (1.0 + x) - c;
        if (m > 0.001 && m < 0.009)
            printf("%.3f%%\n", x * 100);
    }
}