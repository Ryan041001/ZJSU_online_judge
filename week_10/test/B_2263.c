#include <stdio.h>
#include <math.h>

int main()
{
    // 定义变量
    int r, v1, v2;
    // 定义圆周率
    double pi = acos(-1.0);
    // 定义变量
    double t1, t2, rx;
    // 循环输入
    while (scanf("%d %d %d", &r, &v1, &v2) != EOF)
    {
        // 计算圆周率
        rx = v1 * r / v2;
        // 计算t1
        t1 = (r - rx) / v1;
        // 计算t2
        t2 = (r * pi) / v2;
        // 判断t1和t2的大小
        if (t1 < t2)
        {
            // 输出Yes
            printf("Yes\n");
        }
        else
        {
            // 输出No
            printf("No\n");
        }
    }
}
