#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    scanf("%d", &a);
    b = a % 10;
    c = a % 100 / 10;
    e = a / 1000;
    d = a / 100 - e * 10;
    b = (b + 9) % 10;
    c = (c + 9) % 10;
    d = (d + 9) % 10;
    e = (e + 9) % 10;
    a = d + e * 10 + b * 100 + c * 1000;
    printf("%d\n", a);
}