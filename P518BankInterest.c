//Program P5.18
     #include <stdio.h>
     int main() {
        int year;
        double initialDeposit, interestRate, target, deposit, interest;

        printf("Initial deposit? ");
        scanf("%lf", &initialDeposit);
        printf("Rate of interest? ");
        scanf("%lf", &interestRate);
        printf("Target deposit? ");
        scanf("%lf", &target);

        printf("\nYear Deposit Interest\n\n");
        deposit = initialDeposit;
        year = 0;
        do {
           year++;
           interest = deposit * interestRate / 100;
           printf("%3d %8.2f %8.2f\n", year, deposit, interest);
           deposit += interest;
        } while (deposit <= target);

        printf("\nDeposit exceeds $%7.2f at the end of year %d\n", target, year);
     }
