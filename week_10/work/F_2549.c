#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char lower(char c)
{
    return (c >= 'A' && c <= 'Z') ? (c - 'A' + 'a') : c;
}

int check(char *str, char *word)
{
    int count[26] = {0};
    int lstr = strlen(str);
    for (int i = 0; i < lstr; i++)
        count[lower(str[i]) - 'a']++;
    int lword = strlen(word);
    for (int i = 0; i < lword; i++)
        count[lower(word[i]) - 'a']--;
    for (int i = 0; i < 26; i++)
        if (count[i] != 0)
            return 0;
    return 1;
}

int main()
{
    char dict[1024][10];
    int dict_idx = 0;
    char buf[10];
    while (~scanf("%s", buf) && strcmp(buf, "******"))
        strcpy(dict[dict_idx++], buf);

    while (~scanf("%s", buf))
    {
        char res[1024][10];
        int res_idx = 0;
        for (int i = 0; i < dict_idx; i++)
            if (check(buf, dict[i]))
                strcpy(res[res_idx++], dict[i]);

        for (int i = 0; i < res_idx; i++)
            for (int j = 0; j < res_idx - i - 1; j++)
                if (strcmp(res[j], res[j + 1]) > 0)
                {
                    strcpy(buf, res[j]);
                    strcpy(res[j], res[j + 1]);
                    strcpy(res[j + 1], buf);
                }

        for (int i = 0; i < res_idx; i++)
        {
            if (i)
                printf(" ");
            printf("%s", res[i]);
        }
        if (res_idx == 0)
            printf(":(");
        printf("\n");
    }
}