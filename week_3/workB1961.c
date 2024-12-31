#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//求任何一个两位整数3次方的最后三位数字构成的数
int main()
{
    int i = 0, j = 0, k = 0;
    scanf("%d", &i);
    j = pow(i, 3);
    k = j % 1000;
    printf("%d\n", k);
}