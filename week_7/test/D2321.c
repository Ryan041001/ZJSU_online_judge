#include <stdio.h>
#include <string.h>
int main()
{
    char s[800] = {'\0'}, s_[800][800] = {'\0'};
    char we[3] = "we", you[4] = "you";
    int i = 0, j = 0, k = 0;
    while (gets(s))
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s_[k][j] = s[i];
                j++;
            }
            else
            {
                k++;
                j = 0;
            }
        }
        for (i = 0; i <= k; i++)
            if (!strcmp(s_[i], we))
                strcpy(s_[i], you);
        for (i = 0; i <= k; i++)
        {
            if (i < k)
                printf("%s ", s_[i]);
            else
                printf("%s\n", s_[i]);
        }
    }
}
/*for (i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'w' && s[i + 1] == 'e')
                printf("you");
            else
                printf("%c", s[i]);
        }*/