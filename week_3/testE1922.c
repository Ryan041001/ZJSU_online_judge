#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, i = 0, j = 0;
    scanf("%d", &i);
    a = i / 1000;
    b = (i - a * 1000) / 100;
    c = i / 10 - a * 100 - b * 10;
    d = i % 10;
    j = a + b + c + d;
    printf("%d\n", j);
}