#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {

        for (int i = 0; i < n; i++)
        {
            char s1[10000], s2[10000];
            int num1[10000] = {0},
                num2[10000] = {0},
                len1, len2, i, j;
            scanf("%s%s", s1, s2);
            len1 = strlen(s1);
            len2 = strlen(s2);
            i = len1 - 1;
            j = 0;
            for (; i >= 0;)
            {
                num1[j] = s1[i] - 48;
                j++;
                i--;
            }
            for (i = len2 - 1, j = 0; i >= 0; i--)
            {

                num2[i] = s2[j] - 48;
                j++;
            }
            for (i = 0; i < (len2 > len1 ? len2 : len1); i++)
            {
                num1[i] += num2[i];

                if (num1[i] > 9)
                {
                    num1[i + 1]++;
                    num1[i] -= 10;
                }
            }
            if (num1[i])
            {
                for (j = i; j >= 0; j--)
                    printf("%d", num1[j]);
                printf("\n");
            }
            else
            {
                for (j = i - 1; j > -1; j--)
                    printf("%d", num1[j]);
                printf("\n");
            }
        }
    }
}
