#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // 定义变量
    char operation;
    int number;
    // 循环读取输入
    while (scanf("%c %d", &operation, &number) != EOF)
    {
        // 如果操作是B，则将二进制转换为十进制
        if (operation == 'B')
        {
            // 将二进制转换为十进制
            int decimal_number = 0;
            int i = 0;
            while (number > 0)
            {
                decimal_number += (number % 10) * pow(2, i);
                number /= 10;
                i++;
            }
            printf("%d\n", decimal_number);
        }
        // 如果操作是D，则将十进制转换为二进制
        else if (operation == 'D')
        {
            // 将十进制转换为二进制
            int binary_number[8];
            int i = 0;
            while (number > 0)
            {
                binary_number[i] = number % 2;
                number /= 2;
                i++;
            }
            // 输出补齐8位的二进制数
            for (int j = i; j < 8; j++)
            {
                printf("0");
            }
            for (int j = i - 1; j >= 0; j--)
            {
                printf("%d", binary_number[j]);
            }
            printf("\n");
        }
    }
}