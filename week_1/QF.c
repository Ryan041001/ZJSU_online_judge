#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//计算三角形面积和周长
int main() {
	float a, b, c, s, area, perimeter;
	scanf("%f %f %f", &a, &b, &c);
	if (a >= b + c || b >= a + c || c >= a + b)
		printf("There sides do not correspond to a valid triangle\n");
	else {
		perimeter = a + b + c;
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("%.2f %.2f", area, perimeter);
	}
}