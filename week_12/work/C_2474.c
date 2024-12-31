/*
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50] = {'\0'}, s2[50] = {'\0'};
    scanf("%s%s", s1, s2);
    int len1 = strlen(s1), len2 = strlen(s2);
    for (int i = len2 - 1; i >= 0; i--)
    {
        printf("%c", s1[i]);
    }
    for (int i = len2 - 1; i >= 0; i--)
    {
        printf("%c", s2[i]);
    }
}
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50] = {'\0'}, s2[50] = {'\0'};
    scanf("%s%s", s1, s2);
    int len1 = strlen(s1), len2 = strlen(s2);

    // 将s1逆序并连接到s2的后面
    for (int i = len1 - 1; i >= 0; i--)
    {
        s2[len2 + i] = s1[i];
    }

    // 逆序输出连接后的字符串s2
    for (int i = len1 + len2 - 1; i >= 0; i--)
    {
        printf("%c", s2[i]);
    }

    return 0;
}