#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ans[100] = {0};
    char num[100] = {0};
    int pos_ans = 0;
    int pos_num = 0;
    gets(str);
    char s;
    for (int i = 0; s = str[i]; i++)
    {
        if ('0' <= s && s <= '9')
        {
            num[pos_num++] = s;
        }
        else
        {
            ans[pos_ans++] = s;
        }
    }
    int pos = strlen(ans) / 2;
    char buf[100];
    strcpy(buf, ans + pos);
    strcpy(ans + pos, num);
    strcat(ans, buf);
    puts(ans);
}