#include <stdio.h>
/*int main()
{
    int i, j, k, p, a1, a2, a3, a4, m = 1, flag;
    scanf("%d%d%d%d", &a1, &a2, &a3, &a4);
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5 - i; j++)
        {
            for (k = 0; k <= 5 - i - j; k++)
            {
                for (p = 0; p <= 5 - i - j - k; p++)
                {
                    flag = 1;
                    if (a1 * p + a2 * k + a3 * j + a4 * i == m)
                    {
                        flag = 0;
                        m++;
                    }
                }
            }
        }
    }
    if (flag == 1)
        printf("%d\n", m - 1);
}*/
int main()

{

    int a, b, c, d, i, j, k, l;

    static int s[1000]; /*邮资*/

    scanf("%d%d%d%d",&a,&b,&c,&d); /*输入四种面值邮票*/

    for (i = 0; i <= 5; i++) /*循环变量i用于控制a分面值邮票的张数，最多5张*/

        for (j = 0; i + j <= 5; j++) /*循环变量j用于控制b分面值邮票的张数，a分邮票＋b分邮票最多5张*/

            for (k = 0; i + j + k <= 5; k++) /*循环变量k用于控制c分面值邮票的张数，a分邮票＋b分邮票＋c分邮票最多5张*/

                for (l = 0; i + j + k + l <= 5; l++) /*循环变量l用于控制d分面值邮票的张数，a分邮票＋b分邮票＋c分邮票+d分邮票最多5张*/

                    if (a * i + b * j + c * k + d * l)

                        s[a * i + b * j + c * k + d * l]++;

    for (i = 1; i <= 1000; i++)

        if (!s[i])

            break;

    printf("%d\n", --i);

    return 0;
}