#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100] = {'0'};
    int s2[100] = {0};
    gets(s1);
    int len = strlen(s1);
    int i = 0, j = 0;
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (s1[i]==s1[j])
            {
                s2[i]++;
                s2[j]++;
            }
        }
    }
    int pos;
    for (i = 0; i < len; i++)
    {
        if (s2[i] == 0)
        {
            pos = i;
            break;
        }
    }
    printf("%c", s1[pos]);
}