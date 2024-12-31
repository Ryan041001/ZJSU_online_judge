#include <stdio.h>
#include <string.h>

int main()
{
    char s[80];
    int i, num = 0, str = 0;
    gets(s);
    str = strlen(s);
    for (i = 0; i < str; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            num = num * 16 + s[i] - '0';
        else if (s[i] >= 'A' && s[i] <= 'F')
            num = num * 16 + s[i] - 'A' + 10;
        else if (s[i] >= 'a' && s[i] <= 'f')
            num = num * 16 + s[i] - 'a' + 10;
    }
    printf("%d", num);
}