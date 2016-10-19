//Program P3.7
//calculate ticket sales for football match
#include <stdio.h>
int main() {
   double rPrice, sPrice, gPrice;
   double rSales, sSales, gSales, tSales;
   int rTickets, sTickets, gTickets, tTickets;

   printf("Reserved price and tickets sold? ");
   scanf("%lf %d", &rPrice, &rTickets);
   rSales = rPrice * rTickets;
   printf("Stands price and tickets sold? ");
   scanf("%lf %d", &sPrice, &sTickets);
   sSales = sPrice * sTickets;
   printf("Grounds price and tickets sold? ");
   scanf("%lf %d", &gPrice, &gTickets);
   gSales = gPrice * gTickets;

   tTickets = rTickets + sTickets + gTickets;
   tSales = rSales + sSales + gSales;

   printf("\nReserved sales: $%3.2f\n", rSales);
   printf("Stands sales: $%3.2f\n", sSales);
   printf("Grounds sales: $%3.2f\n", gSales);
   printf("\n%d tickets were sold\n", tTickets);
   printf("Total money collected: $%3.2f\n", tSales);
}
