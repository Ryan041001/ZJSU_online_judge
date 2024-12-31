#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
    char s1[N], s2[N], s[N];
    while (~scanf("%s %s", s1, s2))
    {
        strcpy(s, s1);
        strcat(s, s2);
        int len = strlen(s);
        for (int i = 0; i < len - 1; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (s[j] < s[i])
                {
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        puts(s);
    }
}