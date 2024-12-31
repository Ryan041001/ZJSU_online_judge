#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float x1 = 0.0, x2 = 0.0;
    while (scanf("%f%f%f", &a, &b, &c) != EOF)
    {
        if (b * b - 4 * a * c >= 0)
        {
            x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
            x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
            printf("%.2f %.2f\n", x1, x2);
        }
        else
            printf("NO\n");
    }
}