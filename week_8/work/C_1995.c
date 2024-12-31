#include <stdio.h>
#include <string.h>
char *findshort(char s1[], char s2[]);
int main()
{
    char s[800] = {'\0'}, t[800][800] = {'\0'}, shortest[800], min[800] = {'\0'};
    gets(s);
    int j = 0, k = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            t[k][j] = s[i];
            j++;
        }
        else
        {
            k++;
            j = 0;
        }
    }
    j = k;
    for (int i = 0; i < j; i++)
    {
        for (k = i + 1; k < j; k++)
        {
            if (k > 1)
            {
                strcpy(min, findshort(t[i], t[k]));
                strcpy(shortest, findshort(shortest, min));
            }
            else
            {
                strcpy(shortest, findshort(t[i], t[k]));
            }
        }
    }
    printf("%s", shortest);
}
char *findshort(char s1[], char s2[])
{
    int len1 = 0, len2 = 0;
    len1 = strlen(s1);
    len2 = strlen(s2);
    if (len1 <= len2)
        return (char *)s1;
    else
        return (char *)s2;
}
/*#include <stdio.h>
void findshort(char *a, char *ws)
{
    char *p = a;
    int min = 1000;
    char minw[20];
    while (*p != '\0')
    {
        if (*p == ' ')
        {
            p++;
            continue;
        }
        else
        {
            int len = 0;
            while (*(p + len) != ' ' && *(p + len) != '\0')
                len++;
            if (len < min)
            {
                min = len;
                int i;
                for (i = 0; i < len; i++)
                {
                    minw[i] = p[i];
                }
                minw[i] = '\0';
            }
            p += len;
        }
    }
    p = minw;
    int cnt = 0;
    while (*p != '\0')
    {
        ws[cnt++] = *p;
        p++;
    }
    ws[cnt] = '\0';
}

int main()
{
    char a[1000], ws[20];
    gets(a);
    findshort(a, ws);
    printf("%s", ws);
    return 0;
}*/
