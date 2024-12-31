#include <stdio.h>
#include <math.h>
int GCM(int m, int n);
int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    int e = 0, f = 0;
    int gcm = 0;
    while (scanf("%d/%d * %d/%d", &a, &b, &c, &d) != EOF)
    {
        e = a * c;
        f = b * d;
        if (e % f == 0)
            printf("%d/%d * %d/%d = %d\n", a, b, c, d, e / f);
        else if (f % e == 0)
            printf("%d/%d * %d/%d = 1/%d\n", a, b, c, d, f / e);
        else if (GCM(e, f))
        {
            gcm = GCM(e, f);
            e /= gcm;
            f /= gcm;
            printf("%d/%d * %d/%d = %d/%d\n", a, b, c, d, e, f);
        }
        else
            printf("%d/%d * %d/%d = %d/%d\n", a, b, c, d, e, f);
    }
}
int GCM(int m, int n)
{
    int gcm = 0;
    if (m > n)
    {
        m = m ^ n;
        n = m ^ n;
        m = m ^ n;
    }
    for (int i = 2; i < sqrt(n); i++)
        if (m % i == 0 && n % i == 0)
            gcm = i;
    return gcm;
}