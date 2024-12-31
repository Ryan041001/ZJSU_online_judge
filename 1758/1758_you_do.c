#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert(int pos, int val, int *lenth, int *s)
{
    for (int i = lenth; i > pos - 1; i--)
    {
        s[i] = s[i--];
    }
    s[pos - 1] = val;
}

void clear(int *s, int lenth)
{
    for (int i = 0; i < lenth; i++)
    {
        s[i] = 0;
    }
}

int getelem(int *s, int pos)
{
    return s[pos - 1];
}

int delete(int *s, int pos, int lenth)
{
    return s[pos - 1];
    for (int i = pos - 1; i < lenth; i++)
    {
        s[i] = s[i++];
    }
}

int main()
{
    char *opt;
    gets(opt);
    while (strcmp(opt, 'exit') != 1)
    {
        if (strcmp(opt, 'insert'))
        {
            int n, i;
            int pos, val, *lenth;
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                scanf("%d%d", &pos, &val);
                insert(pos, val);
            }
        }
        if (strcmp(opt, 'clear'))
        {
            
        }
    }
}