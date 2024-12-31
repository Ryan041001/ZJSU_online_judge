#include <stdio.h>
#include <stdlib.h>
int main()
{
   int score = 0, sum1 = 0, sum2 = 0, sum3 = 0;
   scanf("%d", &score);
   while (score > 0)
   {
      if (score >= 85)
         sum1++;
      else if (score >= 60 && score < 85)
         sum2++;
      else if (score < 60)
         sum3++;
      scanf("%d", &score);
   }
   printf(">=85:%d\n60-85:%d\n<60:%d", sum1, sum2, sum3);
}