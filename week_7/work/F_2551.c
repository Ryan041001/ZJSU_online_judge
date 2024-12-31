/*#include <stdio.h>
#include <stdlib.h>

int factorsum(int x);
int main()
{
    int num1 = 0, num2 = 0, plus1 = 0, plus2 = 0;
    while (scanf("%d%d", &num1, &num2) != EOF)
    {
        plus1 = factorsum(num1);
        plus2 = factorsum(num2);
        if (plus1 == num2 && plus2 == num1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
int factorsum(int x)
{
    int i, plus = 0;
    for (i = 1; i < x; i++)
    {
        if (x % i == 0)
            plus += i;
    }
    return plus;
}*/
#include <stdio.h>

int PrdtOfTrueFac(int x)
{
    int product = 1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            product += i;
        }
    }
    return product;
}

int main()
{
    int m = 0;
    int n = 0;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        if (PrdtOfTrueFac(m) == n && PrdtOfTrueFac(n) == m)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}