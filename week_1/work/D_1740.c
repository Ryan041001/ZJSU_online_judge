#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dc(char *head, int i, int j)
{
    // 获取字符串长度
    int lenth = strlen(head);
    // 判断是否相等
    int flag = 1;
    // 如果j大于字符串长度，则从i开始，从后往前遍历
    if (j > lenth)
    {
        while (i < lenth)
        {
            // 如果当前字符和最后一个字符相等，则i和lenth减1
            if (*(head + i - 1) == *(head + lenth - 1))
            {
                i++;
                lenth--;
            }
            // 否则，flag设置为0，跳出循环
            else
            {
                flag = 0;
                break;
            }
        }
    }
    // 如果j小于等于字符串长度，则从i开始，从前往后遍历
    else
    {
        while (i < j)
        {
            // 如果当前字符和最后一个字符相等，则i和j减1
            if (*(head + i - 1) == *(head + j - 1))
            {
                i++;
                j--;
            }
            // 否则，flag设置为0，跳出循环
            else
            {
                flag = 0;
                break;
            }
        }
    }
    // 返回flag
    return flag;
}
int main()
{
    // 初始化字符串
    char head[100] = {'\0'};
    // 初始化i和j
    int i = 0, j = 0;
    // 读取输入
    scanf("i=%d,j=%d", &i, &j);
    // 读取字符串
    scanf("%s", head);
    // 调用dc函数，判断是否相等
    if (dc(head, i, j))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}