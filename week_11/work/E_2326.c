#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100] = {'\0'};

    while (scanf("%s", s1) != EOF)
    {
        char s2[100] = {'\0'};
        int len = strlen(s1);
        static int j = 0;
        for (int i = len; i > 0; i--)
        {
            s2[j] = s1[i-1];
            j++;
        }
        if (!strcmp(s1, s2))
        {
            printf("Yes\n");
            j=0;
        }
        else
        {
            printf("No\n");
            j=0;
        }
    }
}