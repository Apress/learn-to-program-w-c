//Program P4.1
//print job charge based on hours worked and cost of parts
#include <stdio.h>
int main() {
   double hours, parts, jobCharge;
   printf("Hours worked? ");
   scanf("%lf", &hours);
   printf("Cost of parts? ");
   scanf("%lf", &parts);
   jobCharge = hours * 100 + parts;
   if (jobCharge < 150) jobCharge = 150;
   printf("\nCharge for the job: $%3.2f\n", jobCharge);
}
