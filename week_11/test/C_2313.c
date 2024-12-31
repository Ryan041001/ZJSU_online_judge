#include <stdio.h>
#define MAX_SIZE 1000

void Num(int a[])
{
    int hash[MAX_SIZE] = {0};
    int max_count = 0;
    int max_num = 0;
    for (int i = 0; i < 10; i++)
    {
        hash[a[i]]++;
        if (hash[a[i]] > max_count)
        {
            max_count = hash[a[i]];
            max_num = a[i];
        }
    }
    printf("%d\n", max_num);
    printf("%d\n", max_count);
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    Num(a);
    return 0;
}