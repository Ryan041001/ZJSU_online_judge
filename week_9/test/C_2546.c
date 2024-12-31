#include <stdio.h>
#include <string.h>

int main()
{
    char name_1[80] = {'\0'}, name_2[80] = {'\0'};
    scanf("%s%s", name_1, name_2);
    while (name_1[0] != '0' && name_2[0] != '0')
    {
        int len_1 = 0, len_2 = 0;
        len_1 = strlen(name_1);
        len_2 = strlen(name_2);
        if (((name_1[len_1 - 1] - 'a') % 2 == 0) && ((name_2[len_2 - 1] - 'a') % 2 == 0))
            printf("Yes\n");
        else
            printf("No\n");
        scanf("%s%s", name_1, name_2);
    }
}