#include <stdio.h>
#include <stdlib.h>

int factor(int x);
int main()
{
    int i, num1 = 0, num2 = 0, n = 0, plus1 = 0, plus2 = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &num1, &num2);
        plus1 = factor(num1);
        plus2 = factor(num2);
        if (plus1 == num2 && plus2 == num1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
int factor(int x)
{
    int i, plus = 0;
    for (i = 1; i < x; i++)
    {
        if (x % i == 0)
            plus += i;
    }
    return (plus);
}