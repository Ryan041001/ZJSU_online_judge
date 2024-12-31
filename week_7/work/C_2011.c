#include <stdio.h>
#include <string.h>

int chachong(char *s, char m);
int main()
{
    char s[100] = {'\0'}, s_[100] = {'\0'};
    gets(s);
    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (chachong(s_, s[i]))
        {
            s_[j] = s[i];
            j++;
            printf("%c", s[i]);
        }
    }
}
int chachong(char *s, char m)
{
    int flag = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == m)
        {
            flag = 0;
            return flag;
        }
        else
            continue;
    }
    flag = 1;
    return flag;
}