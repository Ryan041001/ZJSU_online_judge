#include <stdio.h>
#include <string.h>
void fun(char a[], char b[], char c[])
{
    int i, j, jinw = 0, ci = 0, x, y, z, k;
    char tmp;
    i = strlen(a) - 1;
    j = strlen(b) - 1;
    while (i >= 0 || j >= 0) // 检索直到两数组都被加完
    {
        if (i < 0) // 当a数组被加完时
            x = 0;
        else
            x = a[i] - '0';
        if (j < 0) // 当b数组被加完时
            y = 0;
        else
            y = b[j] - '0';

        z = x + y;

        if (jinw) // 如果有进位
            z++;
        if (z > 9) // 考虑当前数累加是否会导致下次计算进位
        {
            jinw = 1;
            z %= 10;
        }
        else
            jinw = 0;
        c[ci++] = z + '0';
        i--;
        j--;
    }
    if (jinw) // 考虑最后一位是否还有进位
        c[ci++] = '1';
    c[ci] = '\0'; // 为C数组添加终止符
    k = strlen(c);
    for (i = 0; i < k / 2; i++)
    {
        tmp = c[i];
        c[i] = c[k - i - 1];
        c[k - i - 1] = tmp;
    }
    printf("%s\n", c);
}
int main()
{
    char a[600], b[600], c[600];
    while (scanf("%s\n%s", a, b) != EOF)
    {
        fun(a, b, c);
    }
    return 0;
}