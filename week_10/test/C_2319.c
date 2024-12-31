#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    // 如果n等于0，返回1
    if (n == 0)
    {
        return 1;
    }
    // 否则返回n乘以阶乘的值
    else
    {
        return n * factorial(n - 1);
    }
}

// 计算组合数
int combination(int n, int k)
{
    // 返回组合数的值
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main()
{
    // 读取n的值
    int n;
    while (scanf("%d", &n) != EOF)
    {
        // 创建一个数组，用来存储输入的分数
        int score[1000];
        // 遍历输入的分数
        for (int i = 0; i < n + 1; i++)
            // 读取输入的分数
            scanf("%d", &score[i]);

        int target;
        // 初始化概率
        float posibility = 0;
        // 读取target的值
        scanf("%d", &target);
        // 遍历输入的分数
        for (int i = 0; i < n; i++)
        {
            // 如果分数等于target，概率加上组合数除以2的n次方
            if (score[i] == target)
            {
                posibility = posibility + combination(n, i) / pow(2, n);
            }
        }
        // 输出概率
        printf("%.6f\n", posibility);
    }
}