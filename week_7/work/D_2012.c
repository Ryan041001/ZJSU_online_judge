#include <stdio.h>
#include <string.h>
int main()
{
    char s[80] = {'\0'};
    int type = 0, flag[4] = {1,1,1,1}, m = 0;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%s", &s);
        if (strlen(s) < 6)
        {
            printf("Not safe\n");
            continue;
        }
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                if (flag[0] == 1)
                {
                    type++;
                    flag[0] = 0;
                }
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (flag[1] == 1)
                {
                    type++;
                    flag[1] = 0;
                }
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                if (flag[2] == 1)
                {
                    type++;
                    flag[2] = 0;
                }
            }
            else
            {
                if (flag[3] == 1)
                {
                    type++;
                    flag[3] = 0;
                }
            }
        }
        if (type == 1)
            printf("Not safe\n");
        else if (type == 2)
            printf("Medium Safe\n");
        else
            printf("Safe\n");
        for(int i=0;i<4;i++)
            flag[i]=1;
        type = 0;
    }
}
/*#include <stdio.h>
#include <string.h>
void na(char a[])
{
    int b = 0, c = 0, d, i, e = 0, f = 0, n;
    d = strlen(a);
    if (d < 6)
        printf("Not Safe\n");
    else
    {
        for (i = 0; i < d; i++)
            if (a[i] < 58 && a[i] > 47)
                b = 1;
            else if (a[i] > 64 && a[i] < 91)
                c = 1;
            else if (a[i] > 96 && a[i] < 123)
                e = 1;
            else
                f = 1;
    }
    n = b + c + e + f;
    switch (n)
    {
    case 1:
        printf("Not Safe\n");
        break;
    case 2:
        printf("Medium Safe\n");
        break;
    case 3:
        printf("Safe\n");
        break;
    case 4:
        printf("Safe\n");
        break;
    }
}
int main()
{
    char a[21];
    int j, k;
    scanf("%d\n", &j);
    for (k = 0; k < j; k++)
    {
        gets(a);
        na(a);
    }
}*/