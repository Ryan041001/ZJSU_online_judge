#include <stdio.h>
int main()
{
    int n, i, j, flat, a[30];
    int s = 0;
    scanf("%d", &n);
    i = 1;    // 第i封信
    a[i] = 2; // 第i封信在第几个信封
    while (1)
    {
        flat = 1;      // 判断，满足条件为1，不满足为0
        if (a[i] != i) // 第i封信不在第i个信封
        {
            for (j = 1; j < i; j++) // 循环，与前面放好的信做比对
            {
                if (a[j] == a[i]) // 第i封信和第j封信在同一个信封，不满足条件
                {
                    flat = 0;
                    break;
                }
            }
        }
        else
            flat = 0;       // 第i封信在第i个信封，不满足条件
        if (flat && i == n) // 已经到最后一封信了，前面的信也都可以放到满足条件的位上了
        {
            for (j = 1; j <= n; j++) // 所有条件均满足，输出
            {
                printf("%d", a[j]);
            }
            if (++s % 5 != 0)
            {
                printf(" ");
            }    // 输出一个解后，加空格
            else // s计算解的个数，每输出5个解，换行
            {
                printf("\n");
            }
        }
        if (flat && i < n) // 前面的信放到满足条件的位上了，且还没到最后一封信
        {
            i++;      // 下一封信封
            a[i] = 1; // 信封从信1开始试
            continue;
        }
        while (a[i] == n && i > 0) // 第i封信已经试到最后一个信封了，且i>0
            i--;                   // 调整或回溯，调整前面的信
        if (i > 0)
            a[i]++; // 把第i封信位置前移
        else
            break; // 前面没有信可以调位置了，break
    }
    printf("\ns=%d", s);
    return 0;
}