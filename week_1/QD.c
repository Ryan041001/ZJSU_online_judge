#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e, f, g;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	e = a * c;
	f = b * d;
	g = e - f;
	printf("%d", g);
}