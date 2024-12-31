#include <stdio.h>
void swag(int *pm, int *pn);
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    swag(&m, &n);
    printf("%d %d", m, n);
}
void swag(int *pm, int *pn)
{
    int temp = *pm;
    *pm = *pn;
    *pn = temp;
}