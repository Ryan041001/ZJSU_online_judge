#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n <= 100 && n >= 90)
            printf("A\n");
        else if (n < 90 && n >= 80)
            printf("B\n");
        else if (n < 80 && n >= 70)
            printf("C\n");
        else if (n < 70 && n >= 60)
            printf("D\n");
        else if (n >= 0 && n < 60)
            printf("E\n");
        else
            printf("Score is error!\n");
    }
}