#include <stdio.h>
#include <string.h>

int main()
{
    char s[10] = {0};
    while (scanf("%s", s) != EOF)
    {
        int n = strlen(s), i;
        if (s[n - 1] >= '4')
        {
            s[n - 1] = '0';
            s[n - 2]++;
        }
        for (i = n - 2; i > 0; i--)
        {
            if (s[i] == '.')
                continue;
            if (s[i] > '6')
            {

                s[i] = '0';
                if (s[i - 1] == '.')

                    s[i - 2] += 1;
                else
                    s[i - 1] += 1;
            }
        }
        s[n - 1] = '\0';
        printf("%s\n", s);
    }
}
