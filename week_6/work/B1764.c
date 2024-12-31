#include <stdio.h>
#include <string.h>
int main()
{
    int pos = 0, len_t = 0, len_s = 0;
    char t[80], s[80];
    scanf("%s\n%s\n%d", &t, &s, &pos);
    len_t = strlen(t);
    len_s = strlen(s);
    for (int i = 0; i < pos; i++)
        printf("%c", s[i]);
    for (int i = 0; i < len_t; i++)
        printf("%c", t[i]);
    for (int i = pos; i < len_s; i++)
        printf("%c", s[i]);
}