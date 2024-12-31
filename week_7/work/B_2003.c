#include <stdio.h>
#include <string.h>

int main()
{
    char s[800] = {'\0'};
    gets(s);
    for (int i = 0; i < strlen(s); i++)
        if ((s[i] == 'i' && s[i + 1] == 's') || (s[i] == 'i' && s[i + 1] == 'S') || (s[i] == 'I' && s[i + 1] == 's') || (s[i] == 'I' && s[i + 1] == 'S'))
        {
            i++;
        }
        else
            printf("%c", s[i]);
}