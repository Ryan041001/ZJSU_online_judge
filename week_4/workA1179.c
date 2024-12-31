#include <stdio.h>
#include <string.h>

int main() {
	char str[100], c;
	int i, len = 0;
	gets(str);
	scanf("%c",&c);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] != c)
			printf("%c", str[i]);
	}
}