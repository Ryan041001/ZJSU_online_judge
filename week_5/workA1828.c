#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        char h[80] = {0}, s[80] = {0}, t[80] = {0};
        int i = 0, j = 0, k = 0, str1 = 0, str2 = 0;
        for (i = 0; i < n; i++)
            scanf("%d", &h[i]);
        for (i = 0; i < n; i++)
        {
            if (h[i] < 0)
            {
                s[j] = h[i];
                j++;
            }
            if (h[i] >= 0)
            {
                t[k] = h[i];
                k++;
            }
        }
        str1 = strlen(s);
        str2 = strlen(t);
        for (i = 0; i < str1; i++)
            printf("%d ", (int)s[i]);
        for (i = 0; i < str2; i++)
            if (i == str2 - 1)
                printf("%d\n", (int)t[i]);
            else
                printf("%d ", (int)t[i]);
    }
}
