#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = {'\0'}, str2[20] = {'\0'};
    int count = 0, len1 = 0, len2 = 0;
    scanf("%s %s", str1, str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    for (int i = 0; i <= len1 - len2; i++)
    {
        if (strncmp(str1 + i, str2, len2) == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
}