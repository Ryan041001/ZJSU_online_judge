#include <stdio.h>
#include <stdlib.h>
int main()
{
	int h1 = 0, h2 = 0, h3 = 0, m1 = 0, m2 = 0, m3 = 0, s1 = 0, s2 = 0, s3 = 0;
	scanf("%d:%d:%d", &h1, &m1, &s1);
	scanf("%d:%d:%d", &h2, &m2, &s2);
	if (h1 * 3600 + m1 * 60 + s1 < h2 * 3600 + m2 * 60 + s2)
	{
		h3 = h2 - h1;
		m3 = m2 - m1;
		s3 = s2 - s1;
		if (s3 < 0)
		{
			s3 += 60;
			m3--;
		}
		if (m3 < 0)
		{
			m3 += 60;
			h3--;
		}
	}
	else
	{
		h3 = h1 - h2;
		m3 = m1 - m2;
		s3 = s1 - s2;
		if (s3 < 0)
		{
			s3 += 60;
			m3--;
		}
		if (m3 < 0)
		{
			m3 += 60;
			h3--;
		}
	}
	printf("%d:%02d:%02d", h3, m3, s3);
}
