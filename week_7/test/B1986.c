#include <stdio.h>
#include <string.h>
int main()
{
    char a[800] = {'\0'}, b[800] = {'\0'};
    // gets(a);
    // gets(b);
    while (gets(a) && gets(b))
    {
        int i = 0, j = 0, k = 0, k1 = 0, k2 = 0;
        char a_[800][800] = {'\0'}, b_[800][800] = {'\0'};
        int flag = 0;
        for (i = 0, j = 0; a[i] != '\0'; i++)
        {
            if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            {
                a_[k1][j] = a[i];
                j++;
            }
            else
            {
                k1++;
                j = 0;
            }
        }
        for (i = 0, j = 0; b[i] != '\0'; i++)
        {
            if ((b[i] >= 'a' && b[i] <= 'z') || (b[i] >= 'A' && b[i] <= 'Z'))
            {
                b_[k2][j] = b[i];
                j++;
            }
            else
            {
                k2++;
                j = 0;
            }
        }
        char common[800][800];
        for (i = 0; i < k1; i++)
            for (j = 0; j < k2; j++)
                if (!strcmp(a_[i], b_[j]))
                {
                    strcpy(common[k], a_[i]);
                    k++;
                }
        int max = 0;
        char maxstr[800] = {'\0'};
        for (i = 0; i < k; i++)
        {
            int len = strlen(common[i]);
            if (len != 0)
                flag = 1;
            if (len > max)
            {
                max = len;
                strcpy(maxstr, common[i]);
            }
        }
        if (flag == 0)
            puts("No common word!");
        else
            printf("%s\n", maxstr);
    }
}