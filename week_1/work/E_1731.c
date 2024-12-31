#include <stdio.h>
#include <stdlib.h>

void Append(int *A, int size)
{
    int i = 0, j = 0;
    int val = *(A);
    for (i = 1; i < size; i++)
    {
        if (*(A + i) > val)
        {
            for (j = size - 1; j > i; j--)
            {
                *(A + j) = *(A + j - 1);
            }
            *(A + i) = val;
            break;
        }
        else if (val > *(A + size - 1))
        {
            *(A + size) = val;
        }
    }
}
int main()
{
    int A[100] = {0}, size = 0;
    int i = 0;
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
    Append(A, size);
    for (i = 1; i < size + 1; i++)
    {
        printf("%d ", A[i]);
    }
}