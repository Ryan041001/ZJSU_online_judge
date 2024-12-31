#include <stdio.h>
#include <string.h>
int main()
{
    int s[100] = {0}, odd[100] = {0}, even[100] = {0};
    // 输入数组
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &s[i]);
        if (s[i] == 0)
            break;
    }
    // 奇偶项分组
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            static int j = 0;
            odd[j] = s[i];
            j++;
        }
        else
        {
            static int k = 0;
            even[k] = s[i];
            k++;
        }
    }
    // 排序
    for (int i = 0; i < 100; i++)
    {
        for (int j = i + 1; j < 100; j++)
        {
            if (odd[j] == 0)
                break;
            if (odd[i] > odd[j])
            {
                odd[i] = odd[i] ^ odd[j];
                odd[j] = odd[i] ^ odd[j];
                odd[i] = odd[i] ^ odd[j];
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = i + 1; j < 100; j++)
        {
            if (even[j] == 0)
                break;
            if (even[i] > even[j])
            {
                even[i] = even[i] ^ even[j];
                even[j] = even[i] ^ even[j];
                even[i] = even[i] ^ even[j];
            }
        }
    }
    // 输出
    for (int i = 0; i < 100; i++)
    {
        static int j = 0, k = 0;
        if (i % 2 == 0)
        {
            if (odd[j] == 0)
                break;
            printf("%d ", odd[j]);
            j++;
        }
        else
        {
            if (even[k] == 0)
                break;
            printf("%d ", even[k]);
            k++;
        }
    }
}