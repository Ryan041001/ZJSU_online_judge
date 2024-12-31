#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100] = {'\0'}, s2[100] = {'\0'};
    int m = 0;
    gets(s1);
    scanf("%d", &m);
    int len1 = strlen(s1);
    int i = 0, j = 0;
    for (i = m - 1; i < len1; i++)
    {
        s2[j]=s1[i];
        j++;
    }
    printf("%s", s2);
}