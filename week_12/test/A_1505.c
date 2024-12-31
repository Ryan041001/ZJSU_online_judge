#include <stdio.h>
#define div(a, b) (a % b)
int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d%d", &a, &b);
    c = div(a, b);
    printf("%d", c);
}