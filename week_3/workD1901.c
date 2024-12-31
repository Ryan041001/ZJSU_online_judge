#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0, n = 1;
    float s = 0.0;
    scanf("%d", &a);
    while (s < a)
    {
        s += 1.0 / n;
        n++;
    }
    printf("s=%.4f,n=%d\n", s, n-1);
}