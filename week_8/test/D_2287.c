#include <stdio.h>
int HanoiTower(int n);
int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        printf("%d\n", HanoiTower(n));
        scanf("%d", &n);
    }
}
int HanoiTower(int n)
{
    int time = 0;
    if (n == 1)
        time = 1;
    else
        time = 2 * HanoiTower(n - 1) + 1;
    return time;
}