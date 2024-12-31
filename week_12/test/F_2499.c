#include<stdio.h>
int nixu(int n)
{
	int b[7]={0};
	int cnt = 0;
	while (n > 0)
	{
		b[cnt++] = n % 2;
		n /= 2;
	}
	int ans = 0;
	for (int i = 0; i < 7; i++)
		ans = ans * 2 + b[i];
	return ans;
}
 
int main()
{
	char a[100]={'\0'};
	int cnt = 0;
	while (scanf("%d", &a[cnt]), a[cnt] != 0)
	{
		a[cnt] = nixu(a[cnt]);
		cnt++;
	}
	printf("%s", a);
	return 0;
}