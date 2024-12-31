#include <stdio.h>

int main()
{
	int m = 0, n = 0;
	float score[20][20] = {0.0}, avr[40] = {0.0}, max[20] = {0.0}, min[20] = {99.0};
	scanf("%d,%d", &n, &m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%f", &score[i][j]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (score[i][j] > max[i])
				max[i] = score[i][j];
			min[i] = score[i][0];
			if (score[i][j] < min[i])
				min[i] = score[i][j];
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			avr[i] += score[i][j];
	for (int i = 0; i < n; i++)
		avr[i] = (avr[i] - max[i] - min[i]) / (m - 2.0);
	int i = 0, j = 0, k = 0;
	float MAX[20] = {0.0};
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			if (MAX[i] < avr[j])
			{
				MAX[i] = avr[j];
				k = j + 1;
			}
		avr[k - 1] = -1.0;
		printf("第%d名:%d号选手,得分%.2f\n", i + 1, k, MAX[i]);
	}
}