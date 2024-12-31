#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char toLower(char *p)
{
    char c = *p;
    return (c >= 'A' && c <= 'Z') ? (c - 'A' + 'a') : c;
}

int isSalt(char *p)
{
    return toLower(p) == 's' && toLower(p + 1) == 'a' && toLower(p + 2) == 'l' && toLower(p + 3) == 't';
}

int hasSalt(char *str)
{
    while (*str)
    {
        if (isSalt(str))
            return 1;
        str++;
    }
    return 0;
}

int main()
{
    char buf[1024];
    while (fgets(buf, 1024, stdin) != NULL)
    {
        if (hasSalt(buf))
            printf("%s", buf);
    }
}