#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[80] = {0}, m[80] = {0};
    int i = 0, len = 0;
    gets(s);
    len = strlen(s);
    while (s[i] != '\0')
    {
        m[i] = s[len - i - 1];
        printf("%c", m[i]);
        i++;
    }
}