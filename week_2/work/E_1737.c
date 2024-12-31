#include <stdio.h>
int main()
{
    int size = 0, List[100] = {0};
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &List[i]);
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (List[i] > List[j])
            {
                List[i] = List[i] ^ List[j];
                List[j] = List[i] ^ List[j];
                List[i] = List[i] ^ List[j];
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
            printf("%d ", List[i]);
        else
            printf("%d", List[i]);
    }
}