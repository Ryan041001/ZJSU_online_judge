#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0, b = 0, c = 0, d = 0, i = 0;
    char str[20] = {0};
    for (i = 0; i < 20; i++)
        scanf("%c", &str[i]);
    for (i = 0; i < 20; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            a++;
        else if (str[i] >= '0' && str[i] <= '9')
            b++;
        else if (str[i] == ' ' || str[i] == '\n')
            c++;
        else
            d++;
    }
    printf("%d个英文字母\n%d个数字字符\n%d个空格或回车\n%d个其他字符\n", a, b, c, d);
}