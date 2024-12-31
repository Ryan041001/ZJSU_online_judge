#include <stdio.h>

// 输入函数
int Input(int s[])
{
    int count = 0;
    int input;
    while (1)
    {
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }
        s[count] = input;
        count++;
    }
    return count;
}

// 统计函数
void statistics(int n, int s[], int *max, int *min, float *avg)
{
    *max = *min = s[0];
    float sum = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] > *max)
        {
            *max = s[i];
        }
        if (s[i] < *min)
        {
            *min = s[i];
        }
        sum += s[i];
    }
    *avg = sum / n;
}

int main()
{
    int s[100];                         // 假设最多输入100个整数
    int n = Input(s);                   // 获取输入的整数个数
    int max = s[0], min = s[0];         // 初始化最大值和最小值为第一个数
    float avg;                          // 平均值
    statistics(n, s, &max, &min, &avg); // 计算最大值、最小值和平均值
    printf("Num=%d\n", n);              // 输出数据个数
    printf("Max=%d\n", max);            // 输出最大值
    printf("Min=%d\n", min);            // 输出最小值
    printf("Avg=%.3f\n", avg);          // 输出平均值，保留三位小数
    return 0;
}