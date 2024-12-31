#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

int is_leap_year(int year);
int sum(int year, int month, int day);

int main()
{
    struct date today;
    scanf("%d.%d.%d", &today.year, &today.month, &today.day);
    int ans = 0;
    ans = sum(today.year, today.month, today.day);
    printf("%d", ans);
}
int sum(int year, int month, int day)
{
    int ans = 0;
    for (int i = 1; i < month; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            ans += 31;
        else if (i == 2)
        {
            if (is_leap_year(year))
            {
                ans += 29;
            }
            else
            {
                ans += 28;
            }
        }
        else
        {
            ans += 30;
        }
    }
    ans += day;
    return ans;
}
int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
