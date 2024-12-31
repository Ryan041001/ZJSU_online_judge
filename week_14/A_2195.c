#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = {'\0'};
    while (scanf("%s",str) != EOF)
    {
        char max = str[0];
        int i = 0;
        for (i = 0; i < strlen(str); i++)
        {
            if (max < str[i])
            {
                max = str[i];
            }
        }
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i]== max)
            {
                printf("%c(max)",str[i]);
            }
            else{
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
}