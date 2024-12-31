#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 201
char s1[N],s2[N];
int a[N],b[N],j;
int main()
{
	while(~scanf("%s %s",s1,s2))
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		int len1=strlen(s1);
		int len2=strlen(s2);
		j=0;
		for(int i=len1-1;i>=0;i--)
			a[j++]=s1[i]-'A';
		j=0;
		for(int i=len2-1;i>=0;i--)
			b[j++]=s2[i]-'A';
		for(int i=0;i<N;i++)
		{
			a[i]+=b[i];
			if(a[i]>=26)
			{
				a[i]-=26;
				a[i+1]++;
			}
		}
		int flag=0;
		for(int i=N;i>=0;i--)
		{
			if(flag)
				printf("%c",a[i]+'A');
			else if(a[i])
			{
				printf("%c",a[i]+'A');
				flag=1;
			}
		}
		printf("\n");
	}
	return 0;
}
