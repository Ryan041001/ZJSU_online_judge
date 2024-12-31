#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(char *name[], int n)
{
    int i, j;
    char buf[100];
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(buf, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], buf);
            }
        }
    }
}
int main()
{
    char *s1[20];
    int i, n;
    while (scanf("%d", &n) && n != 0)
    {
        getchar();
        for (i = 0; i < n; i++)
        {
            s1[i] = (char *)malloc(4);
            gets(s1[i]);
        }
        sort(s1, n);
        for (i = 0; i < n; i++)
        {
            printf("%s", s1[i]);
            printf("\n");
        }
    }
}
