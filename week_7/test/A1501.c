#include <stdio.h>
#include <string.h>
int main()
{
    // 定义一个字符数组，用于存储输入的字符串
    char s[80] = {'\0'};
    // 调用gets函数，将输入的字符串存入s数组中
    gets(s);
    // 遍历字符串s中的每一个字符
    for (int i = 0; i < strlen(s); i++)
        // 如果字符串s中的每一个字符是元音字母，则输出该字符
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            printf("%c", s[i]);
}