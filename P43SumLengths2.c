//Program P4.3
//find the sum of two lengths given in metres and cm
#include <stdio.h>
int main() {
   int m1, cm1, m2, cm2, mSum, cmSum;
   printf("Enter values for m and cm: ");
   scanf("%d %d", &m1, &cm1);
   printf("Enter values for m and cm: ");
   scanf("%d %d", &m2, &cm2);

   mSum = m1 + m2;     //add the metres
   cmSum = cm1 + cm2;  //add the centimetres
   if (cmSum >= 100) {
      mSum = mSum + cmSum / 100;
      cmSum = cmSum % 100;
   }
   printf("\nSum is %dm %dcm\n", mSum, cmSum);
}
