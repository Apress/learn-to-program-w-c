// Program P5.9
#include <stdio.h>
#include <string.h>
#define MaxRegularHours 40
#define OvertimeFactor 1.5
int main() {
   FILE * in = fopen("paydata.txt", "r");
   FILE * out = fopen("payroll.txt", "w");
   char firstName[20], lastName[20], name[40], bestPaid[40];
   double hours, rate, regPay, ovtPay, netPay;
   double wageBill = 0, mostPay = 0;
   int numEmp = 0;

   fprintf(out,"Name            Hours   Rate  Regular  Overtime    Net\n\n");
   fscanf(in, "%s", firstName);
   while (strcmp(firstName, "END") != 0) {
      numEmp++;
      fscanf(in, "%s %lf %lf", lastName, &hours, &rate);
      if (hours <= MaxRegularHours) {
         regPay = hours * rate;
         ovtPay = 0;
     }
     else {
        regPay = MaxRegularHours * rate;
        ovtPay = (hours - MaxRegularHours) * rate * OvertimeFactor;
     }
     netPay = regPay + ovtPay;
     //make one name out of firstName and lastName
     strcpy(name,firstName); strcat(name," "); strcat(name,lastName);

     fprintf(out, "%-15s %5.1f %6.2f", name, hours, rate);
     fprintf(out, "%9.2f %9.2f %7.2f\n", regPay, ovtPay, netPay);

     if (netPay > mostPay) {
        mostPay = netPay;
        strcpy(bestPaid, name);
     }
     wageBill += netPay;
     fscanf(in, "%s", firstName);
  }
  fprintf(out, "\nNumber of employees: %d\n", numEmp);
  fprintf(out, "Total wage bill: $%3.2f\n", wageBill);
  fprintf(out,"%s earned the most pay of $%3.2f\n",bestPaid, mostPay);
  fclose(in);  fclose(out);
}
