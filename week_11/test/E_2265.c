#include <stdio.h>

int strcmp(char *p1, char *p2);
int main()
{
    char s1[800] = {'\0'}, s2[800] = {'\0'};
    int m = 0;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%s %s", s1, s2);  
        printf("%d\n", strcmp(s1, s2)); 
    }
}
int strcmp(char *p1, char *p2)
{
    int m = 0;
    if (*p1 == *p2)
    {
        *p1++;
        *p2++;
    }
    if (*p1 > *p2)
    {
        m = *p1 - *p2;
    }
    else
    {
        m = -(*p2 - *p1);
    }
    return m;
}