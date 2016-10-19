//Program P3.6
//calculate interest and service charge for bank customer
#include <stdio.h>
int main() {
   char customer[30], acctNum[30];
   double avgBalance, interest, service;
   int numTrans;

   printf("Name? ");
   gets(customer);
   printf("Account number? ");
   gets(acctNum);
   printf("Average balance? ");
   scanf("%lf", &avgBalance);
   printf("Number of transactions? ");
   scanf("%d", &numTrans);

   interest = avgBalance * 0.06;
   service = numTrans * 0.50;

   printf("\nName: %s\n", customer);
   printf("Average balance: $%3.2f\n", avgBalance);
   printf("Interest: $%3.2f\n", interest);
   printf("Service charge: $%3.2f\n", service);
}
