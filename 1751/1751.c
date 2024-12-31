#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char com[10] = {'\0'};
    char name[100][100] = {'\0'};
    int i = 0;
    while (scanf("%s", com) != EOF)
    {
        if (strcmp(com, "Add") == 0)
        {
            scanf("%s", name[i++]);
        }
        else if (strcmp(com, "Query") == 0)
        {
            char QueryName[100] = {'\0'};
            scanf("%s", QueryName);
            for (int j = 0; j <= i; j++)
            {
                if (strcmp(QueryName, name[j]) == 0)
                {
                    printf("Yes\n");
                    break;
                }
                else if (j == i)
                {
                    printf("No\n");
                }
            }
        }
        else if (strcmp(com, "Delete") == 0)
        {
            char DeleteName[100] = {'\0'};
            scanf("%s", DeleteName);
            for (int j = 0; j < i; j++)
            {
                if (strcmp(DeleteName, name[j]) == 0)
                {
                    name[j][0] = '\0';
                }
            }
        }
        else if (strcmp(com, "Print") == 0)
        {
            int j = 0, k = 0;
            for (j = 0; j < i - 1; j++)
            {
                for (k = j + 1; k < i; k++)
                {
                    if (strcmp(name[j], name[k]) > 0)
                    {
                        char t[210];
                        strcpy(t, name[j]);
                        strcpy(name[j], name[k]);
                        strcpy(name[k], t);
                    }
                }
            }
            for (int j = 0; j < i; j++)
            {
                if (name[j][0] != '\0')
                {
                    printf("%s\n", name[j]);
                }
            }
        }
    }
}