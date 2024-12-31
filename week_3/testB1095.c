#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char ch[80];
	scanf("%s", &ch);
	for (i = 0; ch[i] != '\0'; i++)
	{
		if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
		{
			printf("%c", ch[i]);
		}
	}
}