// Program P7.4
        #include <stdio.h>
        int main() {
           int n;
           void printDay(int);
           printf("Enter a day from 1 to 7: ");
           scanf("%d", &n);
           printDay(n);
        }

        void printDay(int d) {
           if (d == 1) printf("Sunday\n");
           else if (d == 2) printf("Monday\n");
           else if (d == 3) printf("Tuesday\n");
           else if (d == 4) printf("Wednesday\n");
           else if (d == 5) printf("Thursday\n");
           else if (d == 6) printf("Friday\n");
           else if (d == 7) printf("Saturday\n");
           else printf("Invalid day\n");
        }
