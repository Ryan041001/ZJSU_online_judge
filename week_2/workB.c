#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year = 0, month = 0, day = 0;
	scanf("%d%d%d", &year, &month, &day);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		switch (month)
		{
		case 12:
			day += 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31;
			break;
		case 11:
			day += 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31;
			break;
		case 10:
			day += 30 + 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31;
			break;
		case 9:
			day += 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31;
			break;
		case 8:
			day += 31 + 30 + 31 + 30 + 31 + 29 + 31;
			break;
		case 7:
			day += 30 + 31 + 30 + 31 + 29 + 31;
			break;
		case 6:
			day += 31 + 30 + 31 + 29 + 31;
			break;
		case 5:
			day += 30 + 31 + 29 + 31;
			break;
		case 4:
			day += 31 + 29 + 31;
			break;
		case 3:
			day += 29 + 31;
			break;
		case 2:
			day += 31;
			break;
		case 1:
			day = day;
			break;
		default:
			break;
		}
		printf("%d\n", day);
	}
	else
	{
		switch (month)
		{
		case 12:
			day += 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 11:
			day += 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 10:
			day += 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 9:
			day += 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 8:
			day += 31 + 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 7:
			day += 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 6:
			day += 31 + 30 + 31 + 28 + 31;
			break;
		case 5:
			day += 30 + 31 + 28 + 31;
			break;
		case 4:
			day += 31 + 28 + 31;
			break;
		case 3:
			day += 28 + 31;
			break;
		case 2:
			day += 31;
			break;
		case 1:
			day = day;
			break;
		default:
			break;
		}
		printf("%d\n", day);
	}
}