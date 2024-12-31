#include <stdio.h>
#define MAX(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    (a) > (b) ? ((a) > (c) ? printf("%.3lf\n", a) : printf("%.3lf\n", c)) : ((b) > (c) ? printf("%.3lf\n", b) : printf("%.3lf\n", c));
    printf("%.3lf\n", MAX(a, b, c));
    return 0;
}