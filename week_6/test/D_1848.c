#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100], s1[50] = {'\0'}, s2[50] = {'\0'};
    int i = 0, j = 0;
    gets(s);
    int len = strlen(s);
    int pos = 0;
    for (i = 0; i < len; i++)
    {
        if (s[i] == '&')
        {
            pos = i;
        }
    }
    for (i = 0; i < pos; i++)
    {
        s1[i] = s[i];
    }
    for (i = len - 1; i > pos; i--)
    {
        s2[j] = s[i];
        j++;
    }
    strcmp(s1, s2) ? printf("NO") : printf("YES");
}