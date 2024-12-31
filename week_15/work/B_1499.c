#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int len = strlen(s);
    int i;
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}