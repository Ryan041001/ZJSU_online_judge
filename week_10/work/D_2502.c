#include <stdio.h>
#include <string.h>

int main()
{
    char a[1024], b[1024];
    gets(a);
    gets(b);
    int ia = 0, ib = 0;
    int la = strlen(a), lb = strlen(b);
    while (ia < la && ib < lb)
    {
        if (a[ia] <= b[ib])
        {
            printf("%c", a[ia]);
            ia++;
        }
        else
        {
            printf("%c", b[ib]);
            ib++;
        }
    }
    while (ia < la)
        printf("%c", a[ia++]);

    while (ib < lb)
        printf("%c", b[ib++]);
        
    printf("\n");
}