#include <stdio.h>
#include <string.h>

int main()
{
	int m = 0, n = 0;
	int i = 0, j = 0;
	char name[50][50] = {'\0'}, name_[50][50] = {'\0'};
	while (scanf("%d%d", &m, &n) != EOF)
	{
		for (i = 0; i < m; i++)
			scanf("%s", name[i]);
		for (i = 0; i < n; i++)
			scanf("%s", name_[i]);
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (!strcmp(name[i], name_[j]))
				{
					printf("Yes\n");
					break;
				}
			}
			if (j == n)
				printf("No\n");
		}
	}
}
