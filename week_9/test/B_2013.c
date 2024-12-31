#include<stdio.h>
int main()
{
	int N, i, j = 0;
	int A[100] = { 0 }, fir_i[100] = {0}, last_i[100] = {0};
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	
	int flag = 0;
	for (i = 0; i < N; i++)
	{
		if (A[i] == A[i + 1])
		{
			flag = 1;
			if((i >= 1) && (A[i] != A[i - 1]))
				fir_i[j] = i;   //等值数段开始的下标
			if (((i + 1) == (N - 1)) || A[i + 1] != A[i + 2])
			{
				last_i[j] = i + 1;//等值数段结束的下标
				j++;//记录等值段的下标
			}
		}
	}

	int max = last_i[0] - fir_i[0] + 1, maxj = 0;
	for (i = 1; i < j; i++)//找到最长等值段对应的下标maxj
	{
		if (last_i[i] - fir_i[i] + 1 > max)
		{
			maxj = i;
		}
	}

	if (flag == 0)
		printf("No equal number list.\n");
	else
		printf("The longest equal number list is from %d to %d.\n", fir_i[maxj], last_i[maxj]);
}

