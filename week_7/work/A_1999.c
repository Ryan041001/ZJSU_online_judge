#include <stdio.h>
#include <string.h>

int swag(char s[800], char t[800]);
int main()
{
    char s[5][800] = {'\0'};
    for (int i = 0; i < 5; i++)
        gets(s[i]);
    for (int i = 0; i < 5; i++)
        for (int j = i; j < 5; j++)
            if (strcmp(s[i], s[j]) < 0)
                swag(s[i], s[j]);
    printf("%s\n", s[4]);
    for (int i = 1; i < 4; i++)
        printf("%s\n", s[i]);
    printf("%s\n", s[0]);
}
int swag(char s[800], char t[800])
{
    int temp[800];
    strcpy(temp, s);
    strcpy(s, t);
    strcpy(t, temp);
}