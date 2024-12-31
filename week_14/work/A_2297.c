#include <stdio.h>
#include <string.h>
struct index
{
    char fruit[80];
    int price;
};
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        struct index buy[30];
        for (int i = 0; i < n; i++)
        {
            scanf("%s %d", buy[i].fruit, &buy[i].price);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (buy[i].price > buy[j].price)
                {
                    char temp1[80];
                    strcpy(temp1, buy[i].fruit);
                    strcpy(buy[i].fruit, buy[j].fruit);
                    strcpy(buy[j].fruit, temp1);
                    int temp2 = buy[i].price;
                    buy[i].price = buy[j].price;
                    buy[j].price = temp2;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%s %d\n", buy[i].fruit, buy[i].price);
        }
    }
}