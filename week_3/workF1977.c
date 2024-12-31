#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n = 0;
    float x = 0.0, s = 0.0;
    scanf("%d", &n);
    s = 100 * (1 - pow(0.5, n)) / 0.25 - 100;
    x = 100 * pow(0.5, n);
    printf("共经过%.5f米\n第n次反弹%.5f米\n", s, x);
}