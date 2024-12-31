#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char buf[1024];
    fgets(buf, 1024, stdin);
    int len = strlen(buf);
    int flag = 0;
    for (int i = 0; i < len; i++)
    {
        if ((buf[i] >= '0' && buf[i] <= '9') || (buf[i] >= 'a' && buf[i] <= 'z') || (buf[i] >= 'A' && buf[i] <= 'Z'))
        {
            printf("%c", buf[i]);
            flag = 1;
        }
        else if (flag == 1)
        {
            printf("\n");
            flag = 0;
        }
    }
}