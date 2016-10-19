// Program P4.5
#include <stdio.h>
int main() {
   double hours, rate, regPay, ovtPay, netPay;
   printf("Hours worked? ");
   scanf("%lf", &hours);
   printf("Rate of pay? ");
   scanf("%lf", &rate);

   if (hours <= 40) {
      regPay = hours * rate;
      ovtPay = 0;
   }
   else {
      regPay = 40 * rate;
      ovtPay = (hours - 40) * rate * 1.5;
   }
   netPay = regPay + ovtPay;

   printf("\nRegular pay: $%3.2f\n", regPay);
   printf("Overtime pay: $%3.2f\n", ovtPay);
   printf("Net pay: $%3.2f\n", netPay);
}
