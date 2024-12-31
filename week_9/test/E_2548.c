/*#include <stdio.h>
int f(int n);
int main()
{
    int n;
    scanf("%d", &n);
}
int f(int n)
{
    int m = 0;
    while (n > 0)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
}*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void bubble_sort(int*, int);
int To_dec(int* num, int n)
{
	/*从低位开始处理的好处在于如果最高位是"0",也能正确处理.*/
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + num[n - 1 - i] * pow(10, i);
	}
	return s;
}
void To_arr(int num, int* num_arr)
{
	for (int i = 0; num > 0; i++)
	{
		num_arr[i] = num % 10;
		num = num / 10;
	}
}
int main()
{
	int n = 4;
	int cnt;
	char num_c[5];/*如果是4的话,在使用%s读入4个数字后在额外填充
				  '\0'时发现没空间了,将导致stack corrupted */
	int num[4];/*数码从小到大*/
	int num_reverse[4];/*数码从大到小*/
	int num_save[1000];/*保存十进制数(判断过程)*/
	int tmp,
		s;
	int ite;/*迭代数字*/
	scanf("%s", num_c);
	cnt = 0;
	int j = 0;
	printf("%s->", num_c);
	/*字符数组转换为整型数组*/
	for (int i = 0; i < 4; i++)
	{
		num[i] = num_c[i] - 48;
	}

	while (1)
	{

		/*整型数组中的数码转换为十进制数暂存在num_save[]中*/
		//num_save[cnt++] = To_dec(num,n);

		/*排序,使得num中的数码从小大到大*/
		bubble_sort(num, n);
		/*使num_reverse[]中的数码从大到小:*/
		for (int i = 0; i < n; i++)
		{
			num_reverse[i] = num[n - 1 - i];
		}

		/*分别将两个排好序的整型数组转到十进制数,用较大者-较小者,得到第一个结果.*/
		tmp = To_dec(num_reverse, 4) - To_dec(num, 4);
		/*从头扫描比较是否出现与当前tmp相同的值*/
		for (j = 0; j < cnt; j++)
		{
			if (num_save[j] == tmp)
				break;//?????
		}//for
		if (num_save[j] == tmp)
		{
			break;/*跳出外重循环*/
		}
		//printf("%d", num_save[cnt]);
		//if (num_save[j] != tmp)
		//{
		//	printf("->");
		//}
		num_save[cnt++] = tmp;
		for (int i = 0; i < n; i++)
		{
			num[i] = 0;
		}
		To_arr(tmp, num);
	}

	for (int i = 0; i < cnt; i++)
	{
		printf("%d->", num_save[i]);
		
	}
	//....
	printf("%d", num_save[j]);

}

void bubble_sort(int* num, int n)
{
	int tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)/*0<=LHS<n-1-i*/
		{
			if (num[j] > num[j + 1])
			{
				tmp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = tmp;
			}
		}
	}
}