#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    gets(s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    puts(s);
}