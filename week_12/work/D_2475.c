#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print(char *name[], int n);
void sort(char *name[], int n);
int main()
{
    int n;
    char *str[1000];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        str[i] = (char *)malloc(4);
        gets(str[i]);
    }
    sort(str, n);
    print(str, n);
    return 0;
}
void sort(char *name[], int n)
{
    int i, j, p;
    char tmp[1000];
    for (i = 0; i < n - 1; i++)
    {
        p = i;
        for (j = i + 1; j < n; j++)
            if (strcmp(name[p], name[j]) > 0)
                p = j;
        if (p != i)
        {
            strcpy(tmp, name[p]);
            strcpy(name[p], name[i]);
            strcpy(name[i], tmp);
        }
    }
}
void print(char *name[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s", name[i]);
        if (i < n - 1)
            printf("\n");
    }
}
